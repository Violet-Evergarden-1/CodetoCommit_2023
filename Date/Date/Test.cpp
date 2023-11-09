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
	Date d1(2023, 10, 28);
	d1.Print();

	Date d2(2002, 4, 29);
	int ret1 = d2 - d1;
	cout << ret1;
}

int main()
{
	TestDate1();

	return 0;
}
