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

//写一个宏，计算结构体中某变量相对于首地址的偏移，并给出说明
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

//先将0转换为一个结构体类型的指针，相当于假设 结构体的首地址是0
//求成员地址即为偏移量
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


//写一个宏，可以将一个整数的二进制位的奇数位和偶数位交换
//1.处理偶数位 将整数按位与10101010 10101010 10101010 10101010（即为0xAAAAAAAA），右移一位
//2.处理奇数位 将整数按位与01010101 01010101 01010101 01010101（即为0x55555555），左移一位
//3.合并处理后的数据 按位或


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
	//	//*p指向的空间被释放后，printf函数先进行了*p,可以打印一次数据

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
//	//*p指向的空间被释放后，printf函数先进行了*p,可以打印一次数据
//
//	printf("hehe\n");
//	int a=printf("%d\n", 1);
//	printf("%d\n", *p);
//	printf("%d\n", a);
//	//原来a的空间被printf函数开辟的空间覆盖，数据丢失
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

//删除公共字符

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

//整数加逗号980364535->980,364,535

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

