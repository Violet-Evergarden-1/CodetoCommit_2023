#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int sum = 0;
//	int ret = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = n;
//		for (i = 1; i < n; i++)
//			ret = ret * i;
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int i = 0;
//	int sum = 0;
//	int ret = 1;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = ret * n;
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}

//#include <string.h>
//#include <windows.h>
//
//int main()
//{
//	char arr1[] = "TECH OTAKUS SAVE THE WORLD";
//	char arr2[] = "                          ";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		system("cls");
//		printf("%s\n", arr2);
//		Sleep(1000);
//		left++;
//		right--;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		char password[20] = { 0 };
//		printf("����������\n");
//		scanf("%s", password);
//		//�ж������Ƿ���ȷ
//		//�����ַ����Ƚ�����ǲ���ʹ��==�ģ�Ӧ��ʹ��strcmp�⺯��
//		//strcmp����0��ʾ2���ַ������
//		//strcmp����>0�����֣���ʾ��һ���ַ������ڵڶ����ַ���
//		//strcmp����<0�����֣���ʾ��һ���ַ���С�ڵڶ����ַ���
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//			printf("�������\n");
//	}
//	if (3 == i)
//		printf("�˳�����\n");
//	return 0;
//}

//������
//int main()
//{
//	int n = 100;
//		int b = 0;
//	int i = 2;
//	while (n < 200)
//	{
//		b = (n % i);
//		if (i > n / 2)//3rd��֤������������Ϊ����
//		{
//			printf("%d ", n);
//			n++;
//			i = 2;
//			continue;
//		}
//
//		else if (0 == b)//1st��Ϊ�㿪ʼ��һ������֤
//		{
//			n++;
//			i = 2;
//			continue;
//		}
//		else if (b != 0)//2nd��Ϊ�������֤
//		{
//			i++;
//			continue;
//		}
//
//	}
//
//	return 0;
//}


//�����Լ��
//int main()
//{
//	int a = 0, b = 0;
//	int c = 0, d = 0;
//	scanf("%d %d", &a, &b);
//	c = (a > b ? a : b);
//	d = (a > b ? b : a);
//	int e = (c % d);
//		while (e != 0)
//		{
//			c = d;
//			d = e;
//			e = (c % d);
//		}
//		printf("%d",d);
//		return 0;
//}

//�Ż���18 % 24 = 18
//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d %d", &a, &b);
//	int c = (a % b);
//	while (c != 0)
//	{
//		a = b;
//		b = c;
//		c = (a % b);
//	}
//	printf("%d", b);
//	return 0;
//}

//��ӡ�˷��ھ���
//int main()
//{
//	int x = 1;
//	int y = 1;
//	int i = 0;
//	for (x = 1, y = 1 ; x < 10; x++)
//	{
//		for (y = 1; y <= x; y++)
//		{
//			int a = x * y;
//			printf("%d*%d=%02d ", x, y, a);
//		}
//	printf("\n");
//	}
//	return 0;
//}

//��10 �����������ֵ
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for(i = 0; i < 10; i++)
//		scanf("%d", &arr[i]);
//	int j = 0;
//	int a = 0;
//	for(j = 1; j < 10; j++)
//		a = (arr[a] > arr[j] ?  a: j);
//	printf("���ֵΪ%d", arr[a]);
//
//	return 0;
//}

