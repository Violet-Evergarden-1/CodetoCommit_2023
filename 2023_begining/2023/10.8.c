#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>


//int main()
//{
//	char src[1000010] = "opaopaopa";
//	//gets(src);
//
//	char* cur = src;
//
//	int count_o = 0, count = 0;
//	while (*cur)
//	{
//		if (*cur == 'o')
//		{
//			count_o++;
//		}
//		if (*cur == 'p')
//		{
//			count += count_o;
//		}
//		cur++;
//	}
//	printf("%d", count);
//}

//int main()
//{
//	int num_def = 0;
//	int num_wat = 0;
//	scanf("%d", &num_def);
//	scanf("%d", &num_wat);
//
//	int defH[100010] = { 0 };
//	for (int i = 1; i <= num_def; i++)
//	{
//		int high = 0;
//		scanf("%d", &high);
//		defH[i] = high;
//	}
//
//	for (int i = 0; i < num_wat; i++)
//	{
//		int min = 0, max = 0;
//		scanf("%d %d", &min, &max);
//		for (int j = min; j <= max; j++)
//		{
//			defH[j]--;
//			if (defH[j] < 0)
//			{
//				printf("%d", i);
//				return 0;
//			}
//		}
//	}
//	printf("error");
//	return 0;
//}

//int main()
//{
//    int num_def = 0;
//    int num_wat = 0;
//    scanf("%d", &num_def);
//    scanf("%d", &num_wat);
//
//    int defH[100010] = { 0 };
//    int index = 0;
//    for (int i = 1; i <= num_def; i++)
//    {
//        int high = 0;
//        scanf("%d", &high);
//        defH[i] = high;
//    }
//
//    int min_defH = defH[0];
//    for (int i = 1; i <= num_def; i++)
//    {
//        if (defH[i] < min_defH)
//            min_defH = defH[i];
//    }
//
//    int min_defHi[100] = { 0 };
//    int index = 0;
//    for (int i = 1; i <= num_def; i++)
//    {
//        if (defH[i] = min_defH)
//            min_defHi[index++] = i;
//    }
//
//    if (num_wat < 100000)
//    {
//        for (int i = 0; i < num_wat; i++)
//        {
//            int min = 0, max = 0;
//            scanf("%d %d", &min, &max);
//            for (int j = min; j <= max; j++)
//            {
//                defH[j]--;
//                if (defH[j] < 0)
//                {
//                    printf("%d", i);
//                    return 0;
//                }
//            }
//        }
//    }
//    else
//    {
//        for (int i = 0; i < num_wat; i++)
//        {
//            int min = 0, max = 0;
//            scanf("%d %d", &min, &max);
//
//            for (int j = min; j <= max; j++)
//            {
//                if(j)
//                defH[j]--;
//                if (defH[j] < 0)
//                {
//                    printf("%d", i);
//                    return 0;
//                }
//            }
//        }
//    }
//    printf("%d", num_wat);
//    return 0;
//}

//void print(int score[11][11])
//{
//	printf("  |");
//	for (int i = 0; i < 11; i++)
//	{
//		printf("%d ", i);
//	}
//	printf("\n");
//	printf("  |----------------------\n");
//	for (int i = 0; i < 11; i++)
//	{
//		printf("%2d|", i);
//		for (int j = 0; j < 11; j++)
//		{
//			printf("%d ", score[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int score[11][11] = { 0 };
//	for (int i = 0; i < 11; i++)
//	{
//		for (int j = 0; j < 11; j++)
//		{
//			if (i == 3 || j == 3 || i == 7 || j == 7)
//			{
//				score[i][j] = 4;
//			}
//		}
//	}
//	for (int i = 0; i < 11; i++)
//	{
//		for (int j = 0; j < 11; j++)
//		{
//			if (i == 2 || j == 2 || i == 8 || j == 8)
//			{
//				score[i][j] = 3;
//			}
//		}
//	}
//	for (int i = 0; i < 11; i++)
//	{
//		for (int j = 0; j < 11; j++)
//		{
//			if (i == 1 || j == 1 || i == 9 || j == 9)
//			{
//				score[i][j] = 2;
//			}
//		}
//	}
//	for (int i = 0; i < 11; i++)
//	{
//		for (int j = 0; j < 11; j++)
//		{
//			if (i == 0 || j == 0 || i == 10 || j == 10)
//			{
//				score[i][j] = 1;
//			}
//		}
//	}
//	score[4][4] = score[4][5] = score[4][6] = score[5][4] = score[5][6] = 
//		score[6][4] = score[6][5] = score[6][6] = 5;
//	score[5][5] = 6;
//	print(score);
//
//	int score_M = 0, score_N = 0;
//	char board[11] = "";
//	for (int i = 0; i < 11; i++)
//	{
//		scanf("%s", &board);
//		for (int j = 0; j < 11; j++)
//		{
//			if (board[j] == 'O')
//			{
//				score_M += score[i][j];
//			}
//		}
//	}
//	for (int i = 0; i < 11; i++)
//	{
//		scanf("%s", &board);
//		for (int j = 0; j < 11; j++)
//		{
//			if (board[j] == 'O')
//			{
//				score_N += score[i][j];
//			}
//		}
//	}
//	if (score_M >= score_N)
//		printf("Michael win!");
//	else
//		printf("Bad Michael");
//
//	return 0;
//}

//int main()
//{
//	int n = 1;
//	//scanf("%d", &n);
//	while(n--)
//	{
//		int num = 3;
//		//scanf("%d", &num);
//		int arr[1000] = { 0 };
//		for (int i = 0; i < num; i++)
//		{
//			scanf("%d", &arr[i]);
//		}
//
//		int and= 0;
//		for (int i = 0; i < num; i++)
//		{
//			int and_e = arr[i];
//			for (int j = i; j < num; j++)
//			{
//				and_e &= arr[j];
//				and += and_e;
//			}
//		}
//		printf("%d", and);
//	}
//	return 0;
//}

//int cmp_llong(const void* p1, const void* p2)
//{
//	return(*(long long*)p2 - *(long long*)p1);
//}
//
//int get_maxi(long long map[100001], int range)
//{
//	int maxi = 0;
//	for (int i = 0; i <= range; i++)
//	{
//		if (map[i] > map[maxi])
//			maxi = i;
//	}
//	return maxi;
//}
//
//int main()
//{
//	int range = 0;
//	scanf("%d", &range);
//	long long map[100001] = { 0 };
//	int m, n;
//	scanf("%d %d", &m, &n);
//	long long num = m * n;
//	for (int i = 0; i < num; i++)
//	{
//		int ball = 0;
//		scanf("%d", &ball);
//		map[ball]++;
//	}
//
//	qsort(map, range + 1, sizeof(long long), cmp_llong);
//	long long candidate = 0, count = 0;
//	int i = get_maxi(map, range);
//	while(num--)
//	{
//		if (count == 0)
//		{
//			candidate = i;
//			map[i]--;
//			count++;
//		}
//		else if (candidate == i)
//		{
//			map[i]--;
//			count++;
//		}
//		else if (candidate != i)
//		{
//			map[i]--;
//			count--;
//		}
//		if (map[i] == 0 || num / 4 == 0)
//			i = get_maxi(map, range);
//	}
//
//	printf("%lld", count);
//}