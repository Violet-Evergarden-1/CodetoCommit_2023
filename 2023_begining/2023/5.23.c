#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//交换参数
//int exchange(int*pa, int*pb)
//{
//	int tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	exchange(&a, &b);
//	printf("%d %d", a, b);
//	return 0;
//}

//判断闰年
//int judge_Y(int n)
//{
//	if ((n % 4 == 0) && (n % 100 != 0) || (n % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a = judge_Y(n);
//	if (a == 1)
//		printf("是闰年");
//	else if (a == 0)
//		printf("不是闰年");
//	return 0;
//}

//判断素数并打印100-200素数
//#include<math.h>
//
//int judge_P(int a)
//{
//	int i = 0;
//	for (i = 2; i < sqrt(a); i++)
//	{
//		if (a % i == 0)
//		{
//			return 0;
//		}
//		return 1;
//	}
//}
//
//int main()
//{
//	int a = 0;
//	int i = 0;
//	for (a = 101; a < 200; a += 2)
//	{
//		int b = judge_P(a);
//		if (b)
//			printf("%d ", a);
//	}
//	
//	return 0;
//}

//斐波那契数列(递归)
//int fib(int n)
//{
//	if (n < 3)
//		n = 1;
//	if (n >= 3)
//	{
//		n = fib(n - 1) + fib(n - 2);
//	}
//	return n;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d ", fib(n));
//
//	return 0;
//}
//
////斐波那契数列（循环）
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int ret = 0;
//	if (n < 3)
//		return 1;
//	else if (n >= 3)
//	{
//		while (n >= 3)
//		{
//			ret = a + b;
//			a = b;
//			b = ret;
//			n--;
//		}
//		return ret;
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", fib(n));
//
//	return 0;
//}

//递归实现n的k次方
//int K次方(int n, int k)
//{
//	int ret = 0;
//	if (1 == k)
//		return n;
//	else if (k >= 2)
//	{
//		ret = n * K次方(n, k - 1);
//		return ret;
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	printf("%d ", K次方(n, k));
//
//	return 0;
//}

//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//输入：1729，输出：19
//int DigitSum(n)
//{
//	int ret = 0;
//	if (n < 10)
//		return n;
//	else if (n >= 10)
//	{
//		ret = n % 10 + DigitSum(n / 10);
//		return ret;
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", DigitSum(n));
//
//	return 0;
//}

//编写一个函数 reverse_string(char* string)（递归实现）
//实现：将参数字符串中的字符反向排列，不是逆序打印。
//要求：不能使用C函数库中的字符串操作函数。
//比如 :
//char arr[] = "abcdef";
//逆序之后数组的内容变成：fedcba
  
//#include<string.h>
//void reverse_string(char * arr,char*arr1, int sz)
//{	
//	if (sz>0)
//	{
//		sz--;
//		reverse_string(arr + 1,arr1,sz);
//		arr1[sz] = *arr;
//	}
//}
//
//int main()
//{
//	char arr[] = { 0 };
//	scanf("%s", arr);
//	int sz = strlen(arr);
//	char arr1[] = { 0 };
//	reverse_string(arr,arr1, sz);
//	arr1[sz] = '\0';
//	printf("%s", arr1);
//
//	return 0;
//}