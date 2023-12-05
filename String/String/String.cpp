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

    //string::string(const string& s)
    //{
    //    _str = new char[s.capacity() + 1];
    //    _size = s.size();
    //    _capacity = s.capacity();

    //    strcpy(_str, s.c_str());
    //}

    //����д��
    string::string(const string& s)
    {
        //string tmp = s;�������=����ֵ���أ������ÿ�������
        string tmp(s._str);
        swap(tmp);
    }


    //string& string::operator=(const string& s)
    //{
    //    delete[] _str;
    //    _str = new char[s.capacity() + 1];
    //    _size = s.size();
    //    _capacity = s.capacity();

    //    strcpy(_str, s.c_str());
    //    return *this;
    //}

    //����д��
    string& string::operator=(string s)
    {
        swap(s);

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
            reserve(newCapacity);
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
        assert(index <= _size);

        return _str[index];
    }
    const char& string::operator[](size_t index)const
    {
        assert(index <= _size);

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

    // ����c��string�е�һ�γ��ֵ�λ��
    size_t string::find(char c, size_t pos) const
    {
        for (size_t i = pos; i < _size; i++)
        {
            if (_str[i] == c)
                return i;
        }
        return npos;
    }
    // �����Ӵ�s��string�е�һ�γ��ֵ�λ��
    size_t string::find(const char* s, size_t pos) const
    {
        char* ptr = strstr(_str + pos, s);
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
    // ��posλ���ϲ����ַ�c/�ַ���str�������ظ��ַ���λ��
    string& string::insert(size_t pos, char c)
    {
        assert(pos <= _size);

        if (_capacity == _size)
        {
            int newCapacity = (_capacity == 0 ? 4 : 2 * _capacity);
            reserve(newCapacity);
        }

        //memmove(_str + pos + 1, _str + pos, _size - pos + 1);
        size_t end = _size + 1;
        while (end > pos)
        {
            _str[end] = _str[end - 1];
            --end;
        }

        _str[pos] = c;
        _size++;

        return *this;
    }
    string& string::insert(size_t pos, const char* str)
    {
        assert(pos <= _size);

        size_t len = strlen(str);
        if(_size+len>_capacity)
            reserve(_capacity + len);

        //memmove(_str + pos + len, _str + pos, _size - pos + 1);
        size_t end = _size + len;
        while (end > pos)
        {
            _str[end] = _str[end - len];
            --end;
        }

        strncpy(_str + pos, str, len);
        _size += len;

        return *this;
    }
    // ɾ��posλ�ü��Ժ��len��Ԫ��
    string& string::erase(size_t pos, size_t len)
    {
        assert(pos < _size);

        if (len == npos || pos + len >= _size)
        {
            _str[pos] = '\0';
            _size = pos - 0;
        }
        else
        {
            strcpy(_str + pos, _str + pos + len);
            _size -= len;
        }

        return *this;
    }

    istream& operator>>(istream& in, string& s)
    {
        s.clear();
        char buff[128];
        int i = 0;
        char ch = in.get();//�ܻ�ȡ�ո��\n
        while (ch != ' ' && ch != '\n')
        {
            buff[i++] = ch;
            if (i == 127)
            {
                buff[i] = '\0';
                s += buff;
                i = 0;
            }

            ch = in.get();
        }
        buff[i] = '\0';
        s += buff;

        return in;
    }

    ostream& operator<<(ostream& out, const string& s)
    {
        for (auto ch : s)
        {
            out << ch;//����cout
        }
        return out;
    }
}