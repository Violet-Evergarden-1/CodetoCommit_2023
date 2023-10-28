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

	void Print();

	bool operator>(const Date& d);
	bool operator<(const Date& d);
	bool operator==(const Date& d);
	bool operator >= (const Date& d);
	bool operator <= (const Date& d);
	bool operator != (const Date& d);

	// 赋值运算符重载
	// d2 = d3 -> d2.operator=(&d2, d3)
	Date& operator=(const Date& d);

	// 日期+天数
	Date operator+(int day);
	// 日期-天数
	Date operator-(int day);
	// 日期+=天数
	Date& operator+=(int day);
	// 日期-=天数
	Date& operator-=(int day);

	// 前置++
	Date& operator++();
	// 后置++
	Date operator++(int);

	// 前置--
	Date& operator--();
	// 后置--
	Date operator--(int);

	// 日期-日期 返回天数
	int operator-(const Date& d);

private:
	int _year;
	int _month;
	int _day;
};