#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//    int i = 1;
//    int n = 0;
//    long long ret = 0;
//    scanf("%d", &n);
//    for (i = 1; i <= n; i++)
//    {
//        ret += i;
//    }
//    printf("%lld\n", ret);
//
//    return 0;
//}
//等差数列求和公式
//int main()
//{
//	int n = 0;
//	long long sum = 0;
//	scanf("%d", &n);
//	sum = (1 + n) * n / 2;
//	printf("%lld", sum);
//
//	return 0;
//}


//描述
//小乐乐获得4个最大数，请帮他编程找到最大的数。
//输入描述：
//一行，4个整数，用空格分开。
//输出描述：
//一行，一个整数，为输入的4个整数中最大的整数。
//示例1
//输入：
//5 8 2 5
//输出：
//8
// 
//int main()
//{
//    int a, b, c, d;
//    scanf("%d %d %d %d", &a, &b, &c, &d);
//    int arr[4] = {a, b, c, d };
//    int i = 0;
//    int max = 0;
//    for (i = 0; i < 4; i++)
//    {
//        if (max < arr[i])
//            max = arr[i];
//    }
//    printf("%d", max);
//
//    return 0;
//}


//int main()
//{
//	char str[5];
//	for (int i = 0; i < 5; i++)
//	{
//		scanf("%c", &str[i]);
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%c", str[i]);
//	}
//	return 0;
//}
 
 
//描述
//KiKi想判断输入的字符是不是字母，请帮他编程实现。
//输入描述：
//多组输入，每一行输入一个字符。
//输出描述：
//针对每组输入，输出单独占一行，判断输入字符是否为字母，输出内容详见输出样例。
//示例1
//输入：
//A
//6
//输出：
//A is an alphabet.
//6 is not an alphabet.
// 
//int main()
//{
//	int a = 0;
//	while ((a = getchar()) != EOF)
//	{
//		int b = getchar();
//		if (a >= 65 && a <= 122)
//			printf(" is an alphabet.\n", putchar(a));
//		else
//			printf(" is not an alphabet.\n", putchar(a));
//	}
//	return 0;
//}

//int main()
//{
//    char a;
//    while ((a = getchar()) != EOF)
//    {
//        if (a != '\n')    //主要判断是不是回车
//        {
//            if (a >= 'A' && a <= 'z') printf("%c is an alphabet.\n", a);
//            else printf("%c is not an alphabet.\n", a);
//        }
//    }
//    return 0;
//}

//网购
//KiKi非常喜欢网购，在一家店铺他看中了一件衣服，他了解到，如果今天是“双11”（11月11日）则这件衣服打7折，“双12” （12月12日）则这件衣服打8折，如果有优惠券可以额外减50元（优惠券只能在双11或双12使用），求KiKi最终所花的钱数。
//
//数据范围：衣服价格满足
//1≤val≤100000
//输入描述：
//一行，四个数字，第一个数表示小明看中的衣服价格，第二和第三个整数分别表示当天的月份、当天的日期、第四个整数表示是否有优惠券（有优惠券用1表示，无优惠券用0表示）。 注：输入日期保证只有“双11”和“双12”。
//输出描述：
//一行，小明实际花的钱数（保留两位小数）。（提示：不要指望商家倒找你钱）
//示例1
//输入：
//1000.0 11 11 1

//输出：
//650.00
//示例2
//输入：
//999.8 12 12 
//输出：
//799.84
//示例3
//输入：
//66.6 11 11 1
//输出：
//0.00

//int main()
//{
//	float price = 0;
//	int month = 0;
//	int day = 0;
//	int a = 0;
//	float cost = 0;
//	scanf("%f %d %d %d", &price, &month, &day, &a);
//	if (month == 11 && day == 11)
//		cost = price * 0.7;
//	else if (month == 12 && day == 12)
//		cost = price * 0.8;
//	if (a)
//		cost = cost - 50;
//	cost = (cost > 0 ? cost : 0.00);
//	printf("%0.2f", cost);
//
//	return 0;
//}

//void C9X9()
//{
//	int x = 1;
//	int y = 1;
//	int ret = 0;
//	for (x = 1; x <= 9; x++)
//	{
//		for (y = 1; y <= x; y++)
//		{
//			ret = x * y;
//			printf("%d*%d=%02d ", x, y, ret);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
//void C12X12()
//{
//	int x = 1;
//	int y = 1;
//	int ret = 0;
//	for (x = 1; x <= 12; x++)
//	{
//		for (y = 1; y <= x; y++)
//		{
//			ret = x * y;
//			printf("%02d*%02d=%02d ", x, y, ret);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a == 9)
//		C9X9();
//	else if (a == 12)
//		C12X12();
//	
//	return 0;
//}