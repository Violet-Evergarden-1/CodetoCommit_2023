#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//#define N 4
//#define Y(n) ((N+2)*n)
//
//int main()
//{
//	int z = 2*(N+Y(5+1));
//	printf("%d", z);
//
//	return 0;
//}

//дһ���꣬����ṹ����ĳ����������׵�ַ��ƫ�ƣ�������˵��
//#include<stddef.h>

//struct foo 
//{
//	char a;
//	char b[10];
//	char c;
//};

//int main()
//{
//	printf("offsetof(struct foo,a) is %d\n", (int)offsetof(struct foo, a));
//	printf("offsetof(struct foo,b) is %d\n", (int)offsetof(struct foo, b));
//	printf("offsetof(struct foo,c) is %d\n", (int)offsetof(struct foo, c));
//
//	return 0;
//}

//�Ƚ�0ת��Ϊһ���ṹ�����͵�ָ�룬�൱�ڼ��� �ṹ����׵�ַ��0
//���Ա��ַ��Ϊƫ����
//#define OFFSETOF(type, number)  (size_t)&(((type*)0)->number)
//
//int main()
//{
//	printf("%d\n", (int)OFFSETOF(struct foo, a));
//	printf("%d\n", (int)OFFSETOF(struct foo, b));
//	printf("%d\n", (int)OFFSETOF(struct foo, c));
//
//	return 0;
//}


//дһ���꣬���Խ�һ�������Ķ�����λ������λ��ż��λ����
//1.����ż��λ ��������λ��10101010 10101010 10101010 10101010����Ϊ0xAAAAAAAA��������һλ
//2.��������λ ��������λ��01010101 01010101 01010101 01010101����Ϊ0x55555555��������һλ
//3.�ϲ����������� ��λ��


//#define SWAP_BITS(n) (((n) & 0xAAAAAAAA) >> 1) | (((n) & 0x55555555) << 1)
//
//int main()
//{
//	int a = 157;
//	//00000000 00000000 00000000 10011101
//	a = SWAP_BITS(a);
//	//00000000 00000000 00000000 01101110
//	printf("%d", a);
//
//	return 0;
//}

//#define INT_PTR int*
//typedef int* int_ptr;
//
//int main()
//{
//	INT_PTR a = NULL, b = 0;
//	int_ptr c = NULL, d = NULL;
//
//	return 0;
//}

//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//
//int main()
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//
//	return 0;
//}

	//int* test()
	//{
	//	int a = 10;
	//	return &a;
	//}

	//int main()
	//{
	//	int* p = NULL;
	//	p = test();
	//	printf("%d\n", *p);
	//	//*pָ��Ŀռ䱻�ͷź�printf�����Ƚ�����*p,���Դ�ӡһ������

	//	return 0;
	//}


//int* test()
//{
//	int a = 10;
//	return &a;
//}
//
//int main()
//{
//	int* p = test();
//	printf("%d\n", *p);
//	//*pָ��Ŀռ䱻�ͷź�printf�����Ƚ�����*p,���Դ�ӡһ������
//
//	printf("hehe\n");
//	int a=printf("%d\n", 1);
//	printf("%d\n", *p);
//	printf("%d\n", a);
//	//ԭ��a�Ŀռ䱻printf�������ٵĿռ串�ǣ����ݶ�ʧ
//
//	return 0;
//}

//int main()
//{
//	int a = -3;
//	unsigned int b = 2;
//	long  c = a+b;
//	printf("%ld\n", c);
//
//	return 0;
// }

//ɾ�������ַ�

//void Del(char* str)
//{
//	while (*str)
//	{
//		*str = *(str + 1);
//		str++;
//	}
//}
//
//int main()
//{
//	char str1[100] = { 0 };
//	char str2[100] = { 0 };
//	while (gets(str1) != NULL && gets(str2) != NULL)
//	{
//		char* ptr2 = str2;
//		while(*ptr2)
//		{
//			char* ptr1 = str1;
//			while (*ptr1)
//			{
//				if (*ptr1 == *ptr2)
//					Del(ptr1);
//				ptr1++;
//			}
//			ptr2++;
//		}
//		puts(str1);
//		printf("\n");
//	}
//	return 0;
//}

//�����Ӷ���980364535->980,364,535

//void Comma(int a)
//{
//	if (a > 999)
//	{
//		Comma(a / 1000);
//		printf(",");
//		printf("%03d", a % 1000);
//	}
//	else if (a <= 999)
//		printf("%d", a);
//}
//
//int main()
//{
//	int a = 0;
//	while (scanf("%d", &a) == 1) 
//	{
//		Comma(a);
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int num1 = -1;
//	unsigned int num2 = -1;
//	printf("%x\n", num1);
//	printf("%x\n", num2);
//	return 0;
//}

