#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//�ҵ���2
//һ��������ֻ�����������ǳ���һ�Σ������������ֶ����������Ρ�
//��дһ�������ҳ�������ֻ����һ�ε����֡�
//���磺
//�������Ԫ���ǣ�1��2��3��4��5��1��2��3��4��6
//ֻ��5��6ֻ����1�Σ�Ҫ�ҳ�5��6.

//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4,6 };
//	int i = 0;
//	int ret = 0;
//
//	//0���һ�������������������ͬ����Ϊ0
//	//��0����������е������õ������������������
//	for (i = 0; i < 10; i++)
//	{
//		ret = arr[i] ^ ret;
//	}
//
//	//�����������Ϊ1����ʾ�������Ķ�����λ�ڴ�λ�β�ͬ
//	//�������һ����ͬλ�����������Դ�λ���࣬�ٷֱ����
//	for (i = 0; i < 32; i++)
//	{
//		if (ret >> i & 1)
//			break;
//	}
//	int j = 0;
//	int ret1 = 0, ret2 = 0;
//	for (j = 0; j < 10; j++)
//	{
//		if (arr[j] >> i & 1)
//			ret1 = arr[j] ^ ret1;
//		else
//			ret2 = arr[j] ^ ret2;
//	}
//	printf("%d %d\n", ret1, ret2);
//
//	return 0;
//}

//ģ��ʵ��strncpy

//char* my_strncpy(char* dest, const char* src, size_t num)
//{
//	char* ret = dest;
//	char* tmp = 0;
//	for (; num > 0; num--)
//	{
//		*dest = *src;
//		if (*src == 0 )
//			return ret;
//		dest++;
//		src++;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[11] = "xxxxxxxxxx";
//	char arr2[] = "abcdef";
//	printf("%s", my_strncpy(arr1,arr2,15));
//
//	return 0;
//}

//ģ��ʵ��strncat

//char* my_strncat(char* dest, const char* src, size_t num)
//{
//	char* ret = dest;
//	while (*dest)
//		dest++;
//	for (; num > 0; num--)
//	{
//		*dest = *src;
//		if (*src == 0 )
//			return ret;
//		dest++;
//		src++;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = "why so";
//	char arr2[] = " serious?";
//	printf("%s", my_strncat(arr1,arr2,10));
//
//	return 0;
//}

//ģ��ʵ��atoi