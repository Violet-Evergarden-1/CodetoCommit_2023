#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

//  x=2014
//  x:00000000 00000000 00000111 11011110 - 原
//x+1:00000000 00000000 00000111 11011111

//  |:00000000 00000000 00000111 11011111 
//...
//  |:11111111 11111111 11111111 11111111

//int fun(unsigned int x)
//{
//	int n = 0;
//	while (x + 1)
//	{
//		n++;
//		x = x | (x + 1);
//	}
//	return n;
//}
//
//int main()
//{
//	unsigned int x = 2014;
//	printf("%d",fun(x));
//
//	return 0;
//}


//HJ37 统计每个月兔子的总数
//有一种兔子，从出生后第3个月起每个月都生一只兔子，小兔子长到第三个月后每个月又生一只兔子
//例子：假设一只兔子第3个月出生，那么它第5个月开始会每个月生一只兔子。
//一月的时候有一只兔子，假如兔子都不死，问第n个月的兔子总数为多少？
//数据范围：输入满足1≤n≤31

//即为斐波那契数列
//假设在n月有兔子总共a对，n + 1月总共有b对。在n + 2月必定总共有a + b对
//因为在n + 2月的时候，前一月（n + 1月）的b对兔子可以存留至第n + 2月
//（在当月属于新诞生的兔子尚不能生育）。而新生育出的兔子对数等于所有在n月就已存在的a对

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	if (n <= 2)
//		printf("%d", 1);
//	else
//	{
//		int a = 1, b = 1, ret = 0;
//		while (n > 2)
//		{
//			ret = a + b;
//			a = b;
//			b = ret;
//			n--;
//		}
//		printf("%d", ret);
//	}
//	return 0;
//}



//int main()
//{
//	float a[3] = { 1.5,2.5,3.5 };
//	//float* pa = a[0]++;
//
//	printf("%f ", a[0]);
//	printf("%f ", a[1]);
//	printf("%f\n", a[2]);
//
//	//printf("%p ", pa);
//	a[0]++;
//	
//	printf("\n");
//
//	printf("%f ", a[0]);
//	printf("%f ", a[1]);
//	printf("%f\n", a[2]);
//
//	printf("%p ", &(a[0]++));
//
//	
//}


//int main()
//{
//	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 }, * p = a + 5, * q = NULL;
//	*q = *(p + 5);
//	printf("%d %d\n", *p, *q);
//	return 0;
//}

//int main()
//{
//	int* p1 = 0;
//	int* p2 = NULL;
//
//	if (!p1)
//		printf("0yes\n");
//	if (!p2)
//		printf("NULLyes\n");
//
//
//}



//面试题 16.15.珠玑妙算
//珠玑妙算游戏（the game of master mind）的玩法如下。
//
//计算机有4个槽，每个槽放一个球，颜色可能是红色（R）、黄色（Y）、绿色（G）或蓝色（B）。
//例如，计算机可能有RGGB 4种（槽1为红色，槽2、3为绿色，槽4为蓝色）。
//作为用户，你试图猜出颜色组合。打个比方，你可能会猜YRGB。
//要是猜对某个槽的颜色，则算一次“猜中”；要是只猜对颜色但槽位猜错了，则算一次“伪猜中”
//注意，“猜中”不能算入“伪猜中”。
//给定一种颜色组合solution和一个猜测guess，编写一个方法，返回猜中和伪猜中的次数answer，
//其中answer[0]为猜中的次数，answer[1]为伪猜中的次数。
//
//给定一种颜色组合solution和一个猜测guess，编写一个方法，返回猜中和伪猜中的次数answer，
//其中answer[0]为猜中的次数，answer[1]为伪猜中的次数。


