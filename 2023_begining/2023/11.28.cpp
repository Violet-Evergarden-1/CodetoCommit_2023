#include<iostream>
using namespace std;

//template<class T1, class T2>
//T1 Add(T1 left, T2 right)
//{
//    return left + right;
//}
////
//int main(void)
//{
//	int a = 10;
//	char b = (char)a;
//	double c = 20.0;  //类型不匹配，会进行隐式类型转换
//
//	// 显式实例化：在函数名后的<>中指定模板参数的实际类型
//	//Add(a, b);
//	cout << Add(a, b) << endl;
//
//	return 0;
//}

// 专门处理int的加法函数
//int Add(int left, int right)
//{
//    return left + right;
//}

// 通用加法函数
//template<class T1, class T2>
//T1 Add(T1 left, T2 right)
//{
//    return left + right;
//}

//void Test()
//{
//    Add(1, 2); 		// 与非函数模板类型完全匹配，不需要函数模板实例化
//    Add(1, 2.0); 	// 模板函数可以生成更加匹配的版本，编译器根据实参生成更加匹配的Add函数
//}
//
//int main()
//{
//    Test();
//}
