#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

//模拟实现memcpy
//void * memcpy ( void * destination, const void * source, size_t num );

//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		((char*)dest)++;
//		((char*)src)++;
//	}
//	return ret;
//}

//int main()
//{
//	int arr1[20] = { 0 };
//	int arr2[] = { 1,2,3,4,5 };
//	my_memcpy(arr1, arr2, 20);
//	int i = 0;
//	for (i = 0; i < (sizeof(arr1) / sizeof(arr1[0])); i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[20] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memcpy(arr+3, arr, 20);
//	int i = 0;
//	for (i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	//预期：1 2 3 1 2 3 4 5 9 10
//	//实际：1 2 3 1 2 3 1 2 9 10
//	//当dest>src并且存在重叠时memcpy无法处理一个数组内的复制
//
//	return 0;
//}

//模拟实现memmove
// void* memmove(void* destination, const void* source, size_t num);

//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	if (dest < src)//从前往后替换
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			((char*)dest)++;
//			((char*)src)++;
//		}
//	}
//	else//从后往前替换
//	{
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(arr+3, arr,20);
//	//src<dest,从后往前替换
//	int i = 0;
//	for (i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//int main()
//{
//	char arr[] = "zpengwei@yeah.net#777";
//	char copy[30];
//	strcpy(copy, arr);
//
//	char sep[] = "@.#";
//	char* ret = NULL;
//
//	//一次打印一个部分，打印三次
//	//ret = strtok(copy, sep);
//	//printf("%s\n", ret);//打印zpengwei
//	//
//	//ret = strtok(NULL, sep);
//	//printf("%s\n", ret);//打印yeah
//	//
//	//ret = strtok(NULL, sep);
//	//printf("%s\n", ret);//打印net
//	
//	//通过for循环打印
//	for (ret = strtok(copy, sep); ret != NULL; ret = strtok(NULL, sep))
//	{
//		printf("%s\n", ret);
//	}
//
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d: %s\n", i, strerror(i));//
//	}
//	return 0;
//}

//int main()
//{
//	//C语言中可以操作文件
//	//操作文件的步骤
//	//1. 打开文件
//	//2. 读/写
//	//3. 关闭文件
//
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		printf("fopen: %s\n", strerror(errno));
//		perror("fopen");
//		//fopen: xxxxxx
//		return 1;
//	}
//	//读文件
//	//...
//
//	//关闭文件
//	fclose(pf);
//
//	return 0;
//

/* isupper example */
//#include <stdio.h>
//#include <ctype.h>
//int main()
//{
//    int i = 0;
//    char str[] = "TEST String.\n";
//    char c;
//    while (str[i])
//    {
//        c = str[i];
//        if (isupper(c))
//            c = tolower(c);
//        putchar(c);
//        i++;
//    }
//    return 0;
//}
