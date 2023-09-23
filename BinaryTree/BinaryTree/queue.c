#include"BinaryTree.h"

void QueueInit(Que* pq)
{
	assert(pq);

	pq->head = NULL;
	pq->tail = NULL;
	pq->size = 0;
}

void QueueDestroy(Que* pq)
{
	assert(pq);

	QNode* cur = pq->head;
	while (cur)
	{
		QNode* next = cur->next;
		free(cur);
		cur = next;
	}

	pq->head = NULL;
	pq->tail = NULL;
	pq->size = 0;
}

void QueuePush(Que* pq, QDataType x)
{
	assert(pq);

	QNode* newnode = (QNode*)malloc(sizeof(QNode));
	if (newnode == NULL)
	{
		perror("malloc failed");
		exit(-1);
	}

	newnode->data = x;
	newnode->next = NULL;

	if (pq->head == NULL)
	{
		pq->head = pq->tail = newnode;
	}
	else
	{
		pq->tail->next = newnode;
		pq->tail = newnode;
	}

	pq->size++;
}

void QueuePop(Que* pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));

	QNode* next = pq->head->next;
	free(pq->head);
	pq->head = next;
	if (pq->head == NULL)
		pq->tail = NULL;

	pq->size--;
}

QDataType QueueFront(Que* pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));

	return pq->head->data;
}

QDataType QueueBack(Que* pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));

	return pq->tail->data;
}

bool QueueEmpty(Que* pq)
{
	assert(pq);

	return pq->head == NULL;
}

int QueueSize(Que* pq)
{
	assert(pq);

	return pq->size;
}
