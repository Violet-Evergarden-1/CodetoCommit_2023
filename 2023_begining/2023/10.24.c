#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int arr[10] = { 0 };
//	int add = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//		add += arr[i];
//	}
//	int maxi = 0, mini = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		if (arr[i] > arr[maxi])
//			maxi = i;
//		if (arr[i] < arr[mini])
//			mini = i;
//	}
//	printf("���ֵ�ǣ�%d\n", arr[maxi]);
//	printf("�±��ǣ�%d\n", maxi);
//	printf("��Сֵ�ǣ�%d\n", arr[mini]);
//	printf("�±��ǣ�%d\n", mini);
//	printf("�����Ϊ��%d\n", add);
//
//	return 0;
//}

//int fun(char* str)
//{
//	int num = 0;
//	while (*str)
//	{
//		if (*str >= 'A' && *str <= 'z')
//			num++;
//		str++;
//	}
//	return num;
//}

//#include<stdio.h>
//#include<string.h>
//
//void fun(char* str)
//{
//	int len = strlen(str);
//	for(int i=0;i<len;i++)
//	{
//		if (i % 2 == 0 && str[i] >= 'a' && str[i] <= 'z')
//			str[i] -= 32;
//	}
//}
//
//
//int main()
//{
//	char str[] = "abc4EFg";
//	fun(str);
//
//	printf("%s", str);
//
//	return 0;
//}