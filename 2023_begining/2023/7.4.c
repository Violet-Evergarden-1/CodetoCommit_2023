#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int arr[10] = { 1,2,3,4,5 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	return 0;
//}

//��һ���ַ���str�����ݵߵ�����������������򣩡�
//1��len(str)��10000

//#include<string.h>
//
//void Reverse(char* str)
//{
//	char* left = str;
//	char* right = str + strlen(str) - 1;
//	while (left < right)
//	{
//		int tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char str[10000] = { 0 };
//	while (gets(str)) 
//	{
//		Reverse(str);
//		printf("%s\n", str);
//
//	}
//	return 0;
//}


//��ӡ����
//��C��������Ļ���������ͼ����

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 1;
//	int j = 1;
//	for (i = 1; i < n * 2; i++)
//	{
//		int a = n - i;
//		a = (a > 0 ? a : -a);
//		for (j = 1; j <= a; j++)
//		{
//			printf(" ");
//		}
//		int b = 2 * (n - a) - 1;
//		for (j = 1; j <= b; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//���0��100000֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ�������
//�� : 153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������
//#include<math.h>
//
//int Num(int i)
//{
//	if (i == 0)
//	{
//		return 0;
//	}
//	else
//		return 1 + Num(i / 10);
//}
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int a = 0, b = 0, sum = 0;
//	for (i = 0; i < 100000; i++)
//	{ 
//		int num = Num(i);
//		a = i;
//		sum = 0;
//		for (j = 0; j < num; j++)
//		{
//			b = a %10;
//			a /= 10;
//			sum += (int)pow(b, num);
//		}
//		if (sum == i)
//			printf("%d ", i);
//	}
//
//	return 0;
//}

//��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222
// 
//#include<math.h>
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int i = 4;
//	int b = 0;
//	for (i = 4; i >= 0; i--)
//	{
//		b += a * (int)pow(10, i)*(5-i);
//	}
//	printf("%d", b);
//
//	return 0;
//}
//�Ľ�
//�����i��Ϊtemp�����i + 1��Ϊtemp * 10 + a
//int main()
//{
//	int a = 0;
//	int n = 0;
//	int i = 0;
//	int sum = 0;
//	int tmp = 0;
//
//
//	scanf("%d%d", &a, &n);
//	for (i = 0; i < n; i++)
//	{
//		tmp = tmp * 10 + a;
//		sum += tmp;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}