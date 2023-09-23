#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"

void menu()
{
	printf("**********************************\n");
	printf("******** 1.add     2.del    ******\n");
	printf("******** 3.search  4.modify ******\n");
	printf("******** 5.show    6.sort   ******\n");
	printf("******** 7.empty   0.exit   ******\n");
	printf("**********************************\n");
}

int main()
{
	Contact con;
	Init_Contact(&con);
	int input = 0;
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			Add_Contact(&con);
			break;
		case DEL:
			Del_Contact(&con);
			break;
		case SEARCH:
			Search_Contact(&con);
			break;
		case MODIFY:
			Modify_Contact(&con);
			break;
		case SHOW:
			Show_Contact(&con);
			break;
		case SORT:
			Sort_Contact_By_Name(&con);
			break;
		case EMPTY:
			Init_Contact(&con);
			printf("清空全部联系人\n");
			break;
		case EXIT:
			Save_Contact(&con);
			Destory_Contact(&con);
			printf("退出通讯录\n");
			break;
		}
	} while (input);
}
