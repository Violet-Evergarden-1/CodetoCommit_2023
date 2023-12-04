#include"String.h"

namespace syz
{
    string::string(const char* str)
    {
        _size = strlen(str);
        _capacity = _size;
        _str = new char[_capacity + 1];

        strcpy(_str, str);
    }
    string::string(const string& s)
    {
        _str = new char[s.capacity() + 1];
        _size = s.size();
        _capacity = s.capacity();

        strcpy(_str, s.c_str());
    }

    string& string::operator=(const string& s)
    {
        delete[] _str;
        _str = new char[s.capacity() + 1];
        _size = s.size();
        _capacity = s.capacity();

        strcpy(_str, s.c_str());
        return *this;
    }

    string::~string()
    {
        delete[] _str;
        _str = nullptr;
        _size = 0;
        _capacity = 0;
    }

    // modify
    void string::push_back(char c)
    {
        if (_capacity == _size)
        {
            int newCapacity = (_capacity == 0 ? 4 : 2 * _capacity);
            this->reserve(newCapacity);
        }

        _str[_size++] = c;
        _str[_size] = '\0';
    }
    string& string::operator+=(char c)
    {
        this->push_back(c);
        return *this;
    }
    void string::append(const char* str)
    {
        if (_capacity < _size + strlen(str))
        {
            int newCapacity = (_size + strlen(str));
            this->reserve(newCapacity);
        }
        strcat(_str + _size, str);
        _size += strlen(str);
    }
    string& string::operator+=(const char* str)
    {
        this->append(str);
        return *this;
    }
    void string::clear()
    {
        _str[0] = '\0';
        _size = 0;
    }
    void string::swap(string& s)
    {
        std::swap(_size, s._size);
        std::swap(_capacity, s._capacity);
        std::swap(_str, s._str);
    }

    // capacity
    void string::resize(size_t n, char c )
    {
        if (n < _size)
        {
            _str[n] = '\0';
            _size = n;
        }
        if (n > _size)
        {
            reserve(n);
            while (_size != n)
            {
                (*this) += 'c';
            }
        }
    }
    void string::reserve(size_t n)
    {
        if (n > _capacity)
        {
            char* tmp = new char[n + 1];
            strcpy(tmp, _str);
            delete[] _str;
            _str = tmp;
            _capacity = n;
        }
    }

    //// access
    char& string::operator[](size_t index)
    {
        return _str[index];
    }
    const char& string::operator[](size_t index)const
    {
        return _str[index];
    }

    //relational operators
    bool string::operator<(const string& s) 
    {
        return strcmp(_str, s._str) < 0;
    }
    bool string::operator<=(const string& s)
    {
        return !(*this > s);
    }
    bool string::operator>(const string& s)
    {
        return strcmp(_str, s._str) > 0;
    }
    bool string::operator>=(const string& s)
    {
        return !(*this < s);
    }
    bool string::operator==(const string& s)
    {
        return strcmp(_str, s._str) == 0;
    }
    bool string::operator!=(const string& s)
    {
        return !(*this == s);
    }

    // 返回c在string中第一次出现的位置
    size_t string::find(char c, size_t pos) const
    {
        for (size_t i = pos; i < _size; i++)
        {
            if ((*this)[i] == c)
                return i;
        }
        return npos;
    }
    // 返回子串s在string中第一次出现的位置
    size_t string::find(const char* s, size_t pos) const
    {
        char* ptr = std::strstr(_str + pos, s);
        if (ptr == nullptr)
            return npos;
        else
            return ptr - _str;
    }
    string string::substr(size_t pos, size_t len)
    {
        assert(pos < _size);
        size_t end = pos + len;
        if (len == npos || end >= _size)
            end = _size;

        string tmp;
        tmp.reserve(end - pos);
        for (size_t i = pos; i < end; i++)
        {
            tmp += _str[i];
        }
  
        return tmp;
    }
    // 在pos位置上插入字符c/字符串str，并返回该字符的位置
    string& string::insert(size_t pos, char c)
    {
        assert(pos <= _size);
        reserve(_capacity + 1);
        std::memmove(_str + pos + 1, _str + pos, _size - pos + 1);
        _str[pos] = c;
        _size++;

        return *this;
    }
    string& string::insert(size_t pos, const char* str)
    {
        assert(pos <= _size);
        size_t len = strlen(str);
        reserve(_capacity + len);
        std::memmove(_str + pos + len, _str + pos, _size - pos + 1);
        std::strncpy(_str + pos, str, len);
        _size += len;

        return *this;
    }
    // 删除pos位置上的元素，并返回该元素的下一个位置
    string& string::erase(size_t pos, size_t len)
    {
        if (len == npos)
        {
            _str[pos] = '\0';
        }
        std::memmove(_str + pos, _str + pos + len, _size - pos - len + 1);          

        return *this;
    }

    istream& operator>>(istream& in, string& s)
    {
        s.clear();
        char buff[128];
        int i = 0;
        char ch = in.get();
        while (ch != ' ' && ch != '\n')
        {
            buff[i++] = ch;
            ch = in.get();
            if (i == 127)
            {
                buff[i] = '\0';
                s += buff;
                i = 0;
            }
        }
        buff[i] = '\0';
        s += buff;

        return in;
    }

    ostream& operator<<(ostream& out, const string& s)
    {
        for (auto ch : s)
        {
            cout << ch;
        }
        return out;
    }
}