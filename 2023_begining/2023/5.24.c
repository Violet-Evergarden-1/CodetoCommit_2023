#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//�ݹ�ͷǵݹ�ֱ�ʵ��strlen
//�ݹ�
//int my_strlen(char* arr)
//{
//	static int count = 0;
//	if (*arr != '\0')
//	{
//		count++;
//		my_strlen(arr + 1);
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = { 0 };
//	scanf("%s", arr);
//	printf("%d", my_strlen(arr));
//
//	return 0;
//}

//�ǵݹ�
//int my_strlen(char* arr)
//{
//	int count = 0;
//	int i = 0;
//	while (*arr != 0)
//	{
//		arr++;
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = { 0 };
//	scanf("%s", arr);
//	printf("%d", my_strlen(arr));
//
//	return 0;
//}

//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩
//�ݹ�
//int factorial(int n, int ret)
//{
//	if (n != 1)
//	{
//		ret = n * factorial((n - 1), ret);
//	}
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 1;
//	printf("%d", factorial(n, ret));
//
//	return 0;
//}

//�ǵݹ�
//int factorial(n)
//{
//	int ret = 1;
//	for (ret = 1; n != 0; n--)
//	{
//		ret *= n;
//	}
//	return ret;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 1;
//	printf("%d", factorial(n));
//
//	return 0;
//}

//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
//void each_printf(int n)
//{
//	if (n >= 10)
//	{
//		int a = 0;
//		a = n % 10;
//		each_printf(n / 10);
//		printf("%d ", a);
//	}
//	else if (n < 9)
//		printf("%d ", n);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	each_printf(n);
//
//	return 0;
//}