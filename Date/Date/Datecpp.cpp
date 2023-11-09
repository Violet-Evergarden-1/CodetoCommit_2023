#include"Date.h"

// 全缺省的构造函数
Date::Date(int year, int month, int day)
{
	_year = year;
	_month = month;
	_day = day;

	if (_year < 1 || _month < 1 || _month>12 || _day<1 || _day>GetMonthDay(_year, _month))
	{
		//assert(false);
		Print();
		cout << "日期非法" << endl;
	}
}

//获取某年某月的天数
int Date::GetMonthDay(int year, int month)
{
	assert(year >= 1 && month >= 1 && month <= 12);

	int monthArr[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	if (month == 2 && (year % 400 == 0 || year % 4 == 0 && year % 100 != 0))
		return 29;
	
	return monthArr[month];
}

void Date::Print()
{
	cout << _year << "/" << _month << "/" << _day << endl;
}


// 拷贝构造函数
// Date d2(d1)
Date::Date(const Date& d)
{
	_year = d._year;
	_month = d._month;
	_day = d._day;
}

// 析构函数
Date::~Date()
{
	_year = 0;
	_month = 0;
	_day = 0;
}

// 赋值运算符重载
// d2 = d3 -> d2.operator=(d3)
Date& Date::operator=(const Date& d)
{
	if (this != &d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}

	return *this;
}

bool Date::operator==(const Date& d)
{
	return _year == d._year && _month == d._month && _day == d._day;
}

bool Date::operator != (const Date& d)
{
	return !(*this == d);
}

bool Date::operator>(const Date& d)
{
	if (_year > d._year || 
		(_year == d._year && _month > d._month) ||
		(_year == d._year && _month == d._month && _day > d._day))
		return true;

	return false;
}

bool Date::operator<(const Date& d)
{
	return !(*this > d);
}

bool Date::operator >= (const Date& d)
{
	return *this > d || *this == d;
}
bool Date::operator <= (const Date& d)
{
	return !(*this > d);
}


// 日期+=天数
Date& Date::operator+=(int day)
{
	if (day < 0)
	{
		return *this -= -day;
	}

	_day += day;
	while (_day > GetMonthDay(_year, _month))
	{
		_day -= GetMonthDay(_year, _month);
		++_month;

		if (_month == 13)
		{
			++_year;
			_month = 1;
		}
	}
	return *this;
}

// 日期+天数
Date Date::operator+(int day)
{
	Date tmp(*this);
	tmp += day;

	return tmp;
}

// 日期-=天数
Date& Date::operator-=(int day)
{
	if (day < 0)
	{
		return *this += -day;
	}

	_day -= day;
	while (_day <= 0)
	{
		--_month;
		if (_month == 0)
		{
			--_year;
			_month = 12;
		}

		_day += GetMonthDay(_year, _month);
	}
	return *this;
}

// 日期-天数
Date Date::operator-(int day)
{
	Date tmp(*this);
	tmp -= day;

	return tmp;
}

// 前置++
Date& Date::operator++()
{
	_day++;
	if (_day > GetMonthDay(_year, _month))
	{
		++_month;
		_day = 1;
		if (_month == 13)
		{
			++_year;
			_month = 1;
		}
	}
	return *this;
}

// 后置++
Date Date::operator++(int)
{
	Date tmp(*this);
	++*this;

	return tmp;
}

// 前置--
Date& Date::operator--()
{
	_day--;
	if (_day < 1)
	{
		--_month;
		if (_month == 0)
		{
			--_year;
			_month = 12;
		}

		_day = GetMonthDay(_year, _month);
	}
	return *this;
}

// 后置--
Date Date::operator--(int)
{
	Date tmp(*this);
	--*this;

	return tmp;
}

// 日期-日期 返回天数
int Date::operator-(const Date& d)
{
	int flag = 1;
	Date big(*this);
	Date small(d);

	if (*this < d)
	{
		big = d;
		small = *this;
		flag = -1;
	}

	int count = 0;
	while (small != big)
	{
		++count;
		++small;
	}
	return flag * count;
}
