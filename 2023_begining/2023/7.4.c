#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int arr[10] = { 1,2,3,4,5 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	return 0;
//}

//将一个字符串str的内容颠倒过来，并输出（逆序）。
//1≤len(str)≤10000

//#include<string.h>
//
//void Reverse(char* str)
//{
//	char* left = str;
//	char* right = str + strlen(str) - 1;
//	while (left < right)
//	{
//		int tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char str[10000] = { 0 };
//	while (gets(str)) 
//	{
//		Reverse(str);
//		printf("%s\n", str);
//
//	}
//	return 0;
//}


//打印菱形
//用C语言在屏幕上输出以下图案：

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 1;
//	int j = 1;
//	for (i = 1; i < n * 2; i++)
//	{
//		int a = n - i;
//		a = (a > 0 ? a : -a);
//		for (j = 1; j <= a; j++)
//		{
//			printf(" ");
//		}
//		int b = 2 * (n - a) - 1;
//		for (j = 1; j <= b; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，
//如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
//#include<math.h>
//
//int Num(int i)
//{
//	if (i == 0)
//	{
//		return 0;
//	}
//	else
//		return 1 + Num(i / 10);
//}
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int a = 0, b = 0, sum = 0;
//	for (i = 0; i < 100000; i++)
//	{ 
//		int num = Num(i);
//		a = i;
//		sum = 0;
//		for (j = 0; j < num; j++)
//		{
//			b = a %10;
//			a /= 10;
//			sum += (int)pow(b, num);
//		}
//		if (sum == i)
//			printf("%d ", i);
//	}
//
//	return 0;
//}

//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222
// 
//#include<math.h>
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int i = 4;
//	int b = 0;
//	for (i = 4; i >= 0; i--)
//	{
//		b += a * (int)pow(10, i)*(5-i);
//	}
//	printf("%d", b);
//
//	return 0;
//}
//改进
//假设第i项为temp，则第i + 1项为temp * 10 + a
//int main()
//{
//	int a = 0;
//	int n = 0;
//	int i = 0;
//	int sum = 0;
//	int tmp = 0;
//
//
//	scanf("%d%d", &a, &n);
//	for (i = 0; i < n; i++)
//	{
//		tmp = tmp * 10 + a;
//		sum += tmp;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}