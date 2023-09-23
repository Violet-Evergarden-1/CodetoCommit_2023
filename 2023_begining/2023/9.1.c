#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


//int main()
//{
//	int a[12] = { 1,2,3,4,5,6,7,8,9,10,11,12 }, * p[4], i;
//	for (i = 0; i < 4; i++)
//		p[i] = &a[i * 3];
//	printf("%d\n",p[3][2]);
//	return 0;
//}

//int main()
//{
//	int x = 0;
//	printf("%d\n", ((x = 4 * 5, x * 5), x + 5));
//	return 0;
//}



//728. 自除数
//自除数 是指可以被它包含的每一位数整除的数。
//例如，128 是一个 自除数 ，因为 128 % 1 == 0，128 % 2 == 0，128 % 8 == 0。
//自除数 不允许包含 0 。
//给定两个整数 left 和 right ，返回一个列表，列表的元素是范围[left, right] 内所有的 自除数 
//输入：left = 47, right = 85
//输出：[48, 55, 66, 77]


//递归
//void isSelfdivisor(int src,int x,int* ret)
//{
//	//终止递归
//	if (x == 0)
//		return;
//
//	//如果有包含0的数字，在递归过程中，x不断除以10，必有一个x是10的倍数
//	//必须放在终止递归判断后面， 否则x==0时也成立
//	else if (x % 10 == 0)
//	{
//		*ret = 1;
//		return;
//	}
//
//	else
//	{
//		*ret += src % (x % 10);
//
//		//将原数据、除去个位的数据、ret传入函数进行递归
//		isSelfdivisor(src,x / 10,ret);
//		return;
//	}
//}
//
//
//int* selfDividingNumbers(int left, int right, int* returnSize) 
//{
//	int* arr = (int*)malloc(sizeof(int) * (right - left + 1));
//
//	int i = 0;
//	for (int cur = left; cur <= right; cur++)
//	{
//
//		//创建ret,并取地址传入函数
//		int ret = 0;
//		isSelfdivisor(cur, cur, &ret);
//
//		//相加为0，即每次取余都为0，为自除数
//		if (ret==0)
//		{
//			arr[i++] = cur;
//		}
//	}
//	*returnSize = i;
//
//	return arr;
//}


//循环
//bool isSelfDividing(int num)
//{
//	int tmp = num;
//	while (tmp > 0)
//	{
//		//digit为提取的最小位数字
//		int digit = tmp % 10;
//
//		//digit为0说明原数字含0，不成立
//		if (digit == 0 || num % digit != 0)
//		{
//			return false;
//		}
//		tmp /= 10;
//	}
//	return true;
//}
//
//int* selfDividingNumbers(int left, int right, int* returnSize) 
//{
//	int* arr = (int*)malloc(sizeof(int) * (right - left + 1));
//
//	int pos = 0;
//	for (int i = left; i <= right; i++)
//	{
//		if (isSelfDividing(i))
//		{
//			arr[pos++] = i;
//		}
//	}
//	*returnSize = pos;
//
//	return arr;
//}
//
//
//int main()
//{
//	int returnSize = 0;
//	int* arr = selfDividingNumbers(1, 22, &returnSize);
//
//	for (int i = 0; i < returnSize; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	free(arr);
//
//	return 0;
//}



//238. 除自身以外数组的乘积
//给你一个整数数组 nums，返回 数组 answer ，其中 answer[i] 等于 nums 中除 nums[i] 
//之外其余各元素的乘积 。
//题目数据 保证 数组 nums之中任意元素的全部前缀元素和后缀的乘积都在  32 位 整数范围内。
//请不要使用除法，且在 O(n) 时间复杂度内完成此题。
//输入: nums = [1, 2, 3, 4]
//输出 : [24, 12, 8, 6]



//int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
//
//    //创建两个数组，分别计算i位置时i左边元素的乘积和右边元素的乘积
//    int L[100000] = { 1 };
//    int R[100000] = { 1 };
//
//    L[0] = 1;//初始化L[0]=1
//    
//    //对于每个i,L[i]都等于L[i-1]*nums[i-1]
//    for (int i = 1; i < numsSize; i++)
//    {
//        L[i] = L[i - 1] * nums[i - 1];
//    }
//
//
//    R[numsSize-1] = 1;//初始化R[numsSize-1]=1
//
//    //对于每个i,L[i]都等于L[i+1]*nums[i+1],所以要从右往左计算
//    for (int i = numsSize - 2; i >= 0; i--)
//    {
//        R[i] = R[i + 1] * nums[i + 1];
//    }
//    
//    int* ans = (int*)malloc(sizeof(int) * numsSize);
//
//    //ans[i]即为L[i]*R[i]
//    for (int i = 0; i < numsSize; i++)
//    {
//        ans[i] = L[i] * R[i];
//    }
//    *returnSize = numsSize;
//
//    return ans;
//}

//空间复杂度o(1)解法
//int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
//
//    //用输出数组，先存储i位置时i左边元素的乘积
//    //第二次遍历创建变量R存储i右边元素乘积，再相乘
//    int* ans = (int*)malloc(sizeof(int) * numsSize);
//    
//    ans[0] = 1;
//
//    //对于每个i,L[i]都等于L[i-1]*nums[i-1]
//    for (int i = 1; i < numsSize; i++)
//    {
//        ans[i] = ans[i - 1] * nums[i - 1];
//    }
//    
//    int R = 1;
//    for (int i = numsSize - 1; i >= 0; i--)
//    {
//        ans[i] = R * ans[i];
//        R *= nums[i];
//    }
//
//    *returnSize = numsSize;
//
//    return ans;
//}
//
//int main()
//{
//    int returnSize = 0;
//    int nums[4] = { 1,2,3,4 };
//    productExceptSelf(nums, sizeof(nums)/sizeof(nums[0]), &returnSize);
//
//    return 0;
//}