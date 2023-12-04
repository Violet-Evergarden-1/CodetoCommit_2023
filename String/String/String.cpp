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
    //void string::swap(string& s)
    //{

    //}

    //// capacity

    //bool string::empty()const 
    //{

    //}
    //void string::resize(size_t n, char c )
    //{

    //}
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
    //char& string::operator[](size_t index)
    //{

    //}
    //const char& string::operator[](size_t index)const
    //{

    //}

    ////relational operators
    //bool string::operator<(const string& s) 
    //{

    //}
    //bool string::operator<=(const string& s)
    //{

    //}
    //bool string::operator>(const string& s)
    //{

    //}
    //bool string::operator>=(const string& s)
    //{

    //}
    //bool string::operator==(const string& s)
    //{

    //}
    //bool string::operator!=(const string& s)
    //{

    //}


    //// ����c��string�е�һ�γ��ֵ�λ��
    //size_t string::find(char c, size_t pos) const
    //{

    //}
    //// �����Ӵ�s��string�е�һ�γ��ֵ�λ��
    //size_t string::find(const char* s, size_t pos) const
    //{

    //}
    //string string::substr(size_t pos, size_t len)
    //{

    //}
    //// ��posλ���ϲ����ַ�c/�ַ���str�������ظ��ַ���λ��
    //string& string::insert(size_t pos, char c)
    //{

    //}
    //string& string::insert(size_t pos, const char* str)
    //{

    //}
    //// ɾ��posλ���ϵ�Ԫ�أ������ظ�Ԫ�ص���һ��λ��
    //string& string::erase(size_t pos, size_t len)
    //{

    //}

    istream& operator>>(istream& in, string& s)
    {
        s.clear();
        char buff[128];
        int i = 0;
        char ch = in.get();
        while (ch != '\n')
        {
            buff[i++] = ch;
            if (i == 127)
            {
                buff[i] = '\0';
                s += buff;
                i = 0;
            }
            buff[i] = '\0';
            s += buff;

            return in;
        }
        return cin;
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