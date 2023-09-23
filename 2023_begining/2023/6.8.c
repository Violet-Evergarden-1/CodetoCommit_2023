#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int i;
//int main()
//{
//	i--;
//	if (i > sizeof(i))
//		printf(">\n");
//	else
//		printf("<\n");
//
//	return 0;
//}

//有序序列合并
//输入两个升序排列的序列，将两个序列合并为一个有序序列并输出。
//牛客网中支持变长数组

//void scan(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//}
//
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//void sort(int arr[], int N[], int M[], int n, int m)
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	while (j < n && k < m)
//	{
//		if (M[k] < N[j])
//		{
//			arr[i++] = M[k++];
//		}
//		else
//		{
//			arr[i++] = N[j++];
//		}
//	}
//	if (j == n)//数组N遍历完了
//	{
//		while (k < m)
//		{
//			arr[i] = M[k];
//			k++;
//			i++;
//		}
//	}
//	else//数组M遍历完了
//	{
//		while (j < n)
//		{
//			arr[i++] = N[j++];
//		}
//	}
//
//}
//
//int main()
//{
//	int m = 0, n = 0;
//	scanf("%d %d", &n, &m);
//	int M[m];
//	int N[n];
//	scan(N, n);
//	scan(M, m);
//	int arr[m + n];
//	sort(arr, N, M, n, m);
//	print(arr, m + n);
//
//	return 0;
//}

//输入两个升序排列的序列，将两个序列合并为一个有序序列并输出。
// 简单粗暴冒泡排序
//void scan(int arr[2000], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//}
//
//void print(int arr[2000], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//void sort(int arr[2000], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz-1; j++)
//		{
//			int a = 0;
//			if (arr[j] > arr[j + 1])
//			{
//				a = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = a;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int arr[2000] = { 0 };
//	scan(arr, m + n);
//	sort(arr, m + n);
//	print(arr, m + n);
//	
//	return 0;
//}

//输入一个整数序列，判断是否是有序序列，有序，指序列中的整数从小到大排序或者从大到小排序(相同元素也视为有序)
//int main()
//{
//	int arr[50] = { 0 };
//	int i = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int flag = 1;
//	if (arr[1] > arr[2])
//	{
//		for (i=0; i < n - 1; i++)
//		{
//			if (arr[i] < arr[i + 1])
//			{
//				flag = 0;
//				break;
//			}
//		}
//	}
//	else if (arr[1] < arr[2])
//	{
//		for (i=0; i < n - 1; i++)
//		{
//			if (arr[i] > arr[i + 1])
//			{
//				flag = 0;
//				break;
//			}
//		}
//	}
//	if (flag)
//		printf("sorted\n");
//	else
//		printf("unsorted\n");
//
//	return 0;
//}

//改进 合并输入和判断，利用两个变量判断升序和降序，相加可得整体升序/降序
//int main()
//{
//	int arr[50] = { 0 };
//	int i = 0;
//	int n = 0;
//	scanf("%d", &n);
//	int flag1 = 0;
//	int flag2 = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (i>=1)
//		{
//			if (arr[i] >= arr[i - 1])
//				flag1 = 1;
//			else if (arr[i] < arr[i - 1])
//				flag2 = 1;
//		}
//	}
//	if (flag1+flag2==1)//只出现一种顺序时
//		printf("sorted\n");
//	else
//		printf("unsorted\n");
//
//	return 0;
//}

//BC54 获得月份天数
//int Is_Leap(int year)
//{
//	if (year % 4 == 0 && year % 100 != 0)
//		return 1;
//	else if (year % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int year, month;
//	while (scanf("%d %d", &year, &month) != EOF)
//	{
//		int a = 0;
//		switch (month)
//		{
//		case 1:
//		case 3:
//		case 5:
//		case 7:
//		case 8:
//		case 10:
//		case 12:
//			printf("31\n");
//			break;
//		case 4:
//		case 6:
//		case 9:
//		case 11:
//			printf("30\n");
//			break;
//		case 2:
//			a = Is_Leap(year);//判断闰年
//			if (a)
//				printf("29\n");
//			else
//				printf("28\n");
//			break;
//		}
//	}
//	return 0;
//}

//改进 创建13个元素的数组，月份对应的下标的元素即为天数

//int main()
//{
//	int year, month;
//	while (scanf("%d %d", &year, &month) != EOF)
//	{
//		int d = 0;
//		int days[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//		d = days[month];
//		if (((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) && month == 2)
//			d += 1;
//		printf("%d\n", d);
//	}
//	return 0;
//}