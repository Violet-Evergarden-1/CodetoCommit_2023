#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>

//int func(int x)
//{
//	int count = 0;
//	while (x)
//	{
//		count++;
//		x = x & (x - 1);//������
//		//-1:10000000 00000000 00000000 00000001
//		//   11111111 11111111 11111111 11111111
//		// 
//		//-2:10000000 00000000 00000000 00000010
//		//   11111111 11111111 11111111 11111110
//
//		//& :11111111 11111111 11111111 11111110
//		//   10000000 00000000 00000000 00000010
//
//		//31:11000000 00000000 00000000 00000000 - ԭ
//		//   11000000 00000000 00000000 00000000 - ��
//		
//		//   10111111 11111111 11111111 11111111 - ��-1
//		
//
//		//32:10000000 00000000 00000000 00000000 - &��
//		//	 01111111 11111111 11111111 11111111 - &��-1
//		//   0;
//
//	}
//	return count;
//}
//
//int main()
//{
//	printf("%d",func(-1));
//
//	return 0;
//}

//int main()
//{
//	int count = 0;
//	int x = -1;
//	while (x)
//	{
//		count++;
//		x = x >> 1;
//	}
//	//-1:10000000 00000000 00000000 00000001 -ԭ
//	//   11111111 11111111 11111111 11111111 -��
//	//>>:11111111 11111111 11111111 11111111
//
//
//	printf("%d", count);
//
//	return 0;
//}

//int main()
//{
//	int a = 0, b, c, d;
//	//a = (b = (c = 2, d = 3));
//	a = a < a + 1;
//
//	printf("%d ", a);
//	//printf("%d ", b);
//	//printf("%d ", c);
//	//printf("%d ", d);
//
//	return 0;
//}

//int main()
//{
//	int w = 1, x = 2, y = 3, z = 4;
//	printf("%d", w < x ? w : y < z ? y : z);
//
//	return 0;
//}

//int main()
//{
//	int a = 1, b = 2, m = 0, n = 0, k;
//	k = (n = b < a) && (m = a);
//	printf("%d,%d\n", k, m);
//
//	return 0;
//}

//A(i)	B(i)	���	��λ
//0	    0	    0	    0
//0	    1	    1	    0
//1	    0	    1	    0
//1	    1	    0	    1
//(1) ��ǰλ�ĺ�ֵ���� A(i) ^ B(i)
//(2) ��λ���� A(i)& B(i), ��λ��Ҫ���ڼ���λ��ǰһλ����������1λ����A(i)& B(i) << 1
//�����ҳ����� A + B = A ^ B + (A & B) << 1;


//int Add(int num1, int num2) 
//{
//    //��λֵ
//    int add = num2;
//
//    //����λ��ֵ
//    int sum = num1;
//
//    //��λֵ==0ʱ������λֵ��Ϊ��
//    while (add)
//    {
//        //����󲻽�λֵ
//        int tmp = sum ^ add;
//        //��λ������λֵ
//        add = (sum & add) << 1;
//        sum = tmp;
//    }
//    return sum;
//}



//448. �ҵ�������������ʧ������
//����һ���� n ������������ nums ������ nums[i] ������[1, n] �ڡ������ҳ�������[1, n] 
//��Χ�ڵ�û�г����� nums �е����֣������������ʽ���ؽ����
//���룺nums = [4, 3, 2, 7, 8, 2, 3, 1]
//�����[5, 6]


//��ϣ��
//int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
//
//	//ά��һ�����飨��ϣ������ʼ��Ϊ0
//	int arr[100000] = { 0 };
//
//	//����ԭ���飬�Ѹ�Ԫ����Ϊ�±긳ֵ��ϣ��Ϊ1
//	for(int i=0;i<numsSize;i++)
//	{
//		arr[nums[i]] = 1;
//	}
//
//	int* ret = (int*)malloc(sizeof(int) * numsSize);
//
//	//������ϣ����Ϊ���Ԫ�ض�Ӧ���±����������ȱ�ٵ�����
//	//ȱ�����ֵ�����Ϊ[1,n],���Զ�Ӧ�����±�0����������Ϊ<=
//	int cur = 0;
//	for(int i=1;i<=numsSize;i++)
//	{
//		if (arr[i] == 0)
//		{
//			ret[cur++] = i;
//		}
//	}
//	*returnSize = cur;
//	return ret;
//}

//��ϣ��ԭ���޸ģ��ռ临�Ӷ���O(N)��ΪO(1)
//int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) 
//{
//	//����ԭ���飬ÿ����һ����x������ nums[x?1]����n,�����Ժ���Щ����Ȼ����n
//	for (int i = 0; i < numsSize; i++)
//	{
//		int x = (nums[i] - 1) % numsSize;
//		nums[x] += numsSize;
//	}
//
//	int* ret = (int*)malloc(sizeof(int) * numsSize);
//
//	//�������飬�� nums[i]δ����n����˵��û����������i+1
//	int cur = 0;
//	for (int i = 0; i < numsSize; i++)
//	{
//		if (nums[i] <= numsSize)
//		{
//			ret[cur++] = i + 1;
//		}
//	}
//	*returnSize = cur;
//	return ret;
//}

