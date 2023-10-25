#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdbool.h>

//int main()
//{
//	int arr[10] = { 0 };
//	int add = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//		add += arr[i];
//	}
//	int maxi = 0, mini = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		if (arr[i] > arr[maxi])
//			maxi = i;
//		if (arr[i] < arr[mini])
//			mini = i;
//	}
//	printf("最大值是：%d\n", arr[maxi]);
//	printf("下标是：%d\n", maxi);
//	printf("最小值是：%d\n", arr[mini]);
//	printf("下标是：%d\n", mini);
//	printf("数组和为：%d\n", add);
//
//	return 0;
//}

//int fun(char* str)
//{
//	int num = 0;
//	while (*str)
//	{
//		if (*str >= 'A' && *str <= 'z')
//			num++;
//		str++;
//	}
//	return num;
//}

//#include<stdio.h>
//#include<string.h>
//
//void fun(char* str)
//{
//	int len = strlen(str);
//	for(int i=0;i<len;i++)
//	{
//		if (i % 2 == 0 && str[i] >= 'a' && str[i] <= 'z')
//			str[i] -= 32;
//	}
//}
//
//
//int main()
//{
//	char str[] = "abc4EFg";
//	fun(str);
//
//	printf("%s", str);
//
//	return 0;
//}

//bool TriangleJudge(float a, float b, float c)
//{
//    float arr[3] = { 0 };
//    arr[0] = a;
//    arr[1] = b;
//    arr[2] = c;
//
//    for (int i = 0; i < 3; i++)
//    {
//        for (int j = 0; j < 2 - i; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                float tmp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tmp;
//            }
//        }
//    }
//
//    if (arr[0] + arr[1] > arr[2])
//        return true;
//    else
//        return false;
//}
//
//int main()
//{
//    if (TriangleJudge(1.0, 2.0, 3.0))
//        printf("YES");
//    else
//        printf("NO");
//
//    //float a = 1.0, b = 2.0, c = 3.0;
//    //if (a + b > c)
//    //    printf("YES");
//    //else
//    //    printf("NO");
//
//    return 0;
//}

//void oct_bin(int n, int* pbin, int i)
//{
//    if (n == 0)
//        return;
//    if (n > 0)
//    {
//        oct_bin(n / 2, pbin, i * 10);
//        *pbin += (n % 2) * i;
//    }
//}
//
//
//int main()
//{
//    int num, bin = 0, i = 1, flag = 1;
//    scanf("%d", &num);
//    if (num < 0)
//    {
//        num = -num;
//        flag = 0;
//    }
//    oct_bin(num, &bin, i);
//
//    if (flag == 1)            
//        printf("%08d", bin);
//    else
//    {
//        int ret = 0, i = 1;
//        while (bin > 0)
//        {
//            if (bin % 10 == 0)
//                ret += 1 * i;
//            else
//                ret += 0 * i;
//            bin /= 10;
//            i *= 10;
//        }
//        ret += 1;
//
//        while()
//    }
//    return 0;
//}