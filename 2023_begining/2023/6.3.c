#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int My_strlen(char* arr)
//{
//	if (*arr == '\0')
//		return 0;
//	else
//		return 1 + My_strlen(arr + 1);
//}
//
//int main()
//{
//	char arr[] = "abcd";
//	int len = My_strlen(arr);
//	printf("%d", len);
//
//	return 0;
//}

 //斐波那契数
 // 递归，计算量大
//int fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return (fib(n - 1) + fib(n - 2));
//}

//迭代
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret =fib(n);
//	printf("%d", ret);
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	//0~10
//	//越界访问
//	for (i = 0; i <= 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}