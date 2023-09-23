#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	int a=0, b=0, c=0;
//	while (scanf("%d %d", &a, &b) == 2)
//	{	
//		c = (a > b ? a : b);
//		printf("%d\n", c);
//	}
//
//	return 0;
//}

//int main()
//{
//	int a = printf("Hello world!\a\a");
//	printf("\n%d", a);
//
//	return 0;
//}

//int main()
//{
//	int a = 15;
//	printf("%p\n", &a);
//
//	int* pa = &a;
//	*pa = 30;
//	printf("%d", a);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	printf("%zd\n", sizeof(p));
//	printf("%zd", sizeof(int*));
//
//	return 0;
//}

//struct Game
//{
//	int year;
//	char type[20];
//	float score;
//};
//
//void print1(struct Game a)
//{
//	printf("%d %s %f\n", a.year, a.type, a.score);
//}
//
//void print2(struct Game* pa)
//{
//	printf("%d %s %f\n", (*pa).year, (*pa).type, (*pa).score);
//	printf("%d %s %f\n", pa->year, pa->type, pa->score);
//}
//
//int main()
//{
//	struct Game Titan = { 2002, "FPS", 99.9f };
//	print1(Titan);
//	print2(&Titan);
//}