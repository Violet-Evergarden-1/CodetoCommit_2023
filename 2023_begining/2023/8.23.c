#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>


//用栈实现队列

//typedef int STDataType;
//typedef struct Stack
//{
//	STDataType* a;
//	int top;
//	int capacity;
//}ST;
//
//void STInit(ST* ps);
//void STDestory(ST* ps);
//void STPush(ST* ps, STDataType x);
//void STPop(ST* ps);
//STDataType STTop(ST* ps);
//int STSize(ST* ps);
//bool STEmpty(ST* ps);
//
//void STInit(ST* ps)
//{
//	assert(ps);
//
//	ps->a = NULL;
//	ps->top = 0;
//	ps->capacity = 0;
//}
//
//void STDestory(ST* ps)
//{
//	assert(ps);
//
//	free(ps->a);
//	ps->a = NULL;
//	ps->top = 0;
//	ps->capacity = 0;
//}
//
//void STPush(ST* ps, STDataType x)
//{
//	assert(ps);
//
//	if (ps->top == ps->capacity)
//	{
//		int newCapacity = ps->capacity == 0 ? 4 : 2 * ps->capacity;
//		STDataType* tmp = (STDataType*)realloc(ps->a, sizeof(STDataType) * newCapacity);
//		if (tmp == NULL)
//		{
//			perror("realloc failed");
//			exit(-1);
//		}
//
//		ps->a = tmp;
//		ps->capacity = newCapacity;
//	}
//
//	ps->a[ps->top] = x;
//	ps->top++;
//}
//
//void STPop(ST* ps)
//{
//	assert(ps);
//	//验证栈不为空
//	assert(ps->top != 0);
//
//	ps->top--;
//}
//
//STDataType STTop(ST* ps)
//{
//	assert(ps);
//	//验证栈不为空
//	assert(ps->top != 0);
//
//	return ps->a[ps->top - 1];
//}
//
//int STSize(ST* ps)
//{
//	assert(ps);
//
//	return ps->top;
//}
//
//bool STEmpty(ST* ps)
//{
//	assert(ps);
//
//	return ps->top == 0;
//}
//
//
//typedef struct 
//{
//	ST pushSt;
//	ST popSt;
//} MyQueue;
//
//
//MyQueue* myQueueCreate() 
//{
//	MyQueue* obj = (MyQueue*)malloc(sizeof(MyQueue));
//	STInit(&obj->popSt);
//	STInit(&obj->pushSt);
//
//	return obj;
//}
//
//void myQueuePush(MyQueue* obj, int x) 
//{
//	STPush(&obj->pushSt, x);
//}
//
//int myQueuePeek(MyQueue* obj)
//{
//	if (STEmpty(&obj->popSt))
//	{
//		while (!STEmpty(&obj->pushSt))
//		{
//			int top = STTop(&obj->pushSt);
//			STPop(&obj->pushSt);
//			STPush(&obj->popSt, top);
//		}
//	}
//	int top = STTop(&obj->popSt);
//
//	return top;
//}
//
//int myQueuePop(MyQueue* obj) 
//{
//	int top = myQueuePeek(obj);
//	STPop(&obj->popSt);
//
//	return top;
//}
//
//bool myQueueEmpty(MyQueue* obj) 
//{
//	return STEmpty(&obj->popSt) && STEmpty(&obj->pushSt);
//}
//
//void myQueueFree(MyQueue* obj) 
//{
//	STDestory(&obj->popSt);
//	STDestory(&obj->popSt);
//	free(obj);
//}
//
//int main()
//{
//	MyQueue* obj = myQueueCreate();
//	myQueuePush(obj, 1);
//	myQueuePush(obj, 2);
//	myQueuePush(obj, 3);
//	myQueuePush(obj, 4);
//	printf("%d\n", myQueuePop(obj));
//	printf("%d\n", myQueuePeek(obj));
//
//	myQueueFree(obj);
//
//	return 0;
//}


//设计循环队列

//typedef struct {
//	int* a;
//	int front;
//	int rear;
//	int k;
//} MyCircularQueue;
//
//
//MyCircularQueue* myCircularQueueCreate(int k) {
//	MyCircularQueue* obj = (MyCircularQueue*)malloc(sizeof(MyCircularQueue));
//
//	//多开一个空间，区分空和满（front==rear为空、front==rear+1为满）
//	obj->a = (int*)malloc(sizeof(int)*(k+1));
//	obj->front = 0;
//	obj->rear = 0;
//	obj->k = k;
//
//	return obj;
//}
//
//bool myCircularQueueIsEmpty(MyCircularQueue* obj) {
//	return obj->front == obj->rear;
//}
//
//bool myCircularQueueIsFull(MyCircularQueue* obj) {
//	return obj->front == (obj->rear + 1) % (obj->k + 1);
//}
//
//bool myCircularQueueEnQueue(MyCircularQueue* obj, int value) {
//	if (myCircularQueueIsFull(obj))
//		return false;
//	else
//	{
//		obj->a[obj->rear] = value;
//		obj->rear++;
//		obj->rear %= (obj->k + 1);
//
//		return true;
//	}
//}
//
//bool myCircularQueueDeQueue(MyCircularQueue* obj) {
//	if (myCircularQueueIsEmpty(obj))
//		return false;
//	else
//	{
//		obj->front++;
//		obj->front %= (obj->k + 1);
//
//		return true;
//	}
//}
//
//int myCircularQueueFront(MyCircularQueue* obj) {
//	if (myCircularQueueIsEmpty(obj))
//		return -1;
//	return obj->a[obj->front];
//}
//
//int myCircularQueueRear(MyCircularQueue* obj) {
//	if (myCircularQueueIsEmpty(obj))
//		return -1;
//
//	//返回rear前一个下标对应的值，rear==0时，通过+k在取余k+1，使rear==队尾下标，
//	return obj->a[(obj->rear + obj->k) % (obj->k + 1)];
//}
//
//void myCircularQueueFree(MyCircularQueue* obj) {
//	free(obj->a);
//	free(obj);
//}
//
//int main()
//{
//	MyCircularQueue* obj = myCircularQueueCreate(3); // 设置长度为 3
//	myCircularQueueEnQueue(obj,1);  // 返回 true
//	myCircularQueueEnQueue(obj,2);  // 返回 true
//	myCircularQueueEnQueue(obj,3);  // 返回 true
//	myCircularQueueEnQueue(obj,10);  // 返回 false，队列已满
//	printf("%d\n",myCircularQueueRear(obj));  // 返回 3
//	myCircularQueueIsFull(obj);  // 返回 true
//	myCircularQueueDeQueue(obj);  // 返回 true
//	printf("%d\n", myCircularQueueEnQueue(obj, 4));  // 返回 true
//	myCircularQueueRear(obj);  // 返回 4
//
//	return 0;
//}

//int main()
//{
//	int* a = NULL;
//	a = (int*)malloc(sizeof(int) * 4);
//	a[0] = 0;
//	a[1] = 1;
//	a[2] = 2;
//	a[3] = 3;
//	printf("%d", a[3]);
//
//	free(a);
//	return 0;
//}