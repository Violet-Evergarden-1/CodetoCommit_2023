#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//    int i = 1;
//    if (*(char*)&i == 1)
//        printf("小端\n");
//    else
//        printf("大端\n");
//    return 0;
//}

//猜名次
//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果：
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
//
//int main()
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	int d = 1;
//	int e = 1;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if ((b == 2) + (a == 3) == 1 &&
//							(b == 2) + (e == 4) == 1 &&
//							(c == 1) + (d == 2) == 1 &&
//							(c == 5) + (d == 3) == 1 &&
//							(e == 4) + (a == 1) == 1 &&
//							a * b * c * d * e == 120)//防止重复（不唯一）
//							printf("a:%d b:%d c:%d d:%d e:%d", a, b, c, d, e);
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

//猜凶手
//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
//以下为4个嫌疑犯的供词:
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	for (a = 0; a < 2; a++)
//	{
//		for (b = 0; b < 2; b++)
//		{
//			for (c = 0; c < 2; c++)
//			{
//				for (d = 0; d < 2; d++)
//				{
//					if ((a == 0) + (c == 1) + (d == 1) + (d == 0) == 3 && a + b + c + d == 1)
//					{
//						if (a == 1)
//							printf("A");
//						else if (b == 1)
//							printf("B");
//						else if (c == 1)
//							printf("C");
//						else if (d == 1)
//							printf("D");
//					}
//				}
//			}
//		}
//	}
//
//	return 0;
//}

//优化

//int main()
//{
//	char killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("凶手是：%c", killer);
//			break;
//		}
//	}
//	return 0;
//}

//在屏幕上打印杨辉三角。
//1
//1 1
//1 2 1
//1 3 3 1
//1 4 6 4 1
//...

//int triangle(int arr[15][15],int i, int j)
//{
//	if (i < 2 || j == 0||i==j)
//		return 1;
//	if (i >= 2)
//		return (triangle(arr, i - 1, j) + triangle(arr, i - 1, j - 1));
//}
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	int arr[15][15] = {"0"};
//	while (scanf("%d", &n) == 1)
//	{
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j <= i; j++)
//			{
//				//if (i < 2 || j == 0 || i == j)
//				//	arr[i][j] = 1;
//				//else
//				//	arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//				arr[i][j] = triangle(arr, i, j);
//				printf("%d ", arr[i][j]);
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));
//	printf("%u\n", sizeof(+c));
//	printf("%u\n", sizeof(!c));
//	return 0;
//}