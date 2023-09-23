#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//杨氏矩阵
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的
//请编写程序在这样的矩阵中查找某个数字是否存在。
//要求：时间复杂度小于O(N);

//int Find(int(*p)[4], int* px, int* py, int n)
//{
//	int x = 0;
//	int y = *py - 1;
//	while (x < *px-1 && y >= 0)
//	{
//		if (p[x][y] > n)
//			y--;
//		else if (p[x][y] < n)
//			x++;
//		else if (p[x][y] == n)
//		{
//			//找到后将坐标值带回去
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[4][4] = { {1,3,5,6},{2,6,8,9},{3,7,10,12},{5,8,12,13} };
//	int n = 0;
//	while (scanf("%d", &n) == 1)
//	{
//		int x = 4;//行
//		int y = 4;//列
//		int ret = 0;
//		ret = Find(arr, &x, &y, n);//x,y既传递数组大小参数，又接收返回坐标(返回型函数)
//		if (ret == 1)
//		{
//			printf("找到了，坐标是%d %d\n", x, y);
//		}
//		else
//			printf("没找到\n");
//	}
//	return 0;
//}


//字符串左旋
//实现一个函数，可以左旋字符串中的k个字符。
//例如：
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB

//方法1：一个个旋
//
//void Left(char* arr, int k, int sz)
//{
//	int i = 0;
//	for (i = 0; i < k; i++)//把左值放在右边，循环k次
//	{
//		char tmp = arr[0];
//		int j = 0;
//		for (j = 0; j < sz-1; j++)//把后面的值向左平移1位，循环sz-1次
//		{
//			arr[j] = arr[j + 1];
//		}
//		arr[sz-1] = tmp;
//	}
//}

//方法2：找断开位置交换
//char * strcpy ( char * destination, const char * source );复制字符串
//char * strncat ( char * destination, const char * source, size_t num );添加字符串B的N个元素到A

//void Left(char* arr, int k, int sz)
//{
//	char tmp[256] = { 0 };
//	strcpy(tmp, arr + k);//复制k坐标之后的字符串到tmp中
//	strncat(tmp, arr, k);//把k坐标之前的字符串加到tmp上
//	strcpy(arr, tmp);//把tmp复制到arr中
//}

//方法3：分别逆序，而后整体逆序
//AB CDEF->BA FEDC->CDEF AB
//...省略没敲

//int main()
//{
//	int k = 0;
//	while (scanf("%d", &k) == 1)
//	{
//		char arr[] = "ABCDEF";
//		int sz = strlen(arr);
//		k %= sz;//左旋sz次后重新回到了原数组
//		Left(arr, k, sz);
//		printf("%s\n", arr);
//	}
//	return 0;
//}


//字符串旋转结果
//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC

//方法一：一次一次左旋而后判断相等
//int strcmp ( const char * str1, const char * str2 );比较相等，相等返回0

#include<string.h>

//int Is_left(char* arr1, char* arr2, int sz)
//{
//	int i = 1;
//	for(i = 1; i <= sz; i++)//i即为左旋次数
//	{
//		char tmp = arr1[0];
//		int j = 0;
//		for (j = 0; j < sz - 1; j++)//把后面的值向左平移1位，循环sz-1次
//		{
//			arr1[j] = arr1[j + 1];
//		}
//		arr1[sz - 1] = tmp;
//		if (strcmp(arr1, arr2) == 0)
//			return 1;
//	}
//	return 0;
//}

// //方法二：复制一遍字符串A，在两倍的字符串中找B
//比较ABCD和CDAB->在ABCDABCD找CDAD
//const char * strstr ( const char * str1, const char * str2 );
//定位子字符串
//返回指向str1中第一次出现str2的指针，如果str2不是str1的一部分，则返回空指针。
 
//int Is_left(char* arr1, char* arr2, int sz)
//{
//	char tmp[256] = { 0 };
//	strcpy(tmp, arr1);
//	strcat(tmp, arr1);
//	if (strstr(tmp, arr2) != NULL)
//		return 1;
//	else
//		return 0;
// }
// 
//int main()
//{
//	char arr1[10] = "0";
//	char arr2[10] = "0";
//	int k = 0;
//	while (scanf("%s %s", arr1, arr2) == 2)
//	{
//		int sz1 = strlen(arr1);
//		int sz2 = strlen(arr2);
//		int ret = 0;
//		if (sz1 == sz2)
//			ret = Is_left(arr1, arr2, sz1);
//		printf("%d\n", ret);
//	}
//	return 0;
//}