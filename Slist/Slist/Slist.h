#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int SLTDateType;
typedef struct SListNode
{
	SLTDateType data;
	struct SListNode* next;
}SLTNode;

//动态申请一个节点
SLTNode* BuySLTNode(SLTDateType x);

//单链表打印
void SLTPrint(SLTNode* phead);

// 单链表尾插、头插
void SLTPushBack(SLTNode** pphead, SLTDateType x);
void SLTPushFront(SLTNode** pphead, SLTDateType x);

//单链表尾删、头删
void SLTPopBack(SLTNode** pphead);
void SLTPopFront(SLTNode** pphead);

// 单链表查找
SLTNode* SLTFind(SLTNode* phead, SLTDateType x);

//pos位置前、后插入x
void SLTInsert(SLTNode** pphead, SLTNode* pos,SLTDateType x);
void SLTInsertAfter(SLTNode* pos, SLTDateType x);

//删除pos位置、pos位置后的值
void SLTErease(SLTNode** pphead, SLTNode* pos);
void SLTEreaseAfter(SLTNode* pos);

//单链表销毁
void SLTDestroy(SLTNode**  pphead);