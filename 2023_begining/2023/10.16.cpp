#include<iostream>
using namespace std;

//int& Add(int a, int b)
//{
//	int c = a + b;
//	return c;
//}
//
//int main()
//{
//	int& ret = Add(1, 2);
//	cout << ret << endl;
//
//	Add(3, 4);
//
//	cout << ret << endl;
//	return 0;
//}

//int& Count()
//{
//	int n = 0;
//	n++;
//
//	return n;
//}
//
//int main()
//{
//	int& ret = Count();
//	cout << ret << endl;
//
//	return 0;
//}

//#include <time.h>
//struct A { int a[10000]; };
//
//void TestFunc1(A aa) {}
//
//void TestFunc2(A& aa) {}
//
//void TestRefAndValue()
//{
//	A a;
//	 以值作为函数参数
//	size_t begin1 = clock();
//	for (size_t i = 0; i < 10000; ++i)
//		TestFunc1(a);
//	size_t end1 = clock();
//
//	 以引用作为函数参数
//	size_t begin2 = clock();
//	for (size_t i = 0; i < 10000; ++i)
//		TestFunc2(a);
//	size_t end2 = clock();
//
//	 分别计算两个函数运行结束后的时间
//	cout << "TestFunc1(A)-time:" << end1 - begin1 << endl;
//	cout << "TestFunc2(A&)-time:" << end2 - begin2 << endl;
//}
//
//
//A a;
// 值返回
//A TestFunc1() { return a; }
// 引用返回
//A& TestFunc2() { return a; }
//
//void TestReturnByRefOrValue()
//{
//	 以值作为函数的返回值类型
//	size_t begin1 = clock();
//	for (size_t i = 0; i < 100000; ++i)
//		TestFunc1();
//	size_t end1 = clock();
//
//	 以引用作为函数的返回值类型
//	size_t begin2 = clock();
//	for (size_t i = 0; i < 100000; ++i)
//		TestFunc2();
//	size_t end2 = clock();
//
//	 计算两个函数运算完成之后的时间
//	cout << "TestFunc1 time:" << end1 - begin1 << endl;
//	cout << "TestFunc2 time:" << end2 - begin2 << endl;
//}
//
//int main()
//{
//	TestRefAndValue();
//	TestReturnByRefOrValue();
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int& ra = a;
//	cout << "&a = " << &a << endl;
//	cout << "&ra = " << &ra << endl;
//	return 0;
//}

