#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//void print(int* a, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d", a[i]);
//	}
//}
//
//void Swap(int* a, int* b)
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//
//// ≤Â»Î≈≈–Ú
//void InsertSort(int* a, int n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		int end = i;
//		int tmp = a[end + 1];
//		while (end >= 0)
//		{
//			if (tmp < a[end])
//				a[end + 1] = a[end];
//			else
//				break;
//			end--;
//		}
//		a[end + 1] = tmp;
//	}
//}
//
//// œ£∂˚≈≈–Ú
//void ShellSort(int* a, int n)
//{
//	int gap = n;
//	while (gap > 1)
//	{
//		gap = gap / 3 + 1;
//		for (int i = 0; i < n - gap; i++)
//		{
//			int end = i;
//			int tmp = a[end + gap];
//			while (end >= 0)
//			{
//				if (tmp < a[end])
//					a[end + gap] = a[end];
//				else
//					break;
//				end -= gap;
//			}
//			a[end + gap] = tmp;
//		}
//	}
//}
//
//// —°‘Ò≈≈–Ú
//void SelectSort(int* a, int n)
//{
//	int begin = 0, end = n - 1;
//	while (begin < end)
//	{
//		int mini = begin, maxi = begin;
//
//		for (int i = begin; i <= end; i++)
//		{
//			if (a[i] < a[mini])
//				mini = i;
//			if (a[i] > a[maxi])
//				maxi = i;
//		}
//		Swap(&a[begin], &a[mini]);
//		if (maxi == begin)
//			maxi = mini;
//		Swap(&a[end], &a[maxi]);
//
//		begin++;
//		end--;
//	}
//}
//
//
//// ∂—≈≈–Ú
//void AdjustDown(int* a, int n, int root)
//{
//	int parent = root;
//	int child = parent*2+1;
//
//	while (child < n)
//	{
//		if (child + 1 < n && a[child + 1] > a[child])
//		{
//			child++;
//		}
//
//		if (a[parent] < a[child])
//		{
//			Swap(&a[parent], &a[child]);
//			parent = child;
//			child = parent * 2 + 1;
//		}
//		else
//			break;
//	}
//
//}
//void HeapSort(int* a, int n)
//{
//	for (int i = (n-1-1)/2; i >= 0; i--)
//	{
//		AdjustDown(a, n, i);
//	}
//
//	int end = n;
//	while (--end)
//	{
//		Swap(&a[end], &a[0]);
//
//		AdjustDown(a, end, 0);
//	}
//}
//
//
//int main()
//{
//	//int a[] = {9,8,7,6,5,4,3,2,1};
//	//InsertSort(a, sizeof(a) / sizeof(a[0]));
//	//print(a, sizeof(a) / sizeof(a[0]));
//	//printf("\n");
//
//	//int b[] = {9,8,7,6,5,4,3,2,1};
//	//ShellSort(b, sizeof(b) / sizeof(b[0]));
//	//print(b, sizeof(b) / sizeof(b[0]));
//	 
//	int b[] = {9,8,7,6,5,4,3,2,1};
//	SelectSort(b, sizeof(b) / sizeof(b[0]));
//	print(b, sizeof(b) / sizeof(b[0]));
//	printf("\n");
//
//	int a[] = { 9,8,7,6,5,4,3,2,1 };
//	HeapSort(a, sizeof(a) / sizeof(a[0]));
//	print(a, sizeof(a) / sizeof(a[0]));
//
//	return 0;
//}
