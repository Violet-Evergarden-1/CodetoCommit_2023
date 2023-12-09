#include<iostream>
#include<assert.h>
#include<string>
#include<vector>
using namespace std;

namespace syz
{
    template<class T>
    class vector
    {
    public:
        // Vector的迭代器是一个原生指针
        typedef T* iterator;
        typedef const T* const_iterator;

        iterator begin()
        {
            return _start;
        }
        iterator end()
        {
            return _finish;
        }

        const_iterator begin()const
        {
            return _start;
        }
        const_iterator end()const
        {
            return _finish;
        }
        const_iterator cbegin()
        {
            return _start;
        }
        const_iterator cend()
        {
            return _finish;
        }

        // construct and destroy
        vector()
        {}

        vector(int n, const T& value = T())
        {
            _start = new T[n];
            _finish = _start;
            _endOfStorage = _start + n;
            for(int i=0;i<n;i++)
                push_back(value);
        }

        template<class InputIterator>
        vector(InputIterator first, InputIterator last)
        {
            size_t sz = last - first;
            _start = new T[sz];
            memcpy(_start, first, sz * sizeof(T));
            _finish = _start + sz;
            _endOfStorage = _finish;
        }

        //vector(const vector<T>& v)
        //{
        //    _start = new T[v.capacity()];
        //    memcpy(_start, v._start, v.size() * sizeof(T));
        //    _finish = _start + v.size();
        //    _endOfStorage = _start + v.capacity();
        //}

        vector(const vector<T>& v)
        {
            reserve(v.capacity());
            for (const auto& e : v)
            {
                push_back(e);
            }
        }

        vector<T>& operator= (vector<T> v)
        {
            swap(v);
            return *this;
        }

        ~vector()
        {
            delete[] _start;
            _start = nullptr;
            _finish = nullptr;
            _endOfStorage = nullptr;
        }

        // capacity
        size_t size() const
        {
            return _finish - _start;
        }

        size_t capacity() const
        {
            return _endOfStorage - _start;
        }
        void reserve(size_t n)
        {
            if (n > this->capacity())
            {
                size_t old = size();
                T* tmp = new T[n];
                if (_start)
                {
                    memcpy(tmp, _start, old * sizeof(T));
                    delete[]_start;
                }

                _start = tmp;
                _finish = _start + old;
                _endOfStorage = _start + n;
            }
        }
        void resize(size_t n, const T& value = T())
        {
            if (n > capacity())
            {
                reserve(n);
            }

            if (n > size())
            {
                while (n != size())
                {
                    push_back(value);
                }
            }
            else
            {
                _finish = _start + n;
            }
        }

        ////////////////access///////////////////////////////
        T& operator[](size_t pos)
        {
            return *(_start + pos);
        }

        const T& operator[](size_t pos)const
        {
            return *(_start + pos);
        }

        ///////////////modify/////////////////////////////
        void push_back(const T& x)
        {
            if (size() == capacity())
            {
                size_t newCapacity = (size() == 0 ? 4 : 2 * size());
                reserve(newCapacity);
            }
            *_finish = x;
            _finish++;
        }

        void pop_back()
        {
            assert(size() > 0);
            _finish--;
        }

        void swap(vector<T>& v)
        {
            std::swap(_start, v._start);
            std::swap(_finish, v._finish);
            std::swap(_endOfStorage, v._endOfStorage);
        }

        //iterator insert(iterator pos, const T& x);
        //iterator erase(iterator pos);

    private:
        iterator _start = nullptr; // 指向数据块的开始
        iterator _finish = nullptr; // 指向有效数据的尾
        iterator _endOfStorage = nullptr; // 指向存储容量的尾
    };
}