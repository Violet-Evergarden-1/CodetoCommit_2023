#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//��дһ������ reverse_string(char* string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������У����������ӡ��
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
//���� :
//char arr[] = "abcdef";
//����֮����������ݱ�ɣ�fedcba

#include<string.h>
//�ݹ�
//void reverse_string(char* arr, char* arr1, int sz)
//{
//	if (sz > 0)
//	{
//		sz--;
//		reverse_string(arr + 1, arr1, sz);
//		arr1[sz] = *arr;
//		arr[sz] = *arr;
//	}
//}
//
//
//int main()
//{
//	char arr[] = { 0 };
//	scanf("%s", arr);
//	int sz = strlen(arr);
//	char arr1[] = { 0 };
//	reverse_string(arr, arr1, sz);
//	arr1[sz] = '\0';
//	printf("%s\n", arr1);
//	printf("%s", arr);
//
//	return 0;
//}

//�ݹ�2
//

//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ��
//int Pow(int n, int k)
//{
//	if (k == 0)
//		return 1;
//	else if (k > 0)
//	{
//		return n * Pow(n, k - 1);
//	}
//	else if (k < 0)
//	{
//		return n * Pow(n, -k);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	printf("%d", Pow(n, k));
//
//	return 0;
//}