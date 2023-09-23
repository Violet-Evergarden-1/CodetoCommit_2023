#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<time.h>



//void menu()
//{
//	printf("-Ready for a game?-\n");
//	printf("---1.play 0.exit---\n");
//}
//
//void game()
//{
//	int ret = rand() % 100 + 1;
//	//生成随机数，范围是0-32767，%100使其范围1-100
//	int guess = 0;
//	while (1)
//	{
//		printf("Please guess\n");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("bigger\n");
//		}
//		else if (guess > ret)
//		{
//			printf("smaller\n");
//		}
//		else if (guess == ret)
//		{
//			printf("congratulation!\ntry again?\n");
//			Sleep(1000);
//			break;
//		}
//	}
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL));//随机数初始值
//	int select = 0;
//	do
//	{
//		menu();//打印菜单
//		printf("Please select->:");
//		scanf("%d", &select);
//		switch (select)
//		{
//		case(1):
//			printf("start game\n");
//			game();
//			break;
//		case (0):
//			printf("exit\n");
//			break;
//		default:
//			printf("wrong,select again\n");
//			Sleep(1000);
//			break;
//		}
//	} while (select);//选择为1循环，为0（假）不循环
//	
//	return 0;
//}

//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 120"); 
//	printf("老色批，你的电脑2分钟内就要关机了，不想的话就输入：“我是珊瑚宫心海的狗！！！”\n");
//	Sleep(1000);
//	printf("快输，你也不想你的电脑关机吧->");
//	while (1)
//	{
//		scanf("%s", input);
//		if (strcmp(input, "我是珊瑚宫心海的狗！！！") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//		else
//		{
//			printf("\n再给你一次机会，一个字都不能少哦，抓紧时间吧\n输入->");
//		}
//	}
//	char arr1[] = "你被骗了哈哈哈哈";
//	char arr2[] = "                ";
//	int left = 0;
//	int right = strlen(arr1) - 1;//读取字符串删去\0的长度
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[left + 1] = arr1[left + 1];
//		system("cls"); //system函数可以执行系统命令，cls是清理屏幕
//			printf("%s\n", arr2);
//		Sleep(1000);//单位 毫秒
//		left+=2;
//	}
//
//	return 0;
//}