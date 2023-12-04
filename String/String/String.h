#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<assert.h>
using namespace std;

namespace syz
{
    class string
    {
        friend ostream& operator<<(ostream& _cout, const syz::string& s);
        friend istream& operator>>(istream& _cin, syz::string& s);
    public:
        typedef char* iterator;
        typedef const char* const_iterator;

        string(const char* str = "");
        string(const string& s);
        string& operator=(const string& s);
        ~string();

        // iterator
        iterator begin()
        {
            return _str;
        }

        iterator end()
        {
            return _str + _size;
        }

        const_iterator begin()const
        {
            return _str;
        }

        const_iterator end()const
        {
            return _str + _size;
        }



        // modify
        void push_back(char c);
        string& operator+=(char c);
        void append(const char* str);
        string& operator+=(const char* str);
        void clear();
        void swap(string& s);
        const char* c_str()const
        {
            return _str;
        }

        // capacity
        size_t size()const
        {
            return _size;
        }

        size_t capacity()const
        {
            return _capacity;
        }
        bool empty()const
        {
            return _size == 0;
        }
        void resize(size_t n, char c = '\0');
        void reserve(size_t n);

        // access
        char& operator[](size_t index);
        const char& operator[](size_t index)const;

        //relational operators
        bool operator<(const string& s);
        bool operator<=(const string& s);
        bool operator>(const string& s);
        bool operator>=(const string& s);
        bool operator==(const string& s);
        bool operator!=(const string& s);


        // ����c��string�е�һ�γ��ֵ�λ��
        size_t find(char c, size_t pos = 0) const;
        // �����Ӵ�s��string�е�һ�γ��ֵ�λ��
        size_t find(const char* s, size_t pos = 0) const;
        string substr(size_t pos = 0, size_t len = npos);
        // ��posλ���ϲ����ַ�c/�ַ���str�������ظ��ַ���λ��
        string& insert(size_t pos, char c);
        string& insert(size_t pos, const char* str);
        // ɾ��posλ���ϵ�Ԫ�أ������ظ�Ԫ�ص���һ��λ��
        string& erase(size_t pos = 0, size_t len = npos);

    private:
        char* _str;
        size_t _capacity;
        size_t _size;

        const static size_t npos = -1;
    };

    istream& operator>>(istream& in, string& s);
    ostream& operator<<(ostream& out, const string& s);
}