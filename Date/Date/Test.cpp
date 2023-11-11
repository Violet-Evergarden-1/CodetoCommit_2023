#define _CRT_SECURE_NO_WARNINGS 1 
#include"Date.h"

void TestDate1()
{
	Date d1(2023, 10, 28);
	d1.Print();

	Date d2;
	d2.Print();

	d2.operator=(d2);
	d2.Print();
}

void TestDate2()
{
	Date d1(2020, 3, 1);
	d1.Print();

	//Date ret1 = d1 - 10000;
	//ret1.Print();

	//Date ret3 = d1 + 10000;
	//ret3.Print();

	//--d1;
	//d1.operator--();
	//d1.Print();

	// 语法设计，无法逻辑闭环，那么这时就只能特殊处理
	// 特殊处理
	d1--;
	d1.Print();
	d1.operator--(1);
	d1.Print();
}

void TestDate3()
{
	Date d1(2011, 1, 1);
	d1.Print();

	//Date d2(2011, 4, 22);
	 cout<<d1 + 3;
}

void TestDate4()
{
	// const对象和非const对象都可以调用const成员函数
	const Date d1(2023, 10, 31);
	d1.Print();

	Date d2(2023, 1, 1);
	d2.Print();

	d1 < d2;
	d2 < d1;

	d1.operator&();
	d2.operator&();

	cout << &d1 << endl;
	cout << &d2 << endl;
}

void TestDate5()
{
	//Date d1(2023, 1, 1);
	//cout << d1 ;
	//cin >> d1;
	//cout << d1 ;

	
	int year, month, day;
	scanf("%4d%2d%2d", &year, &month, &day);
	Date d1(year, month, day);

	cout << d1;

}

int main()
{
	TestDate3();

	return 0;
}