//暴力匹配
// 时间复杂度O(N^2)，空间复杂度O(1)
//int* masterMind(char* solution, char* guess, int* returnSize) 
//{
//	int* ret = (int*)malloc(sizeof(int) * 2);
//	ret[0] = ret[1] = 0;
//	char* ps = &solution[0];
//	char* pg =&guess[0];
//
//	//匹配相同位置元素，相同ret[0]++,同时把slt和gue改为不同且不属于“RGBY”的元素
//	while (*ps)
//	{
//		if (*ps == *pg)
//		{	
//			*ps = '1';
//			*pg = '0';
//			ret[0]++;
//		}
//		ps++;
//		pg++;
//	}
//
//	//第二次遍历，求伪猜中
//	pg = &guess[0];
//	while (*pg)
//	{
//		ps = &solution[0];
//		while (*ps)
//		{
//			if (*pg == *ps)
//			{
//				*ps = '1';
//				ret[1]++;
//				break;
//			}
//			ps++;
//		}
//		pg++;
//	}
//
//	*returnSize = 2;
//	return ret;
//}


//方法2：哈希表存储两个字符串中元素的数量，按位与即为猜中+伪猜中次数和
//再遍历求猜中，并用ret作为哈希表
//时间复杂度O(N)，空间复杂度O(1)
//#define R 0
//#define G 1
//#define B 2
//#define Y 3
//
//int* masterMind(char* solution, char* guess, int* returnSize) 
//{
//	int* ret = (int*)malloc(sizeof(int) * 4);
//	ret[0] = ret[1] = ret[2]=ret[3] = 0;
//
//	char* ps = &solution[0];
//	char* pg = &guess[0];
//
//	//将solution中各元素数量储存在哈希表中
//	while (*ps)
//	{
//		if (*ps == 'R')
//			ret[R]++;
//		else if (*ps == 'G')
//			ret[G]++;
//		else if (*ps == 'B')
//			ret[B]++;
//		else if (*ps == 'Y')
//			ret[Y]++;
//		ps++;
//	}
//
//	//遍历guess，guess中的元素在哈希表中数量>0,总数num++，哈希表对应数量--
//	int num = 0;
//	while (*pg)
//	{
//		if (*pg == 'R')
//		{
//			if (ret[R] > 0)
//			{
//				ret[R]--;
//				num++;
//			}
//		}
//		else if (*pg == 'G')
//		{
//			if (ret[G] > 0)
//			{
//				ret[G]--;
//				num++;
//			}
//		}
//		else if (*pg == 'B')
//		{
//			if (ret[B] > 0)
//			{
//				ret[B]--;
//				num++;
//			}
//		}
//		else if (*pg == 'Y')
//		{ 
//			if (ret[Y] > 0)
//			{
//				ret[Y]--;
//				num++;
//			}
//		}
//		pg++;
//	}
//
//	//再次遍历求出真猜中，伪猜中即为总数减去真猜中
//	ps = &solution[0];
//	pg = &guess[0];
//	int rit = 0;
//	while (*ps)
//	{
//		if (*ps == *pg)
//		{
//			rit++;
//		}
//		ps++;
//		pg++;
//	}
//	ret[0] = rit;
//	ret[1] = num - rit;
//	*returnSize = 2;
//
//	return ret;
//}


//int main()
//{
//	char slt[5] = "";
//	char ges[5] = "";
//	while (scanf("%s", slt) != EOF)
//	{
//		scanf("%s", ges);
//		int returnSize = 0;
//		int* arr = NULL;
//		arr=masterMind(slt, ges, &returnSize);
//
//		printf("%d ", arr[0]);
//		printf("%d ", arr[1]);
//	}
//
//	return 0;
//}


//NC61 两数之和
//给出一个整型数组 numbers 和一个目标值 target，请在数组中找出两个加起来等于目标值的数的
//下标，返回的下标按升序排列。
//（注：返回的数组下标从1开始算起，保证target一定可以由数组里面2个数字相加得到）

