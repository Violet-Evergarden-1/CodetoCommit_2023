#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

////������A�е����ݺ�����B�е����ݽ��н���
//int main()
//{
//	int arra[5] = { 0 };
//	int arrb[5] = { 0 };
//	int arr[5] = { 0 };
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &arra[i]);
//	}
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &arrb[i]);
//	}
//	for (i = 0; i < 5; i++)
//	{
//		arr[i] = arra[i];
//		arra[i] = arrb[i];
//		arrb[i] = arr[i];
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arra[i]);
//	}
//	printf("\n");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arrb[i]);
//	}
//
//	return 0;
//}


//����һ���������飬��ɶ�����Ĳ���
//ʵ�ֺ���init() ��ʼ������Ϊȫ0
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//ʵ��reverse()  �����������Ԫ�ص����á�
//void init(int arr[5], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void print(int arr[5], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
// 
//void reverse(int arr[5], int sz)
//{
//	int i = 0;
//	int arr1[5] = { 0 };
//	for (i = 0; i < sz; i++)
//	{
//		arr1[i] = arr[i];
//	}
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = arr1[sz - i - 1];
//	}
//}
//
//int main()
//{
//	int arr[5] = {1, 2, 3, 4, 5};
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	reverse(arr, sz);
//	print(arr, sz);
//	init(arr, sz);
//	print(arr, sz);
//
//	return 0;
//}


//ð������ ����
//void bubble_sort(int arr[10], int sz)
//{
//	int i = 0;
//	for (i = 0; i < (sz - 1); i++)
//	{
//		int flag = 0;
//		int j = 0;
//		for (j = 0; j < (sz - 1); j++)
//		{
//			int a = 0;
//			if (arr[j] > arr[j + 1])
//			{
//				a = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = a;
//				flag = 1;
//			}
//		}
//		if (flag == 0)
//			break;
//	}
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	bubble_sort(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}