#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int x = 5, y = 7; 
//void swap()
//{
//	int z;
//	z = x; 
//	x = y; 
//	y = z;
//}
//
//int main()
//{
//	int x = 3, y = 8;
//	swap(); 
//	printf("%d,%d\n",x, y); 
//	return 0;
//}

//int main()
//{
//	char c[] = { '\8'};
//
//	printf("%c", c[0]);
//
//	return 0;
//}

//#define INT_PTR int * 
//typedef int * int_ptr; 
//INT_PTR a, b; 
//int_ptr c, d;

//int main()
//{
//	char c[10];
//	scanf("%s", c);
//
//	return 0;
//}


//��ӡ��1������nλ��
//�������� n����˳���ӡ���� 1 ������ n λʮ���������������� 3�����ӡ�� 1��2��3 һֱ������ 3 λ�� 999��
//1. �÷���һ�������б��������ӡ
//2. n Ϊ��������0 < n <= 5
//static int arr[100000];
//
//int* printNumbers(int n, int* returnSize)
//{
//    int end = 1;
//    while (n--)
//        end *= 10;
//    int i = 1;
//    for (i = 1; i < end; i++)
//        arr[i - 1] = i;
//    *returnSize = end - 1;
//
//    return arr;
//}


//�������ڵ�����ת��
//������������ڣ���������һ��ĵڼ��졣
//��֤���Ϊ4λ�������ںϷ���


//int main() 
//{
//    int year, month, day;
//    while (scanf("%d %d %d", &year, &month, &day) != EOF)
//    {
//        int num = 0;
//        switch (month)
//        {
//        //ѡ���Ӧ���·�ʱ��û��break������ż���֮ǰ���·�����
//        case 12:
//            num += 30;
//        case 11:
//            num += 31;
//        case 10:
//            num += 30;
//        case 9:
//            num += 31;
//        case 8:
//            num += 31;
//        case 7:
//            num += 30;
//        case 6:
//            num += 31;
//        case 5:
//            num += 30;
//        case 4:
//            num += 31;
//        case 3:
//            if (year % 100 != 0 && year % 4 == 0 || year % 400 == 0)
//                num += 29;
//            else
//                num += 28;
//        case 2:
//            num += 31;
//        case 1:
//            break;
//        }
//
//        printf("%d\n",num + day);
//    }
//    return 0;
//}