//暴力破解
//int* twoSum(int* numbers, int numbersLen, int target, int* returnSize) 
//{
//	int* ret = (int*)malloc(sizeof(int) * 2);
//
//	for (int i = 0; i < numbersLen; i++)
//	{
//		//因为数组元素最小为10，target>0，所以对于>target + 10的数据，一定没有数据
//		//可以匹配，直接跳过（不跳过会超时）
//		if (numbers[i] > target + 10)
//			continue;
//
//		//要求返回的下标按升序排列，视i为较小坐标，令j>i,保证输出为升序
//		for (int j = i+1; j > i && j < numbersLen; j++)
//		{
//			if (numbers[i] + numbers[j] == target)
//			{
//				ret[0] = i + 1;
//				ret[1] = j + 1;
//			}
//		}
//	}
//	*returnSize = 2;
//	return ret;
//}
//
//int main()
//{
//	int arr[] = { 3,2,4 };
//	int returnSize = 0;
//	int* ret = NULL;
//	ret = twoSum(arr, sizeof(arr) / sizeof(arr[0]), 6, &returnSize);
//
//	printf("%d ", ret[0]);
//	printf("%d ", ret[1]);
//
//	return 0;
//}


//int main()
//{
//	int a[3][2] = { 1, 2, 3, 4, 5, 6 };
//	int* p[3];
//	p[0] = a[1];
//
//	printf("%d", *(p[0] + 1));
//}

//struct T
//{
//	char name[20];
//	int age;
//	int sex;
//} a[5], * pa = a;
//
//int main()
//{
//	scanf("%s", a[0].name);
//}


//KS33 寻找奇数
//现在有一个长度为 n 的正整数序列，其中只有一种数值出现了奇数次，其他数值均出现偶数次，
//请你找出那个出现奇数次的数值。


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int tmp = 0;
//	int ret = 0;
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &tmp);
//		ret ^= tmp;
//	}
//	printf("%d", ret);
//
//	return 0;
//}


//NC107 寻找峰值
//给定一个长度为n的数组nums，请你找到峰值并返回其索引。数组可能包含多个峰值，在这种情况下，返回任何一个所在位置即可。
//1.峰值元素是指其值严格大于左右相邻值的元素。严格大于即不能有等于
//2.假设 nums[-1] = nums[n] =−∞
//3.对于所有有效的 i 都有 nums[i] != nums[i + 1]
//4.你可以使用O(logN)的时间复杂度实现此问题吗？

//暴力循环（情况较多）
//int findPeakElement(int* nums, int numsLen) {
//    int prev = 0;
//    int top = 1;
//    int next = 2;
//
//    if (numsLen == 1)
//        return 0;
//
//    //长度为2，较大值下标即为峰
//    if (numsLen == 2)
//        return(nums[0] > nums[1] ? 0 : 1);
//
//    while (next < numsLen)
//    {
//        //nums[0]>nums[1]时，0即为峰
//        if (prev == 0 && nums[prev] > nums[top])
//            return 0;
//
//        //top的值大于prev和next的值
//        if (nums[top] > nums[prev] && nums[top] > nums[next])
//            return top;
//
//        //nums[numsLen-1]>nums[numsLen-2]时，numsLen-1即为峰
//        if (next == numsLen - 1 && nums[next] > nums[top])
//            return numsLen - 1;
//        prev++;
//        top++;
//        next++;
//    }
//    return 0;
//}

//二分查找 时间复杂度O(logN)
//int findPeakElement(int* nums, int numsLen) {
//    int left = 0;
//    int right = numsLen - 1;
//    while (left < right)
//    {
//        int mid = (left + right) / 2;
//
//        //如果中指指向的值>右边的值，说明左边有峰
//        if (nums[mid] > nums[mid + 1])
//            right = mid;
//
//        //如果中指指向的值<右边的值，说明右边边有峰
//        else
//            left = mid + 1;
//    }
//    return left;
//}

//int main()
//{
//    int arr[] = { 2,4,1,2,7,8,4 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int ret = findPeakElement(arr, sz);
//
//    printf("%d", ret);
//
//    return 0;
//}