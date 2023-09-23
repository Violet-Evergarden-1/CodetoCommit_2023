#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"

void SLInit(SL* ps)
{
	ps->a = (SLDateType*)malloc(sizeof(SLDateType) * 4);
	if (ps->a == NULL)
	{
		perror("malloc failed");
		exit (-1);
	}
	ps->size = 0;
	ps->capacity = 4;
}

void SLDestory(SL* ps)
{
	free(ps->a);
	ps->a = NULL;
	ps->size = 0;
	ps->capacity = 0;
}

void SLPrint(SL* ps)
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}

void SLPushBack(SL* ps, SLDateType n)
{
	SLCheckCapacity(ps);
	ps->a[ps->size] = n;
	ps->size++;
}

void SLCheckCapacity(SL* ps)
{
	if (ps->size == ps->capacity)
	{
		SLDateType* ptr = (SLDateType*)realloc(ps->a, ps->capacity * 2 * (sizeof(SLDateType)));
		if (ptr == NULL)
		{
			perror("realloc failed");
			exit(-1);
		}
		ps->a = ptr;
		ps->capacity *= 2;
	}
}

void SLPopBack(SL* ps)
{
	//ÎÂÈá¼ì²é
	//if (ps->size <= 0)
	//	return;

	//±©Á¦¼ì²é
	assert(ps->size > 0);

	ps->size--;
}

void SLPushFront(SL* ps,SLDateType n)
{
	SLCheckCapacity(ps);
	
	int i = ps->size;
	for (; i > 0; i--)
	{
		ps->a[i] = ps->a[i - 1];
	}
	ps->a[0] = n;
	ps->size++;
}

void SLPopFront(SL* ps) 
{
	int i = 0;
	for (i = 0; i < ps->size-1; i++)
	{
		ps->a[i] = ps->a[i + 1];
	}
	ps->size--;
}

void SLInsert(SL* ps, int pos, SLDateType n)
{
	assert(pos >= 0 && pos <= ps->size);
	SLCheckCapacity(ps);

	int i = ps->size;
	for (; i > pos; i--)
	{
		ps->a[i] = ps->a[i - 1];
	}
	ps->a[pos] = n;
	ps->size++;
}

void SLErase(SL* ps, int pos)
{
	assert(pos >= 0 && pos < ps->size);
	int i = pos;
	for (i = pos; i < ps->size - 1; i++)
	{
		ps->a[i] = ps->a[i + 1];
	}
	ps->size--;
}