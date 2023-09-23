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

//��̬����һ���ڵ�
SLTNode* BuySLTNode(SLTDateType x);

//�������ӡ
void SLTPrint(SLTNode* phead);

// ������β�塢ͷ��
void SLTPushBack(SLTNode** pphead, SLTDateType x);
void SLTPushFront(SLTNode** pphead, SLTDateType x);

//������βɾ��ͷɾ
void SLTPopBack(SLTNode** pphead);
void SLTPopFront(SLTNode** pphead);

// ���������
SLTNode* SLTFind(SLTNode* phead, SLTDateType x);

//posλ��ǰ�������x
void SLTInsert(SLTNode** pphead, SLTNode* pos,SLTDateType x);
void SLTInsertAfter(SLTNode* pos, SLTDateType x);

//ɾ��posλ�á�posλ�ú��ֵ
void SLTErease(SLTNode** pphead, SLTNode* pos);
void SLTEreaseAfter(SLTNode* pos);

//����������
void SLTDestroy(SLTNode**  pphead);