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

//管理数据--增删查改
void SLInit(SL* ps);
void SLDestory(SL* ps);
void SLCheckCapacity(SL* ps);
void SLPrint(SL* ps);

//尾插尾删 头插头删
void SLPushBack(SL* ps,SLDateType n);
void SLPopBack(SL* ps);
void SLPushFront(SL* ps,SLDateType n);
void SLPopFront(SL* ps);

//在pos位置插入n
void SLInsert(SL* ps, int pos, SLDateType n);
//删除pos位置的值
void SLErase(SL* ps, int pos);