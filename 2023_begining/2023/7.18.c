#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>

//int main()
//{
//	int a = 10;
//	printf("%d ", a--);
//	printf("%d ", a);
//
//	return 0;
//}

//模拟实现strlen
//size_t strlen ( const char * str );

////1.新建变量
//size_t my_strlen1(const char* str)
//{
//	size_t count=0;
//	while(*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
////2. 递归
//size_t my_strlen2(const char* str)
//{
//	if (*str)
//		return 1 + my_strlen2(str + 1);
//	else
//		return 0;
//}
//
////3.指针-指针
//size_t my_strlen3(const char* str)
//{
//	char* ps = str;
//	while (*ps++);
//	return ps - 1 - str;
//}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	printf("%u\n", my_strlen1(arr1));
//	printf("%u\n", my_strlen2(arr1));
//	printf("%u\n", my_strlen3(arr1));
//
//	return 0;
//}

//模拟实现strcpy
//char * strcpy ( char * destination, const char * source );

//char* my_strcpy(char* dest, const char* src)
//{
// 	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	while (*dest++ = *src++);
//	return ret;
//}
//
//int main()
//{
//	char arr1[20]="xxxxxxxxxxxxx";
//	char arr2[] = "abcdef";
//	printf("%s", my_strcpy(arr1, arr2));
//
//	return 0;
//}

//模拟实现strcmp
//int strcmp ( const char * str1, const char * str2 );

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == 0)
//			return 0;
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//}
//
//int main()
//{
//	char arr1[] = "abcd";
//	char arr2[] = "aecd";
//	printf("%d", my_strcmp(arr1, arr2));
//
//	return 0;
//}

//模拟实现strcat
//char* strcat(char* destination, const char* source);

//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while(*dest)
//	{
//		dest++;
//	}
//	while (*dest++ = *src++);
//
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = "hello";
//	char arr2[] = "bones";
//	printf("%s", my_strcat(arr1, arr2));
//
//	return 0;
//}

//模拟实现strstr
//const char* strstr(const char* str1, const char* str2);
//		char* strstr(char* str1, const char* str2);

//char* my_strstr(char* str1,const char* str2)
//{
//	char* cp = str1;
//	while (*cp)
//	{
//		char* p1 = cp;
//		char* p2 = str2;
//		while (*p1 == *p2)
//		{
//			*p1++;
//			*p2++;
//			if (*p2 == 0)
//				return cp;
//		}
//		cp++;
//	}
//	return NULL;
//}
//
//int main()
//{
//	char arr1[] = "abcdefg";
//	char arr2[] = "def";
//	printf("%s", my_strstr(arr1, arr2));
//	 
//	return 0;
//}