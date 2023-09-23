#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<stdio.h>

//移除元素
//给你一个数组 nums 和一个值 val，你需要 原地 移除所有数值等于 val 的元素，并返回移除后数组的新长度。
//要求时间复杂度为O(N)，空间复杂度为O(1)
//元素的顺序可以改变。你不需要考虑数组中超出新长度后面的元素。

//快慢双指针（不改变元素顺序）
//int removeElement(int* nums, int numsSize, int val) 
//{
//	int solwIndex = 0;
//	int fastIndex = 0;
//	for (fastIndex = 0; fastIndex < numsSize; fastIndex++)
//	{
//		//1.没遇到val,快慢指针指向同一元素，赋值不改变元素、++
//		//2.如果快指针等于val，则慢指针不赋值、不++，停留在为val元素处
//		//3.快指针不等于val后，下标为慢指针的val 赋值（覆盖）为 下标为快指针的其他不为val元素，而后++
//		//4.快慢指针都不等于val,赋值（挪动）、++
//		if (nums[fastIndex] != val)
//		{
//			nums[solwIndex] = nums[fastIndex];
//			solwIndex++;
//		}
//	}
//
//	return solwIndex;
//}

//相向双指针（移动元素少，改变了元素顺序）
//1.左指针找val,右指针找非val,左 赋值为 右
//2.直到left>right,数组左全为
//int removeElement(int* nums, int numsSize, int val)
//{
//	int leftIndex = 0;
//	int rightIndex = numsSize-1;
//	while (leftIndex <= rightIndex)
//	{
//		while (leftIndex <= rightIndex && nums[leftIndex] != val)
//		{
//			leftIndex++;
//		}
//		while (leftIndex <= rightIndex && nums[rightIndex] == val)
//		{
//			rightIndex--;
//		}
//		if (leftIndex <= rightIndex)
//			nums[leftIndex++] = nums[rightIndex--];
//	}
//
//	return leftIndex;
//}

//if代替while
//int removeElement(int* nums, int numsSize, int val)
//{
//	int leftIndex = 0;
//	int rightIndex = numsSize-1;
//	while (leftIndex <= rightIndex)
//	{
//		if (nums[rightIndex] == val)
//			rightIndex--;
//		else if (nums[leftIndex] == val)
//		{
//			nums[leftIndex++] = nums[rightIndex--];
//		}
//		else
//			leftIndex++;
//	}
//
//	return leftIndex;
//}


//int main()
//{
//	int arr[] = {1,2,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n",removeElement(arr, sz, 1));
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}