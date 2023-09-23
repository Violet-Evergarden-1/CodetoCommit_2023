#define _CRT_SECURE_NO_WARNINGS 1
#include"List.h"

 LTNode* BuyLTNode(LTDataType x)
{
	LTNode* nood = (LTNode*)malloc(sizeof(LTNode));
	if (nood == NULL)
	{
		perror("malloc failed");
		exit(-1);
	}

	nood->data = x;
	nood->next = NULL;
	nood->prev = NULL;

	return nood;
}

LTNode* LTInit()
{
	LTNode* phead = BuyLTNode(0);
	phead->next = phead;
	phead->prev = phead;

	return phead;
}

void LTPrint(LTNode* phead)
{
	assert(phead);

	LTNode* cur = phead->next;

	printf("phead<=>");
	while (cur != phead)
	{
		printf("%d<=>", cur->data);
		cur = cur->next;
	}
	printf("\n");
}

void LTPushBack(LTNode* phead, LTDataType x)
{
	assert(phead);

	LTNode* newnood = BuyLTNode(x);
	LTNode* tail = phead->prev;

	newnood->prev = tail;
	tail->next = newnood;

	newnood->next = phead;
	phead->prev = newnood;
}

void LTPopBack(LTNode* phead)
{
	assert(phead);
	assert(phead->next != phead);
	
	LTNode* tail = phead->prev; 
	LTNode* tprev = tail->prev;
	tprev->next = phead;
	phead->prev = tprev;
	
	free(tail);
}

void LTPushFront(LTNode* phead, LTDataType x)
{
	assert(phead);

	LTNode* newnood = BuyLTNode(x);
	LTNode* first = phead->next;
	
	phead->next = newnood;
	newnood->prev = phead;

	newnood->next = first;
	first->prev = newnood;
}

void LTPopFront(LTNode* phead)
{
	assert(phead);
	assert(phead->next != phead);

	LTNode* first = phead->next;
	LTNode* second = first->next;

	phead->next = second;
	second->prev = phead;
	free(first);
}

LTNode* LTFind(LTNode* phead, LTDataType x)
{
	assert(phead);

	LTNode* cur = phead->next;
	while (cur != phead)
	{
		if (cur->data == x)
			return cur;
		cur = cur->next;
	}
	return NULL;
}

int LTSize(LTNode* phead)
{
	assert(phead);

	int size = 0;
	LTNode* cur = phead->next;

	while (cur != phead)
	{
		size++;
		cur = cur->next;
	}

	return size;
}

void LTInsert(LTNode* pos, LTDataType x)
{
	assert(pos);

	LTNode* newnood = BuyLTNode(x);
	LTNode* posPrev = pos->prev;

	posPrev->next = newnood;
	newnood->prev = posPrev;
	newnood->next = pos;
	pos->prev = newnood;
}

void LTErase(LTNode* pos)
{
	assert(pos);
	
	LTNode* posPrev = pos->prev;
	LTNode* posNext = pos->next;

	posPrev->next = posNext;
	posNext->prev = posPrev;

	free(pos);
}

void LTDestory(LTNode* phead)
{
	assert(phead);

	LTNode* cur = phead->next;
	while (cur != phead)
	{
		LTNode* next = cur->next;
		free(cur);
		cur = next;
	}
	free(phead);
}
