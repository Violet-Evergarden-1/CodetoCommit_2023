#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//��ת���飨�������ܣ�
//����һ���������� nums���������е�Ԫ��������ת k ��λ�ã����� k �ǷǸ�����

//1������������
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

//2���������飬�ٷֱ�����
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

//��ʧ������
//����nums������0��n������������������ȱ��һ�������д�����ҳ��Ǹ�ȱʧ��������
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