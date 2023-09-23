#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

typedef int SLDateType;

typedef struct SeqList
{
	SLDateType* a;
	int size;
	int capacity;
}SL;

//��������--��ɾ���
void SLInit(SL* ps);
void SLDestory(SL* ps);
void SLCheckCapacity(SL* ps);
void SLPrint(SL* ps);

//β��βɾ ͷ��ͷɾ
void SLPushBack(SL* ps,SLDateType n);
void SLPopBack(SL* ps);
void SLPushFront(SL* ps,SLDateType n);
void SLPopFront(SL* ps);

//��posλ�ò���n
void SLInsert(SL* ps, int pos, SLDateType n);
//ɾ��posλ�õ�ֵ
void SLErase(SL* ps, int pos);