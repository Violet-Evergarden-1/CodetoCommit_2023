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
//	//�������������Χ��0-32767��%100ʹ�䷶Χ1-100
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
//	srand((unsigned int)time(NULL));//�������ʼֵ
//	int select = 0;
//	do
//	{
//		menu();//��ӡ�˵�
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
//	} while (select);//ѡ��Ϊ1ѭ����Ϊ0���٣���ѭ��
//	
//	return 0;
//}

//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 120"); 
//	printf("��ɫ������ĵ���2�����ھ�Ҫ�ػ��ˣ�����Ļ������룺������ɺ�����ĺ��Ĺ���������\n");
//	Sleep(1000);
//	printf("���䣬��Ҳ������ĵ��Թػ���->");
//	while (1)
//	{
//		scanf("%s", input);
//		if (strcmp(input, "����ɺ�����ĺ��Ĺ�������") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//		else
//		{
//			printf("\n�ٸ���һ�λ��ᣬһ���ֶ�������Ŷ��ץ��ʱ���\n����->");
//		}
//	}
//	char arr1[] = "�㱻ƭ�˹�������";
//	char arr2[] = "                ";
//	int left = 0;
//	int right = strlen(arr1) - 1;//��ȡ�ַ���ɾȥ\0�ĳ���
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[left + 1] = arr1[left + 1];
//		system("cls"); //system��������ִ��ϵͳ���cls��������Ļ
//			printf("%s\n", arr2);
//		Sleep(1000);//��λ ����
//		left+=2;
//	}
//
//	return 0;
//}