#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//编写一个函数 reverse_string(char* string)（递归实现）
//实现：将参数字符串中的字符反向排列，不是逆序打印。
//要求：不能使用C函数库中的字符串操作函数。
//比如 :
//char arr[] = "abcdef";
//逆序之后数组的内容变成：fedcba

#include<string.h>
//递归
//void reverse_string(char* arr, char* arr1, int sz)
//{
//	if (sz > 0)
//	{
//		sz--;
//		reverse_string(arr + 1, arr1, sz);
//		arr1[sz] = *arr;
//		arr[sz] = *arr;
//	}
//}
//
//
//int main()
//{
//	char arr[] = { 0 };
//	scanf("%s", arr);
//	int sz = strlen(arr);
//	char arr1[] = { 0 };
//	reverse_string(arr, arr1, sz);
//	arr1[sz] = '\0';
//	printf("%s\n", arr1);
//	printf("%s", arr);
//
//	return 0;
//}

//递归2
//

//编写一个函数实现n的k次方，使用递归实现
//int Pow(int n, int k)
//{
//	if (k == 0)
//		return 1;
//	else if (k > 0)
//	{
//		return n * Pow(n, k - 1);
//	}
//	else if (k < 0)
//	{
//		return n * Pow(n, -k);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	printf("%d", Pow(n, k));
//
//	return 0;
//}