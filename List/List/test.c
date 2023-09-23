#define _CRT_SECURE_NO_WARNINGS 1
#include"List.h"

Test1()
{
	LTNode* plist = LTInit();
	LTPushBack(plist, 1);
	LTPushBack(plist, 2);
	LTPushBack(plist, 3);
	LTPushBack(plist, 4);
	LTPushBack(plist, 5);
	LTPrint(plist);

	LTPopBack(plist);
	LTPopBack(plist);
	LTPrint(plist);
}

Test2()
{
	LTNode* plist = LTInit();
	LTPushFront(plist, 1);
	LTPushFront(plist, 2);
	LTPushFront(plist, 3);
	//LTPushFront(plist, 4);
	//LTPushFront(plist, 5);
	LTPrint(plist);
	printf("%d\n", LTSize(plist));

	LTPopFront(plist);
	LTPopFront(plist);
	LTPopFront(plist);
	LTPrint(plist);

	printf("%d\n", LTSize(plist));
}
							
Test3()
{
	LTNode* plist = LTInit();
	LTPushFront(plist, 5);
	LTPushFront(plist, 4);
	LTPushFront(plist, 3);
	LTPushFront(plist, 2);
	LTPushFront(plist, 1);
	LTPrint(plist);

	LTNode* pos = LTFind(plist, 3);
	LTInsert(pos, 10);
	LTPrint(plist);

	LTErase(pos);
	LTPrint(plist);

	LTDestory(plist);
}

int main()
{
	Test3();

	return 0;
}