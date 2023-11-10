#pragma once
#include<iostream>
#include<assert.h>
using namespace std;

class Date
{
public:
	// ȫȱʡ�Ĺ��캯��
	Date(int year = 2002, int month = 4, int day = 29);

	// �������캯��
	// d2(d1)
	Date(const Date& d);

	// ��������
	~Date();

	//��ȡĳ��ĳ�µ�����
	int GetMonthDay(int year, int month);

	void Print()const;

	bool operator>(const Date& d)const;
	bool operator<(const Date& d)const;
	bool operator==(const Date& d)const;
	bool operator >= (const Date& d)const;
	bool operator <= (const Date& d)const;
	bool operator != (const Date& d)const;

	// ��ֵ���������
	// d2 = d3 -> d2.operator=(&d2, d3)
	Date& operator=(const Date& d);

	// ����-���� ��������
	int operator-(const Date& d)const;

	Date operator+(int day)const;
	Date operator-(int day)const;
	Date& operator+=(int day);
	Date& operator-=(int day);

	// ǰ��++
	Date& operator++();
	// ����++
	Date operator++(int);

	// ǰ��--
	Date& operator--();
	// ����--
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

	// ��Ԫ����
	friend ostream& operator<<(ostream& out, const Date& d);
	friend istream& operator>>(istream& in, Date& d);

private:
	int _year;
	int _month;
	int _day;
};

ostream& operator<<(ostream& out, const Date& d);
istream& operator>>(istream& in, Date& d);
// ���ز�����������һ�������Ͳ���->����ͨ���������㣬�ı��������͵��������
// int operator+(int i, int j)