#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>
#include<string.h>
#include<time.h>


typedef int HPDataType;

typedef struct Heap
{
	HPDataType* a;
	int size;
	int capacity;
}Heap;


void HeapInit(Heap* php);
// �ѵĹ���
void HeapCreate(Heap* hp, int* a, int n);
// �ѵ�����
void HeapDestory(Heap* php);

//���ϵ���
void AdjustUp(HPDataType* a, int child);
//���µ���
void AdjustDown(HPDataType* a, int n, int parent);

// �ѵĲ���
void HeapPush(Heap* php, HPDataType x);
// �ѵ�ɾ��
void HeapPop(Heap* php);
// ȡ�Ѷ�������
HPDataType HeapTop(Heap* php);
// �ѵ����ݸ���
int HeapSize(Heap* php);
// �ѵ��п�
bool HeapEmpty(Heap* php);