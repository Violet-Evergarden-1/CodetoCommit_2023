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

	void Print();

	bool operator>(const Date& d);
	bool operator<(const Date& d);
	bool operator==(const Date& d);
	bool operator >= (const Date& d);
	bool operator <= (const Date& d);
	bool operator != (const Date& d);

	// ��ֵ���������
	// d2 = d3 -> d2.operator=(&d2, d3)
	Date& operator=(const Date& d);

	// ����+����
	Date operator+(int day);
	// ����-����
	Date operator-(int day);
	// ����+=����
	Date& operator+=(int day);
	// ����-=����
	Date& operator-=(int day);

	// ǰ��++
	Date& operator++();
	// ����++
	Date operator++(int);

	// ǰ��--
	Date& operator--();
	// ����--
	Date operator--(int);

	// ����-���� ��������
	int operator-(const Date& d);

private:
	int _year;
	int _month;
	int _day;
};