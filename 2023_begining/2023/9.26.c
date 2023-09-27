#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>

//void print(int* a, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d", a[i]);
//	}
//}
//
////¼ÆÊýÅÅÐò
//void CountSort(int* a,int n)
//{
//	int min = a[0], max = a[0];
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] < min)
//			min = a[i];
//		if (a[i] > max)
//			max = a[i];
//	}
//
//	int range = max - min + 1;
//	int* count = (int*)malloc(sizeof(int) * range);
//	if (count == NULL)
//	{
//		perror("malloc failed");
//		return;
//	}
//	memset(count, 0, sizeof(int) * range);
//
//	for (int i = 0; i < n; i++)
//	{
//		count[a[i] - min]++;
//	}
//
//	int i = 0;
//	for (int index = 0; index < range; index++)
//	{
//		while (count[index]--)
//		{
//			a[i++] = index + min;
//		}
//	}
//}


//int main()
//{
//	int a[] = { 5, 2, 3, 1 };
//	int sz = sizeof(a) / sizeof(a[0]);
//	CountSort(a, sz);
//	print(a, sizeof(a) / sizeof(a[0]));
//
//	printf("\n");
//
//	int b[] = { 9,8,7,6,5,4,3,2,1,0 };
//	sz = sizeof(b) / sizeof(b[0]);
//	CountSort(b, sz);
//	print(b, sizeof(b) / sizeof(b[0]));
//
//	return 0;
//}