#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>

//ģ��ʵ��strlen����
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

//BC68 X��ͼ��
//����
//KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á�* ����ɵ�X��ͼ����
//����������
//�������룬һ��������2~20������ʾ�����������Ҳ��ʾ��ɡ�X���ķ�б�ߺ���б�ߵĳ��ȡ�
//���������
//���ÿ�����룬����á� * ����ɵ�X��ͼ����

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

//�Ż�������������,������ʼ��Ϊ�ո����룬ֱ�Ӵ�ӡ��ӡ*��

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

//BC60 ���ո�ֱ��������ͼ��
//����
//KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á�* ����ɵĴ��ո�ֱ��������ͼ����
//����������
//�������룬һ��������2~20������ʾֱ��������ֱ�Ǳߵĳ��ȣ����� * ����������Ҳ��ʾ���������
//���������
//���ÿ�����룬����á� * ����ɵĶ�Ӧ���ȵ�ֱ�������Σ�ÿ���� * ��������һ���ո�

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

//��С������
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