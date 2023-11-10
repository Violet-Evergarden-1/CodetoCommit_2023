#pragma once
#include<iostream>
#include<assert.h>
using namespace std;

class Date
{
public:
	// 全缺省的构造函数
	Date(int year = 2002, int month = 4, int day = 29);

	// 拷贝构造函数
	// d2(d1)
	Date(const Date& d);

	// 析构函数
	~Date();

	//获取某年某月的天数
	int GetMonthDay(int year, int month);

	void Print()const;

	bool operator>(const Date& d)const;
	bool operator<(const Date& d)const;
	bool operator==(const Date& d)const;
	bool operator >= (const Date& d)const;
	bool operator <= (const Date& d)const;
	bool operator != (const Date& d)const;

	// 赋值运算符重载
	// d2 = d3 -> d2.operator=(&d2, d3)
	Date& operator=(const Date& d);

	// 日期-日期 返回天数
	int operator-(const Date& d)const;

	Date operator+(int day)const;
	Date operator-(int day)const;
	Date& operator+=(int day);
	Date& operator-=(int day);

	// 前置++
	Date& operator++();
	// 后置++
	Date operator++(int);

	// 前置--
	Date& operator--();
	// 后置--
	Date operator--(int);

	Date* operator&()
	{
		cout << "Date* operator&()" << endl;

		return this;
		//return nullptr;
		//return (Date*)0x12233222;
	}

	const Date* operator&()const
	{
		cout << "const Date* operator&()const" << endl;

		return this;
		//return nullptr;
	}

	// 友元函数
	friend ostream& operator<<(ostream& out, const Date& d);
	friend istream& operator>>(istream& in, Date& d);

private:
	int _year;
	int _month;
	int _day;
};

ostream& operator<<(ostream& out, const Date& d);
istream& operator>>(istream& in, Date& d);
// 重载操作符必须有一个类类型参数->不能通过重载运算，改变内置类型的运算规则
// int operator+(int i, int j)