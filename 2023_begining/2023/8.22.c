#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdbool.h>
#include<assert.h>
#include<stdlib.h>

//typedef int QDataType;
//typedef struct QueueNode
//{
//	struct QueneNode* next;
//	QDataType data;
//}QNode;
//
//typedef struct Queue
//{
//	QNode* head;
//	QNode* tail;
//	int size;
//}Que;
//
//void QueueInit(Que* pq)
//{
//	assert(pq);
//
//	pq->head = NULL;
//	pq->tail = NULL;
//	pq->size = 0;
//}
//
//void QueueDestroy(Que* pq)
//{
//	assert(pq);
//
//	QNode* cur = pq->head;
//	while (cur)
//	{
//		QNode* next = cur->next;
//		free(cur);
//		cur = next;
//	}
//
//	pq->head = NULL;
//	pq->tail = NULL;
//	pq->size = 0;
//}
//
//bool QueueEmpty(Que* pq)
//{
//	assert(pq);
//
//	return pq->head == NULL;
//}
//
//void QueuePush(Que* pq, QDataType x)
//{
//	assert(pq);
//
//	QNode* newnode = (QNode*)malloc(sizeof(QNode));
//	if (newnode == NULL)
//	{
//		perror("malloc failed");
//		exit(-1);
//	}
//
//	newnode->data = x;
//	newnode->next = NULL;
//
//	if (pq->head == NULL)
//	{
//		pq->head = pq->tail = newnode;
//	}
//	else
//	{
//		pq->tail->next = newnode;
//		pq->tail = newnode;
//	}
//
//	pq->size++;
//}
//
//void QueuePop(Que* pq)
//{
//	assert(pq);
//	assert(!QueueEmpty(pq));
//
//	QNode* next = pq->head->next;
//	free(pq->head);
//	pq->head = next;
//	if (pq->head == NULL)
//		pq->tail = NULL;
//
//	pq->size--;
//}
//
//QDataType QueueFront(Que* pq)
//{
//	assert(pq);
//	assert(!QueueEmpty(pq));
//
//	return pq->head->data;
//}
//
//QDataType QueueBack(Que* pq)
//{
//	assert(pq);
//	assert(!QueueEmpty(pq));
//
//	return pq->tail->data;
//}
//
//
//int QueueSize(Que* pq)
//{
//	assert(pq);
//
//	return pq->size;
//}
//
//typedef struct 
//{
//	Que q1;
//	Que q2;
//} MyStack;
//
//
//MyStack* myStackCreate() 
//{
//	//���ú�������ʹ��malloc����СΪ�����������еĿռ�
//	MyStack* pst = (MyStack*)malloc(sizeof(MyStack));
//
//	//�ֱ��ʼ��
//	QueueInit(&pst->q1);
//	QueueInit(&pst->q2);
//
//	return pst;
//}
//
//void myStackPush(MyStack* obj, int x) 
//{
//	//��������push����Ϊ�յĶ����У����ݴ���һ�������У�
//	if (!QueueEmpty(&obj->q1))
//		QueuePush(&obj->q1, x);
//	else
//		QueuePush(&obj->q2, x);
//}
//
//int myStackPop(MyStack* obj) 
//{
//	Que* empty = &obj->q1;
//	Que* Nempty = &obj->q2;
//	if (!QueueEmpty(&obj->q1))
//	{
//		empty = &obj->q2;
//		Nempty = &obj->q1;
//	}
//
//	//popʱ���ȰѲ�Ϊ�ն����г����һ������push���ն����У���pop
//	while (QueueSize(Nempty) > 1)
//	{
//		QueuePush(empty, QueueFront(Nempty));
//		QueuePop(Nempty);
//	}
//
//	//����pop֮ǰ��Ϊ�ն����е�Ψһһ������
//	int top = QueueFront(Nempty);
//	QueuePop(Nempty);
//
//	return top;
//}
//
//int myStackTop(MyStack* obj) 
//
//{
//	//1.top�󱣴���push
//	//int top=myStackPop(obj);
//	//myStackPush(obj, top);
//
//	//return top;
//
//	//2.�ҷǿն��з���Back
//	if (!QueueEmpty(&obj->q1))
//		return QueueBack(&obj->q1);
//	else
//		return QueueBack(&obj->q2);
//}
//
//bool myStackEmpty(MyStack* obj) 
//{
//	return QueueEmpty(&obj->q1) && QueueEmpty(&obj->q2);
//}
//
//void myStackFree(MyStack* obj) 
//{
//	QueueDestroy(&obj->q1);
//	QueueDestroy(&obj->q2);
//
//	free(obj);
//}
//int main()
//{
//	MyStack* obj = myStackCreate();
//	myStackPush(obj, 1);
//	myStackPush(obj, 2);
//	myStackPush(obj, 3);
//	myStackPush(obj, 4);
//
//
//	int param_2 = myStackPop(obj);
//
//	int param_3 = myStackTop(obj);
//
//	bool param_4 = myStackEmpty(obj);
//
//	myStackFree(obj);
//
//	return 0;
//}