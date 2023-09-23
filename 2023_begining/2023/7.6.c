#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//} 

//调整数组使奇数全部都位于偶数前面。
//题目：
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。

//额外创建了数组，浪费空间，遍历两次，浪费时间
//void Swap(int arr[], int arr1[], int arr2[], int sz)
//{
//	int i = 0;
//	int a = 0;
//	int b = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] % 2 == 1)//奇数放在arr1中
//		{
//			arr1[a] = arr[i];
//			a++;
//		}
//		else
//		{
//			arr2[b] = arr[i];//偶数放在arr2中
//			b++;
//		}
//	}
//	for (i = 0; i < sz; i++)//合并arr1、arr2到arr中
//	{
//		if (i <= a)
//		{
//			arr[i] = arr1[i];
//		}
//		else
//		{
//			arr[i] = arr2[i - a];
//		}
//	}
//}
//
//优化
/*
思路：
1. 给定两个下标left和right，left放在数组的起始位置，right放在数组中最后一个元素的位置
2. 循环进行一下操作
 a. 如果left和right表示的区间[left, right]有效，进行b，否则结束循环
 b. left从前往后找，找到一个偶数后停止
 c. right从后往前找，找到一个奇数后停止
 d. 如果left和right都找到了对应的数据，则交换，继续a，
 优点：整个数组只遍历了一遍
*/
//void Swap(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		while (left < right && arr[left] % 2 == 1)//l<r防止越界和死循环（如果只有奇数）
//		{
//			left++;
//		}
//		while (left < right && arr[right] % 2 == 0)
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//
//
//int main()
//{
//	int arr[10] = { 0};
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	//int arr1[10] = {0};
//	//int arr2 [10] = {0};
//	//Swap(arr, arr1, arr2, sz);
//	Swap(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	
//	return 0;
//}

//模拟实现库函数：strcpy;
//char *strcpy(dst, src) - copy one string over another
//
//*Purpose:
//*       Copies the string src into the spot specified by
//*       dest; assumes enough room.
//*
//*Entry:
//*       char * dst - string over which "src" is to be copied
//*       const char * src - string to be copied over "dst"
//*
//*Exit:
//*       The address of "dst"
//*
//*Exceptions:

//char* My_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest++ = *src++)
//		;//空语句
//
//	return dest;
//}
//
//int main()
//{
//	char arr1[] = "strom";
//	char arr2[20] = "\0";
//	//My_strcpy(arr2, arr1);
//	//printf("%s", arr2);
//	printf("%s\n", my_strcpy(arr2, arr1));
//
//	return 0;
//}
