#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#include<math.h>

//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����
//int main()
//{
//	int i = 1;
//	float a = 0;
//	float b = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		a = pow(-1, i + 1);
//		b += a / i;
//	}
//	printf("%f", b);
//	return 0;
//}

//��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9

//int main()
//{
//	int i = 0;
//	int count = 0;
//
//
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//��д������һ���������������в��Ҿ����ĳ����
//
//Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ�����
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = 8;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int flag = 0;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] == n)
//		{
//			printf("%d\n", mid);
//			flag = 1;
//			break;
//		}
//		if (arr[mid] < n)
//			left = mid + 1;
//		else if (arr[mid] > n)
//			right = mid - 1;
//	}
//	
//	if (flag == 0)
//		printf("�Ҳ���");
//	return 0;
//}