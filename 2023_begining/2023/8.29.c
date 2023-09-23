#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

//int main()
//{
//	char ch;
//	while ((ch = getchar()) != '\n')
//	{
//		if (ch % 2 != 0 && (ch >= 'a' && ch <= 'z'))
//			ch = ch - 'a' + 'A';
//		putchar(ch);
//	}
//	printf("\n");
//	return 0;
//}


//数字在升序数组中出现的次数
//给定一个长度为 n 的非降序数组和一个非负数整数 k ，要求统计 k 在数组中出现的次数
//
//数据范围：0≤n≤1000, 0≤k≤100，数组中每个元素的值满足0≤val≤100
//要求：空间复杂度O(1)，时间复杂度O(logn)

//int GetNumberOfK(int* nums, int numsLen, int k) {
//    if (numsLen == 0)
//        return 0;
//    int left = 0, right = numsLen - 1;
//    int middle = (left + right) / 2;
//    while (left < right)
//    {
//        if (nums[middle] < k)
//        {
//            left = middle + 1;
//        }
//        else
//            right = middle ;
//        middle = (left + right) / 2;
//    }
//
//    int count = 0;
//    int i = middle;
//    if (nums[i] == k)
//    {
//        while (nums[i] == k)
//        {
//            count++;
//            i--;
//        }
//        i = middle + 1;
//        while (nums[i] == k)
//        {
//            count++;
//            i++;
//        }
//    }
//    return count;
//}


//整数转换
//整数转换。编写一个函数，确定需要改变几个位才能将整数A转成整数B。
//示例1 :
//输入：A = 29 （或者0b11101）, B = 15（或者0b01111）
//输出：2

//int convertInteger(int A, int B) {
//	int i = 0, count = 0;
//	int c = A ^ B;
//	for (i = 0; i < 32; i++)
//	{
//		if (c >> i & 1 == 1)
//			count++;
//	}
//	return count;
//}

//int main()
//{
//	int a = 1;
//	for (int i = 0; i || i++ < 5;)
//	{
//		printf("%d\n", a++);
//		Sleep(1000);
//	}
//	return 0;
//}

//747. 至少是其他数字两倍的最大数
//给你一个整数数组 nums ，其中总是存在 唯一的 一个最大整数 。
//请你找出数组中的最大元素并检查它是否 至少是数组中每个其他数字的两倍 。
//如果是，则返回 最大元素的下标 ，否则返回 - 1 。
//输入：nums = [3, 6, 1, 0]
//输出：1
//解释：6 是最大的整数，对于数组中的其他整数，6 至少是数组中其他元素的两倍。
//6 的下标是 1 ，所以返回 1 。

//int dominantIndex(int* nums, int numsSize) {
//	int max = nums[0];
//	int ret = 0;
//
//	for (int i = 0; i < numsSize; i++)
//	{
//		if (nums[i] > max)
//		{
//			max = nums[i];
//			ret = i;
//		}
//	}
//
//	for (int i = 0; i < numsSize; i++)
//	{
//		if (i == ret)
//			continue;
//		if (nums[i] * 2 > max)
//			return -1;
//	}
//
//	return ret;
//}
//
//int main()
//{
//	int arr[] = {3, 6, 1, 0};
//	printf("%d", dominantIndex(arr, sizeof(arr) / sizeof(arr[0])));
//
//	return 0;
//}


//349. 两个数组的交集
//给定两个数组 nums1 和 nums2 ，返回 它们的交集 。输出结果中的每个元素一定是 唯一 的。
//我们可以 不考虑输出结果的顺序 。
//输入：nums1 = [1, 2, 2, 1], nums2 = [2, 2]
//输出：[2]


//排序后双指针比较相等，并定义prev记录上次加入答案的数组，保证加入元素唯一
//int cmp(const void* p1 , const void* p2)
//{
//	return *(int*)p1 - *(int*)p2;
//}
//
//int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
//
//	//排序
//	qsort(nums1, nums1Size, sizeof(int), cmp);
//	qsort(nums2, nums2Size, sizeof(int), cmp);
//
//	int* ret = (int*)malloc(sizeof(int) * (nums1Size+nums2Size));
//
//	int i = 0, idx1 = 0, idx2 = 0;
//	int prev = 0;
//	while (idx1 < nums1Size && idx2 < nums2Size)
//	{
//
//		//第一次相等不与prev比较，并赋值prev,一次后与prev比较跳过重复项
//		if (nums1[idx1] == nums2[idx2])
//		{
//			if (i == 0 || (i != 0 && nums1[idx1] != prev))
//				{
//					ret[i++] = nums1[idx1];
//					prev = nums1[idx1];
//				}
//			idx1++;
//			idx2++;
//		}
//
//		//不相等让值较小的指针++
//		else
//			(nums1[idx1] < nums2[idx2] ? idx1++ : idx2++);
//	}
//
//	*returnSize = i;
//	return ret;
//}
//
//int main()
//{
//
//	int arr1[] = { 1,2,2,1 };
//	int arr2[] = { 2,2 };
//	int returnSize = 0;
//	int* arr = NULL;
//		
//	arr = intersection(arr1, sizeof(arr1) / sizeof(arr1[0]), arr2, 
//		sizeof(arr2) / sizeof(arr2[0]),& returnSize);
//	
//	for (int i = 0; i < returnSize; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}



//int main() {
//    char str[] = "Gene\0ius";
//    print(str);
//    return 0;
//}
//
//print(char* s) {
//    if (*s) {
//        print(++s);
//        printf("%c", *s);
//    }
//}

