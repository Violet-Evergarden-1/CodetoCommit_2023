#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>

//void GetMemory(char** p, int num)
//{
//	if (NULL == p && num <= 0)//1
//		return;
//	*p = (char*)malloc(num);
//	return;
//}
//
//int main()
//{
//	char* str = NULL;
//	GetMemory(&str, 80); //2
//	if (NULL != str)
//	{
//		strcpy(str, "hello"); //3
//		printf(str); //4
//	}
//	return 0;
//}

//int main()
//{
//	int p = NULL;
//	if (NULL == p)
//		printf("yes");
//	
//}

//#include <stdio.h>
//typedef union
//{
//	int a;
//	struct
//	{
//		short b;
//		short c;
//	};
//}X;
//
//int main()
//{
//	X x;
//	x.a = 0x20150810;
//	printf("%4x,%4x\n", x.b, x.c);
//
//	return 0;
//}

//#define MAX 255
//int main()
//{
//	unsigned char A[MAX], i;
//	for (i = 0; i <= MAX; i++)
//		A[i] = i;
//	return 0;
//}

//int main()
//{
//	unsigned char i = 7;
//	int j = 0;
//	for (; i > 0; i -= 3)
//	{
//		++j;
//	}
//	printf("%d\n", j);
//	return 0;
//}


//WY49 ����
//ţţ��ǰ����ʦ����õ���һ������������(x, y), ţţ�������Ǿ����Ƕ����ˡ� 
//����ţţ�ǵ���ʦ���߹���x��y��������n, ����x����y���������ڵ���k�� 
//����һ���ж��ٸ����ܵ����ԡ�
//�������� :
//�����������������n, k(1 = n = 10 ^ 5, 0 = k = n - 1)��

//����ѭ������ʱ
//int main()
//{
//	int n, k;
//	scanf("%d %d", &n, &k);
//
//	int count = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//			if (i % j >= k)
//				count++;
//	}
//	printf("%d", count);
//
//	return 0;
//}


//int main()
//{
//	int n, k;
//	scanf("%d %d", &n, &k);
//
//	long long num = 0;
//
//	if (k == 0)
//	{
//		
//		//����Ĭ�ϵ����ֶ���int�ͣ����������˷�����ʱ��������뵽int��������⣬��
//		//	printf("%d\n", 100000 * 100000); ��������1410065408
//		//	��ʹ��ʶ���˳�int��Χ����lld��ӡ������Ϊ�Ѿ�������������ضϣ����Խ�������
//		//	printf("%lld\n", 100000 * 100000); ��������1410065408
//		//	����Ҫ����ǿ��ת��
//		//	printf("%lld\n", (longlong)100000 * 100000); ��������100000000000
//
//		num = (long long)n * n;
//		printf("%lld", num);
//		return 0;
//	}
//
//	for (int y = k + 1; y <= n; y++)
//	{
//		num += (y - k) * (n / y) + (n % y - k + 1 > 0 ? n % y - k + 1 : 0);
//	}
//
//	printf("%lld", num);
//
//	return 0;
//}



//HJ46 ��ȡ�ַ���
//����һ���ַ�����һ������ k ����ȡ�ַ�����ǰk���ַ������

//int main()
//{
//	char str[1001] = { 0 };
//	int n = 0;
//	scanf("%s", str);
//	scanf("%d", &n);
//
//	str[n] = '\0';
//	printf("%s", str);
//
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	printf("Hello Vim");
//
//	return 0;
//}