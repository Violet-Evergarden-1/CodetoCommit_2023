#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//���Ͼ���
//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ�����
//���д�����������ľ����в���ĳ�������Ƿ���ڡ�
//Ҫ��ʱ�临�Ӷ�С��O(N);

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
//			//�ҵ�������ֵ����ȥ
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
//		int x = 4;//��
//		int y = 4;//��
//		int ret = 0;
//		ret = Find(arr, &x, &y, n);//x,y�ȴ��������С�������ֽ��շ�������(�����ͺ���)
//		if (ret == 1)
//		{
//			printf("�ҵ��ˣ�������%d %d\n", x, y);
//		}
//		else
//			printf("û�ҵ�\n");
//	}
//	return 0;
//}


//�ַ�������
//ʵ��һ�����������������ַ����е�k���ַ���
//���磺
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB

//����1��һ������
//
//void Left(char* arr, int k, int sz)
//{
//	int i = 0;
//	for (i = 0; i < k; i++)//����ֵ�����ұߣ�ѭ��k��
//	{
//		char tmp = arr[0];
//		int j = 0;
//		for (j = 0; j < sz-1; j++)//�Ѻ����ֵ����ƽ��1λ��ѭ��sz-1��
//		{
//			arr[j] = arr[j + 1];
//		}
//		arr[sz-1] = tmp;
//	}
//}

//����2���ҶϿ�λ�ý���
//char * strcpy ( char * destination, const char * source );�����ַ���
//char * strncat ( char * destination, const char * source, size_t num );����ַ���B��N��Ԫ�ص�A

//void Left(char* arr, int k, int sz)
//{
//	char tmp[256] = { 0 };
//	strcpy(tmp, arr + k);//����k����֮����ַ�����tmp��
//	strncat(tmp, arr, k);//��k����֮ǰ���ַ����ӵ�tmp��
//	strcpy(arr, tmp);//��tmp���Ƶ�arr��
//}

//����3���ֱ����򣬶�����������
//AB CDEF->BA FEDC->CDEF AB
//...ʡ��û��

//int main()
//{
//	int k = 0;
//	while (scanf("%d", &k) == 1)
//	{
//		char arr[] = "ABCDEF";
//		int sz = strlen(arr);
//		k %= sz;//����sz�κ����»ص���ԭ����
//		Left(arr, k, sz);
//		printf("%s\n", arr);
//	}
//	return 0;
//}


//�ַ�����ת���
//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1
//����s1 = abcd��s2 = ACBD������0.
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//AABCD����һ���ַ��õ�DAABC

//����һ��һ��һ�����������ж����
//int strcmp ( const char * str1, const char * str2 );�Ƚ���ȣ���ȷ���0

#include<string.h>

//int Is_left(char* arr1, char* arr2, int sz)
//{
//	int i = 1;
//	for(i = 1; i <= sz; i++)//i��Ϊ��������
//	{
//		char tmp = arr1[0];
//		int j = 0;
//		for (j = 0; j < sz - 1; j++)//�Ѻ����ֵ����ƽ��1λ��ѭ��sz-1��
//		{
//			arr1[j] = arr1[j + 1];
//		}
//		arr1[sz - 1] = tmp;
//		if (strcmp(arr1, arr2) == 0)
//			return 1;
//	}
//	return 0;
//}

// //������������һ���ַ���A�����������ַ�������B
//�Ƚ�ABCD��CDAB->��ABCDABCD��CDAD
//const char * strstr ( const char * str1, const char * str2 );
//��λ���ַ���
//����ָ��str1�е�һ�γ���str2��ָ�룬���str2����str1��һ���֣��򷵻ؿ�ָ�롣
 
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