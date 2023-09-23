#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//错误的集合
//集合 s 包含从 1 到 n 的整数。不幸的是，因为数据错误，导致集合里面某一个数字复制了成了集合里面的另
//外一个数字的值，导致集合 丢失了一个数字 并且 有一个数字重复 。
//给定一个数组 nums 代表了集合 S 发生错误后的结果。
//请你找出重复出现的整数，再找到丢失的整数，将它们以数组的形式返回。
//示例 1：
//输入：nums = [1, 2, 2, 4]
//输出：[2, 3]
//示例 2：
//输入：nums = [1, 1]
//输出：[1, 2]


//int* findErrorNums(int* nums, int numsSize, int* returnSize)
//{
//    int x = 0;
//    int i = 0;
//
//    //异或数组和0-n，得到丢失数字和重复数字的异或
//    for (i = 0; i < numsSize; i++)
//        x = x ^ nums[i];
//    for (i = 1; i <= numsSize; i++)
//        x = x ^ i;
//
//    //获得不同位
//    for (i = 0; i < 32; i++)
//    {
//        if ((x >> i) & 1 == 1)
//            break;
//    }
//    int dif = i;
//
//
//    int ret1 = 0, ret2 = 0;
//    //分组异或
//    for (i = 0; i < numsSize; i++)
//    {
//        if ((nums[i] >> dif) & 1)
//            ret1 = ret1 ^ nums[i];
//        else
//            ret2 = ret2 ^ nums[i];
//    }
//    for (i = 1; i <= numsSize; i ++)
//    {
//        if ((i >> dif) & 1 == 1)
//            ret1 = ret1 ^ i;
//        else
//            ret2 = ret2 ^ i;
//    }
//
//    int* ret = (int*)malloc(sizeof(int) * 2);
//    *returnSize = 2;
//
//    //遍历数组区分重复数字和缺失数字
//    for (i = 0; i < numsSize; i++)
//    {
//        if (nums[i]==ret1)
//        {
//
//        }
//        else if (nums[i] == ret2)
//        {
//            ret[0] = ret2;
//            ret[1] = ret1;
//        }
//    }
//
//    return ret;
//}
//
//int main()
//{
//    int arr[] = { 1,2,3,3,5 };
//    int sz = sizeof(arr)/sizeof(arr[0]);
//    int retsz = 0;
//    int* ret = findErrorNums(arr, sz, &retsz);
//
//    printf("%d %d\n", ret[0], ret[1]);
//
//    return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	while (n--)
//	{
//		char key[100];
//		scanf("%s", key);
//
//		if (*key >= '0' && *key <= '9')
//		{
//			printf("NO\n");
//			continue;
//		}
//
//		int len = strlen(key);
//		if (len < 8)
//		{
//			printf("NO\n");
//			continue;
//		}
//
//		int i = 0;
//		int flag = 0;
//		while (len--)
//		{
//			if (*(key + i) > 'A' && *(key + i) < 'z')
//				flag = 1;
//			i++;
//		}
//		if (!flag)
//		{
//			printf("NO\n");
//			continue;
//		}
//
//		printf("YES\n");
//	}
//	return 0;
//}

