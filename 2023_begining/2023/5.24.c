#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//递归和非递归分别实现strlen
//递归
//int my_strlen(char* arr)
//{
//	static int count = 0;
//	if (*arr != '\0')
//	{
//		count++;
//		my_strlen(arr + 1);
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = { 0 };
//	scanf("%s", arr);
//	printf("%d", my_strlen(arr));
//
//	return 0;
//}

//非递归
//int my_strlen(char* arr)
//{
//	int count = 0;
//	int i = 0;
//	while (*arr != 0)
//	{
//		arr++;
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = { 0 };
//	scanf("%s", arr);
//	printf("%d", my_strlen(arr));
//
//	return 0;
//}

//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）
//递归
//int factorial(int n, int ret)
//{
//	if (n != 1)
//	{
//		ret = n * factorial((n - 1), ret);
//	}
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 1;
//	printf("%d", factorial(n, ret));
//
//	return 0;
//}

//非递归
//int factorial(n)
//{
//	int ret = 1;
//	for (ret = 1; n != 0; n--)
//	{
//		ret *= n;
//	}
//	return ret;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 1;
//	printf("%d", factorial(n));
//
//	return 0;
//}

//递归方式实现打印一个整数的每一位
//void each_printf(int n)
//{
//	if (n >= 10)
//	{
//		int a = 0;
//		a = n % 10;
//		each_printf(n / 10);
//		printf("%d ", a);
//	}
//	else if (n < 9)
//		printf("%d ", n);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	each_printf(n);
//
//	return 0;
//}