#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//int main()
//{
//	int n = 9;
//	//
//	//0 00000000 00000000000000000001001
//	//S  E        M
//	//0  -126     0.00000000000000000001001
//	//(-1)^0 * 0.00000000000000000001001 * 2^-126
//	//
//	//E在内存中是全0
//	//
//	float* pFloat = (float*)&n;
//
//	printf("n的值为：%d\n", n);//9
//	printf("*pFloat的值为：%f\n", *pFloat);//0.000000
//
//	*pFloat = 9.0;
//	//1001.0
//	//1.001 * 2^3
//	//(-1)^0 * 1.001 * 2^3
//	//S=0     E=3  M=1.001
//	//0 10000010 00100000000000000000000
//	//
//	printf("num的值为：%d\n", n);//1091567616
//	printf("*pFloat的值为：%f\n", *pFloat);//9.0
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 40; i++)
//	{
//		printf("%2d ", i);
//	}
//	printf("\n");
//	for (i = 0; i < 40; i++)
//	{
//		printf("%2d ", i / 3);
//	}
//
//	return 0;
//}