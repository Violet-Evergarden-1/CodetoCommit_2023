#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int a = 0;
//	int i = 0;
//	while(i <100)
//	{
//		i ++;
//		a ++;
//		if (1 == a % 2)
//			printf("%d\n", a);
//	}
//	
//	return 0;
//}

//#define b 2;
//int main()
//{
//	int a = 0;
//	const int c = 2;
//	scanf("%d", &a);
//	switch (a)
//	{
//	case 1:
//		printf("星期一");
//		break;
//	case b:
//		printf("星期二");
//		break;
//	}
//		
//	return 0;
//}  

//int main()
//{
//	int a = 0;
//	printf("你多大？");
//	scanf("%d", &a);
//	char b = 0;
//	
//	while (getchar() == EOF)
//	{
//		;
//	}
//
//	printf("成年了吗？（Y/N）");
//	b = getchar();
//	//scanf("%c", &b);
//	if ('Y' ==  b)
//		printf("坚持访问\n");
//	else
//		printf("拒绝访问\n");
//
//	return 0;
//}

//int main()
//{
//	char a = '\0';
//	while ((a=getchar()) != EOF)
//	{
//		if (a < '0' || a > '9')
//			continue;
//		putchar(a);
//	}
//	return 0;
//}

//int main()
//{
//	printf("%d", sizeof(char*));
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	while (a <= 100)
//	{
//		a++;
//		if (0 == a % 3)
//			printf("%d ", a);
//		
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0, b = 0, c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a > b)
//	{
//		if (b > c)
//			printf("%d %d %d", &a, &b, &c);
//		else if (a > c && c > b)
//			printf("%d %d %d", &a, &c, &b);
//		else if (c > a)
//			printf("%d %d %d", &c, &a, &b);
//	}
//	else if (b >= a)
//	{
//		if (a > c)
//			printf("%d %d %d", b, a, c);
//		else if (b > c && c > a)
//			printf("%d %d %d", b, c, a);
//		else if (c > a)
//			printf("%d %d %d", c, a, b);
//	}
//
//	return 0;
//}

//int main()
//{
//	int a = 100;
//	int b = 0;
//	int i = 2;
//	while (a < 200)
//	{	
//		b = (a % i);
//		if (a == i)
//		{
//			printf("%d ", a);
//			a ++;
//			i = 2;
//			continue;
//		}
//	
//		else if (0 == b)
//		{
//			a ++;
//			i = 2;
//			continue;
//		}
//		else if (b != 0)
//		{
//			i++;
//			continue;
//		}
//
//	}
//		
//	return 0;
//}

//int main()
//{
//	int a = 1000;
//	int b = 0;
//	while (a <= 2000)
//	{
//		if (0 == (a % 400))
//			printf("%d ", a);
//		else if ((a % 100) != 0 && (a % 4) == 0)
//			printf("%d ", a);
//		a += 4;		
//	}
//
//	return 0;
//}

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
