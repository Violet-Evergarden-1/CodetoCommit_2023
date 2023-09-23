#define _CRT_SECURE_NO_WARNINGS 1
#include"Slist.h"

SLTNode* BuySLTNode(SLTDateType x)
{
	SLTNode* newnode=(SLTNode*)malloc(sizeof(SLTNode));
	if (newnode == NULL)
	{
		perror("malloc fail");
		exit(-1);
	}
	newnode->data = x;
	newnode->next = NULL;

	return newnode;
}

void SLTPrint(SLTNode* phead)
{
	SLTNode* cur = phead;
	while (cur)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}

void SLTPushBack(SLTNode** pphead, SLTDateType x)
{
	assert(pphead);

	SLTNode* newnode= BuySLTNode(x);
	if (*pphead == NULL)//Ϊ��
	{
		//// �ı�Ľṹ���ָ�룬����Ҫ�ö���ָ��
		*pphead = newnode;
	}
	else//��Ϊ��
	{
		SLTNode* tail = *pphead;
		while (tail->next)
		{
			tail = tail->next;
		}
		// �ı�Ľṹ�壬�ýṹ���ָ�뼴��
		tail->next = newnode;
	}
	
}

void SLTPushFront(SLTNode** pphead, SLTDateType x) 
{
	assert(pphead);

	SLTNode* newnode = BuySLTNode(x);

	newnode->next = *pphead;
	*pphead = newnode;
}

void SLTPopBack(SLTNode** pphead)
{
	assert(pphead);
	assert(*pphead);

	//ֻ��һ��Ԫ��
	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}

	//����һ��Ԫ��
	else
	{
		SLTNode* tail = *pphead;
		while (tail->next->next)
		{
			tail = tail->next;
		}
		free(tail->next);
		tail->next = NULL;
	}
}

void SLTPopFront(SLTNode** pphead)
{
	assert(pphead);
	assert(*pphead);

	//�����µĵ�һ��Ԫ�صĵ�ַ
	SLTNode* newSLTNode = (*pphead)->next;
	free(*pphead);
	*pphead = newSLTNode;
}

SLTNode* SLTFind(SLTNode* phead, SLTDateType x)
{
	SLTNode* cur = phead;
	while (cur)
	{
		if (cur->data == x)   
		{
			printf("�ҵ���\n");
			return cur;
		}
		cur = cur->next;
	}
	printf("û�ҵ�\n");
	return NULL;
}

void SLTInsert(SLTNode** pphead,SLTNode* pos, SLTDateType x)
{
	assert(pphead);
	assert(pos);

	if (pos == *pphead)
	{
		SLTPushFront(pphead, x);
	}
	else
	{
		SLTNode* prev = *pphead;
		while (prev->next != pos)
		{
			prev = prev->next;
		}
		SLTNode* newnode = BuySLTNode(x);
		newnode->next = pos;
		prev->next = newnode;
	}
}

void SLTInsertAfter(SLTNode* pos, SLTDateType x)
{
	assert(pos);

	SLTNode* newnode = BuySLTNode(x);
	newnode->next = pos->next;
	pos->next = newnode;
}

void SLTErease(SLTNode** pphead, SLTNode* pos)
{
	assert(pphead);
	assert(pos);

	if (*pphead == pos)
	{
		SLTPopFront(pphead);
	}
	else
	{
		SLTNode* prev = *pphead;
		while (prev->next != pos)
		{
			prev = prev->next;
		}
		prev->next = pos->next;
		free(pos);
		pos = NULL;
	}
}

void SLTEreaseAfter(SLTNode* pos)
{
	assert(pos);
	//���pos�Ƿ�Ϊβ�ڵ�
	assert(pos->next);

	SLTNode* pnext = pos->next;
	pos->next = pnext->next;
	free(pnext);
	pnext = NULL;
}

void SLTDestroy(SLTNode** pphead)
{
	assert(pphead);

	SLTNode* pNext = (*pphead)->next;
	SLTNode* cur = *pphead;
	while (cur)
	{
		pNext = cur->next;
		free(cur);
		cur = pNext;
	}
	*pphead = NULL;
}