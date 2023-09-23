#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"

void TestSeqList()
{
	SL s1;
	SLInit(&s1);
	SLPushBack(&s1,1);
	SLPushBack(&s1,2);
	SLPopBack(&s1);

	SLPushFront(&s1, 3);
	SLPushFront(&s1, 4);
	SLPushFront(&s1, 5);
	SLPopFront(&s1);

	SLInsert(&s1, 2, 2);
	SLErase(&s1, 2);

	SLPrint(&s1);

	SLDestory(&s1);
}


int main()
{
	TestSeqList();

	return 0;
}