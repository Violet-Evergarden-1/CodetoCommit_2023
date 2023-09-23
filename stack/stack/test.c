#define _CRT_SECURE_NO_WARNINGS 1
#include"Stack.h"

Test1()
{
	ST st;
	STInit(&st);
	STPush(&st, 1);
	STPush(&st, 2);
	STPush(&st, 3);
	STPush(&st, 4);
	STPush(&st, 5);
	while (!STEmpty(&st))
	{
		printf("%d ", STTop(&st));
		STPop(&st);
	}
	printf("\n");

	STDestory(&st);
}

int main()
{
	Test1();

	return 0;
}