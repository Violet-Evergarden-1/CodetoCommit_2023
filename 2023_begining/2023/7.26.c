#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//找单身狗2
//一个数组中只有两个数字是出现一次，其他所有数字都出现了两次。
//编写一个函数找出这两个只出现一次的数字。
//例如：
//有数组的元素是：1，2，3，4，5，1，2，3，4，6
//只有5和6只出现1次，要找出5和6.

//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4,6 };
//	int i = 0;
//	int ret = 0;
//
//	//0异或一个数是它本身，再异或相同的数为0
//	//用0依次异或所有的数，得到两个单身狗数的异或数
//	for (i = 0; i < 10; i++)
//	{
//		ret = arr[i] ^ ret;
//	}
//
//	//异或数二进制为1，表示两个数的二进制位在此位次不同
//	//获得任意一个不同位，并将数组以此位分类，再分别异或
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

//模拟实现strncpy

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

//模拟实现strncat

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

//模拟实现atoi