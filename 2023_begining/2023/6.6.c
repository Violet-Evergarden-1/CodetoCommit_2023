#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//����������ʱ������������������������
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

//����һ������ n ���������32λ�����Ʊ�ʾ��1�ĸ��������и����ò����ʾ��
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

//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������
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
//	printf("ż���� ");
//	Ptf_BIN(n, 0);
//	printf("\n������ ");
//	Ptf_BIN(n, 1);
//
//	return 0;
//}

//�����������������������������Ƹ�ʽ�ж��ٸ�λ��ͬ
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