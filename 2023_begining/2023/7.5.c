#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水。
//int main()
//{
//	int bot = 0;
//	int drk = 0;
//	scanf("%d", &drk);
//	bot = drk;
//	while (bot > 1)
//	{
//		drk += bot / 2;
//		bot = bot / 2 + bot % 2;
//	}
//	printf("%d\n", drk);
//
//	return 0;
//}

//输入一个整数 n ，输出该数32位二进制表示中1的个数。其中负数用补码表示
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int count = 0;
//	while (n) 
//	{
//		n = n & (n - 1);
//		count++;
//	}
//}