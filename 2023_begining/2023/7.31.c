#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

//��ʼ���룬ȱ���Կ�ָ�롢���ַ�����ֻ��0���ַ����������š�Խ��ļ��
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
//	int flag = 1;//�ж�����
//	long long ret = 0;
//	state = INVALID;//Ĭ��Ϊ�Ƿ�ֵ
//
//	//�������з������ַ�
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
//		//ֻ�д��������ַ����Һ�����\0��Ϊ�Ϸ�ֵ
//		if (!*str)
//			state = VALID;
//	}
//
//	//���Խ��
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
//		printf("�Ƿ���Ч%d\n", state);
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