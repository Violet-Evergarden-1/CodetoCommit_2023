#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#include<math.h>

//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
//int main()
//{
//	int i = 1;
//	float a = 0;
//	float b = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		a = pow(-1, i + 1);
//		b += a / i;
//	}
//	printf("%f", b);
//	return 0;
//}

//编写程序数一下 1到 100 的所有整数中出现多少个数字9

//int main()
//{
//	int i = 0;
//	int count = 0;
//
//
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//编写代码在一个整形有序数组中查找具体的某个数
//
//要求：找到了就打印数字所在的下标，找不到则输出：找不到。
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = 8;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int flag = 0;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] == n)
//		{
//			printf("%d\n", mid);
//			flag = 1;
//			break;
//		}
//		if (arr[mid] < n)
//			left = mid + 1;
//		else if (arr[mid] > n)
//			right = mid - 1;
//	}
//	
//	if (flag == 0)
//		printf("找不到");
//	return 0;
//}