#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int LTDataType;

typedef struct ListNode
{
	LTDataType data;
	struct ListNode* prev;
	struct ListNode* next;
}LTNode;


LTNode* BuyLTNode(LTDataType x);
LTNode* LTInit();
void LTPrint(LTNode* phead);

void LTPushBack(LTNode* phead, LTDataType x);
void LTPopBack(LTNode* phead);

void LTPushFront(LTNode* phead, LTDataType x);
void LTPopFront(LTNode* phead);

int LTSize(LTNode* phead);

LTNode* LTFind(LTNode* phead, LTDataType x);

//pos÷Æ«∞≤Â»Î
void LTInsert(LTNode* pos, LTDataType x);
void LTErase(LTNode* pos);

void LTDestory(LTNode* phead);