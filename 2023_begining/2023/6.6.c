#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//不允许创建临时变量，交换两个整数的内容
//int main()
//{
//	int a = 1;
//	int b = 3;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d b=%d", a, b);
//
//	return 0;
//}

//输入一个整数 n ，输出该数32位二进制表示中1的个数。其中负数用补码表示。
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((n >> i & 1) == 1)
//			count++;
//	}
//	printf("%d", count);
//
//	return 0;
//}

//int Ret1(int a)
//{
//	printf("%d\n", a+1);
//	printf("%u\n", a+1);
//
//	return a;
//
//}int Ret2(unsigned int a)
//{
//	printf("%d\n", a+1);
//	printf("%u\n", a+1);
//
//	return a;
//}
//
//int main()
//{
//	int n = -5;
//	Ret1(n);
//	Ret2(n);
//	printf("%d", n);
//
//	return 0;
//}

//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
//void Ptf_BIN(int n, int i)
//{
//	if (i < 32)
//	{
//		Ptf_BIN(n, i+2);
//		printf("%d", n >> i & 1);
//	}
//	return 0;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("偶数列 ");
//	Ptf_BIN(n, 0);
//	printf("\n奇数列 ");
//	Ptf_BIN(n, 1);
//
//	return 0;
//}

//输入两个整数，求两个整数二进制格式有多少个位不同
//int main() 
//{
//    int a, b;
//    int i = 0;
//    int count = 0;
//    while (scanf("%d %d", &a, &b) != EOF)
//    { 
//        for (i = 0; i < 32; i++)
//        {
//            if ((a >> i & 1) != (b >> i & 1))
//                count++;
//        }
//        printf("%d", count);
//    }
//    return 0;
//}

//int main() 
//{
//    int a, b;
//    int count = 0;
//    while(scanf("%d %d", &a, &b) != EOF)
//    {
//          int n = a ^ b;
//        while (n)
//        {
//            n = n & (n - 1);
//            count++;
//        }
//
//        printf("%d", count);
//    }
//    return 0;
//}