//int main()
//{
//	int x = -1;
//	unsigned int y = 2;
//	if (x > y)
//	{
//		printf("x is greater");
//	}
//	else
//	{
//		printf("y is greater");
//	}
//	return 0;
//}

//int main()
//{
//
//	int k, a, b;
//	unsigned int w = 5;
//	double x = 1.42;
//
//	//w += -20;
//	//printf("%d", w);
//
//	//x = x % 3;
//	//pritf("%lld", x);
//
//	return 0;
//}

//int main()
//{
//	int k = 1 ^ (1 << 31 >> 31);
//	//1- 00000000 00000000 00000000 00000001
//	//<< 10000000 00000000 00000000 00000000
//	//>> 11111111 11111111 11111111 11111111
//
//	//^  11111111 11111111 11111111 11111110-��
//	//   10000000 00000000 00000000 00000010-ԭ��-2
//
//	printf("%d\n", k);
//
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	sizeof(i++);
//	printf("%d\n", i);
//
//	return 0;
//}


//485. ������� 1 �ĸ���
//����һ������������ nums �� ��������������� 1 �ĸ�����
//���룺nums = [1, 1, 0, 1, 1, 1]
//�����3

//Խ�磬�ύ����
//int findMaxConsecutiveOnes(int* nums, int numsSize) 
//{
//	int count = 0, num = 0;
//	for (int i = 0; i < numsSize; i++)
//	{
//		count = 0;
//		while (nums[i] == 1 && i < numsSize)
//		{
//			i++;
//			count++;
//		}
//		
//		num = (count > num ? count : num);
//	}
//
//	return num;
//}

//int findMaxConsecutiveOnes(int* nums, int numsSize)
//{
//	int count = 0, num = 0;
//	for (int i = 0; i < numsSize; i++)
//	{
//		if (nums[i] == 1)
//		{
//			count++;
//		}
//		else
//		{
//			num = (count > num ? count : num);
//			count = 0;
//		}
//	}
//	num = (count > num ? count : num);
//
//	return num;
//}
//
//int main()
//{
//	int arr[] = { 1,1,0,1,1,1,0,1,1 };
//	printf("%d", findMaxConsecutiveOnes(arr, sizeof(arr) / sizeof(arr[0])));
//
//	return 0;
//}


//HJ56 ��ȫ������
//��ȫ����Perfect number�����ֳ����������걸������һЩ�������Ȼ����
//�����е������ӣ����������������Լ�����ĺͣ������Ӻ�������ǡ�õ���������
//���磺28������Լ��1��2��4��7��14��28����ȥ������28�⣬����5������ӣ�
//1 + 2 + 4 + 7 + 14 = 28��
//����n�������n����(��n)��ȫ���ĸ�����

//bool isPerfect(int x)
//{
//	int add = 0;
//	for (int i = 1; i < x; i++)
//	{
//		if (x % i == 0)
//			add += i;
//	}
//	if (add == x)
//		return true;
//	else
//		return false;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int count = 0;
//	for (int i = 1; i < n; i++)
//	{
//		if (isPerfect(i))
//			count++;
//	}
//	printf("%d", count);
//
//	return 0;
//}

//int main()
//{
//	char c = 'A';
//	if ('0' <= c <= '9') 
//		printf("YES");
//	else printf("NO");
//	return 0;
//}

//int main()
//{
//	int a = 1, b = 2, c = 1;
//	int d = 0;
//	d = (a++ < b++ < c++);
//
//	printf("%d ", a);
//	printf("%d ", b);
//	printf("%d ", c);
//	printf("%d ", d);
//
//} 

//int main()
//{
//	int n = 1001;
//	int ans = 0;
//	for (int i = 1; i <= n; ++i)
//	{
//		ans ^= i % 3;
//	}
//	printf("%d", ans);
//	return 0;
//}


//���ֵߵ�
//����һ��������������������ַ�������ʽ�������
//���򲻿��Ǹ���������������ֺ���0����������ʽҲ����0��������Ϊ100�������Ϊ001

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	if (!n)
//		printf("0");
//	while (n)
//	{
//		printf("%c",n % 10 + '0');
//		n /= 10;
//	}
//	
//	return 0;
//}


//HJ31 ���ʵ���
//���ַ����е����е��ʽ��е��š�
//1�����ɵ��ʵ��ַ�ֻ��26����д��СдӢ����ĸ��
//2���ǹ��ɵ��ʵ��ַ�����Ϊ���ʼ������
//3��Ҫ���ź�ĵ��ʼ������һ���ո��ʾ�����ԭ�ַ��������ڵ��ʼ��ж�������ʱ��
//����ת����Ҳֻ�������һ���ո�������
//4��ÿ�������20����ĸ��

//int main()
//{
//	char str[100][22] = {0};
//	int i = 0;
//	int x;
//	while (1)
//	{
//		x=scanf("%[A-z]s", str[i]);
//		if (getchar() == '\n')
//			break;
//		if (x)
//			i++;
//	} 
//	for (i; i >= 0; i--)
//	{
//		printf("%s ", str[i]);
//
//	}
//
//	return 0;
//}