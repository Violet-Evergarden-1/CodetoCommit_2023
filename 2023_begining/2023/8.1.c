#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//轮转数组（右旋技能）
//给定一个整数数组 nums，将数组中的元素向右轮转 k 个位置，其中 k 是非负数。

//1、创建新数组
//void rotate(int* nums, int numsSize, int k)
//{
//    int arr[7] = { 0 };
//    int i = 0;
//    k %= numsSize;
//    for (i = 0; i < numsSize; i++)
//    {
//        arr[(k + i) % numsSize] = nums[i];//3,4,5,6,0,1,2=0,1,2,3,4,5,6
//    }
//    for (i = 0; i < numsSize; i++)
//    {
//        nums[i] = arr[i];
//    }
//}

//2、逆序数组，再分别逆序
//void swap(int* arr, int sz)
//{
//    int* left = &arr[0];
//    int* right = &arr[sz - 1];
//    while (left < right)
//    {
//        int tmp = *left;
//        *left = *right;
//        *right = tmp;
//        left++;
//        right--;
//    }
//}
//
//void rotate(int* nums, int numsSize, int k)
//{
//    k = k % numsSize;
//    swap(nums, numsSize);
//    swap(nums, k);
//    swap(nums + k, numsSize - k);
//}
//
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7 };
//    rotate(arr, 7, 3);
//    
//    int i = 0;
//    for (i = 0; i < 7; i++)
//    {
//        printf("%d", *(arr+i));
//    }
//
//    return 0;
//}

//消失的数字
//数组nums包含从0到n的所有整数，但其中缺了一个。请编写代码找出那个缺失的整数。
//int missingNumber(int* nums, int numsSize)
//{
//    int n = 0;
//    int i = 0;
//    for (i = 0; i <= numsSize; i++)
//    {
//        n ^= i;
//    }
//    for (i = 0; i < numsSize; i++)
//    {
//        n ^= nums[i];
//    }
//    return n;
//}