#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//} 

//��������ʹ����ȫ����λ��ż��ǰ�档
//��Ŀ��
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�

//���ⴴ�������飬�˷ѿռ䣬�������Σ��˷�ʱ��
//void Swap(int arr[], int arr1[], int arr2[], int sz)
//{
//	int i = 0;
//	int a = 0;
//	int b = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] % 2 == 1)//��������arr1��
//		{
//			arr1[a] = arr[i];
//			a++;
//		}
//		else
//		{
//			arr2[b] = arr[i];//ż������arr2��
//			b++;
//		}
//	}
//	for (i = 0; i < sz; i++)//�ϲ�arr1��arr2��arr��
//	{
//		if (i <= a)
//		{
//			arr[i] = arr1[i];
//		}
//		else
//		{
//			arr[i] = arr2[i - a];
//		}
//	}
//}
//
//�Ż�
/*
˼·��
1. ���������±�left��right��left�����������ʼλ�ã�right�������������һ��Ԫ�ص�λ��
2. ѭ������һ�²���
 a. ���left��right��ʾ������[left, right]��Ч������b���������ѭ��
 b. left��ǰ�����ң��ҵ�һ��ż����ֹͣ
 c. right�Ӻ���ǰ�ң��ҵ�һ��������ֹͣ
 d. ���left��right���ҵ��˶�Ӧ�����ݣ��򽻻�������a��
 �ŵ㣺��������ֻ������һ��
*/
//void Swap(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		while (left < right && arr[left] % 2 == 1)//l<r��ֹԽ�����ѭ�������ֻ��������
//		{
//			left++;
//		}
//		while (left < right && arr[right] % 2 == 0)
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//
//
//int main()
//{
//	int arr[10] = { 0};
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	//int arr1[10] = {0};
//	//int arr2 [10] = {0};
//	//Swap(arr, arr1, arr2, sz);
//	Swap(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	
//	return 0;
//}

//ģ��ʵ�ֿ⺯����strcpy;
//char *strcpy(dst, src) - copy one string over another
//
//*Purpose:
//*       Copies the string src into the spot specified by
//*       dest; assumes enough room.
//*
//*Entry:
//*       char * dst - string over which "src" is to be copied
//*       const char * src - string to be copied over "dst"
//*
//*Exit:
//*       The address of "dst"
//*
//*Exceptions:

//char* My_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest++ = *src++)
//		;//�����
//
//	return dest;
//}
//
//int main()
//{
//	char arr1[] = "strom";
//	char arr2[20] = "\0";
//	//My_strcpy(arr2, arr1);
//	//printf("%s", arr2);
//	printf("%s\n", my_strcpy(arr2, arr1));
//
//	return 0;
//}
