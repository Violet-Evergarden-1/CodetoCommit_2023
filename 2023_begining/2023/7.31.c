#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

//初始代码，缺乏对空指针、空字符串与只有0的字符串、正负号、越界的检测
//int My_atoi(char* str)
//{
//	assert(str);
//	int num = 0;
//	while(*str)
//	{ 
//		if(*str>'0'&&*str<'9')
//			num = num * 10 + *str - '0';
//		str++;
//	}
//	return num;
//}

//enum State
//{
//	INVALID,
//	VALID,
//};
//
//enum State state = INVALID;
//
//int My_atoi(char* str)
//{
//	assert(str);
//	int flag = 1;//判断正负
//	long long ret = 0;
//	state = INVALID;//默认为非法值
//
//	//跳过所有非数字字符
//	while(*str < '0' || *str > '9')
//	{ 
//		if (*str == '-')
//		{
//			flag = -1;
//		}
//		if (!*str)
//			return 0;
//		str++;
//	}
//	while (*str >= '0' && *str <= '9')
//	{
//		ret = ret * 10 + *str - '0';
//		str++;
//
//		//只有存在数字字符并且后面是\0才为合法值
//		if (!*str)
//			state = VALID;
//	}
//
//	//检测越界
//	if (ret < INT_MIN || ret > INT_MAX)
//		return flag*INT_MAX;
//
//	return flag * (int)ret;
//}
//
//int main()
//{
//	char str[10] = { 0 };
//	int a = 0;
//	int b = 0;
//	while (gets(str) != NULL)
//	{
//		b = atoi(str);
//		a = My_atoi(str);
//		printf("My_atoi:%d\n", a);
//		printf("atoi   :%d\n", b);
//		printf("是否有效%d\n", state);
//	}
//	return 0;
//}


//int main()
//{
//	char str[] = "5bc";
//	printf("%d\n", str[0]);
//	printf("%c\n", str[0]);
//
//	return 0;
//}