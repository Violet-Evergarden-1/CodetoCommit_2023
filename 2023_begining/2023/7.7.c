#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>

//模拟实现strlen函数
//size_t My_strlen(const char* str)
//{
//	assert(str != NULL);
//	size_t count = 0;
//	while (*str)
//	{
//		str++;
//		count++;
//	}
//
//	return count;
//}
//
//
//int main()
//{
//	char szInput[256];
//	printf("Enter a sentence: ");
//	gets(szInput);
//	printf("The sentence entered is %zd characters long.\n", My_strlen(szInput));
//	return 0;
//}

//BC68 X形图案
//描述
//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“* ”组成的X形图案。
//输入描述：
//多组输入，一个整数（2~20），表示输出的行数，也表示组成“X”的反斜线和正斜线的长度。
//输出描述：
//针对每行输入，输出用“ * ”组成的X形图案。

//int main()
//{
//	int n = 0;
//	while(scanf("%d", &n)!=EOF)
//	{
//		int i = 0;
//		int j = 0;
//		char arr[20][20] = { 0 };
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				arr[i][j] = ' ';
//			}
//		}
//		for (i = 0, j = 0; i < n; i++, j++)
//		{
//			arr[i][j] = '*';
//			arr[i][n - 1 - j] = '*';
//		}
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				printf("%c", arr[i][j]);
//			}
//			printf("\n");
//		}
//	}
//
//	return 0;
//}

//优化：不创建数组,跳过初始化为空格、输入，直接打印打印*号

//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				if (i == j || (i + j == n - 1))
//					printf("*");
//				else
//					printf(" ");
//			}
//			printf("\n");
//		}
//	}
//
//	return 0;
//}

//BC60 带空格直角三角形图案
//描述
//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“* ”组成的带空格直角三角形图案。
//输入描述：
//多组输入，一个整数（2~20），表示直角三角形直角边的长度，即“ * ”的数量，也表示输出行数。
//输出描述：
//针对每行输入，输出用“ * ”组成的对应长度的直角三角形，每个“ * ”后面有一个空格。

//int main()
//{
//	int n = 0;
//	while(scanf("%d", &n) != EOF)
//	{
//		int i = 1;
//		int j = 1;
//		for (i = 1; i <= n; i++)
//		{
//			//for (j = 1; j <= n - i; j++)
//			//{
//			//	printf("  ");
//			//}
//			//for (j = 1; j <= i; j++)
//			//{
//			//	printf("* ");
//			//}
//			for (j = 1; j <= n; j++)
//			{
//				if (i + j <= n)
//					printf("  ");
//				else
//					printf("* ");
//			}
//			printf("\n");
//		}
//	}
//
//	return 0;
//}

//最小公倍数
//int max(int a, int b)
//{
//	int c = 0;
//	while (c = a % b)
//	{
//		a = b;
//		b = c;
//	}
//	return b;
//}
//
//int main()
//{
//	int a = 0, b = 0;
//	while(scanf("%d %d", &a, &b) != EOF)
//	{
//		if (a % b == 0)
//					printf("%d\n", a);
//		else if (b % a == 0)
//					printf("%d\n", b);
//		else
//		{
//			int c = max(a, b);
//			long long d = a * b;
//			printf("%lld\n", d/c);
//		}
//	}
//	
//	return 0;
//}


//#include<string.h>
//void reverse(char* left, char* right)
//{
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[100];
//	
//		//scanf("%[^\n]s");
//		//fgets(arr,100,stdin)
//		while(gets(arr))
//		{
//		int len = strlen(arr);
//		char* left = arr;
//		char* right = arr + len - 1;
//		reverse(left, right);
//
//		char* start = arr;
//		char* end = arr;
//		while (*end != '\0')
//		{
//			while (*end != ' ' && *end != '\0')
//			{
//				end++;
//			}
//			reverse(start, end - 1);
//			start = end + 1;
//			if (*end != '\0')
//			{
//				end++;
//			}
//		}
//		printf("%s\n", arr);
//
//		return 0;
//	}
//}