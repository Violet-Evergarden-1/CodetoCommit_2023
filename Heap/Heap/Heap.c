#include"heap.h"

void Swap(HPDataType* p1, HPDataType* p2)
{
	HPDataType tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

//���ϵ���
void AdjustUp(HPDataType* a, int child)
{
	int parent = (child - 1) / 2;
	while (child > 0)
	{
		if (a[child] < a[parent])
		{
			Swap(&a[child], &a[parent]);
			child = parent;
			parent = (child - 1) / 2;
		}
		else
			break;
	}
}

//���µ���
void AdjustDown(HPDataType* a, int n, int parent)
{
	int child = parent * 2 + 1;
	while (child < n)
	{
		// �ҳ�С���Ǹ�����
		if (child + 1 < n && a[child + 1] < a[child])
		{
			child ++;
		}
		if (a[child] < a[parent])
		{
			Swap(&a[child], &a[parent]);
			// �������µ���
			parent = child;
			child = parent * 2 + 1;
		}
		else
			break;
	}
}

void HeapInit(Heap* php)
{
	assert(php);

	php->a = NULL;
	php->capacity = 0;
	php->size = 0;
}

// �ѵĹ���
void HeapCreate(Heap* php, int* a, int n)
{
	assert(php);
	assert(a);

	php->a = (HPDataType*)malloc(sizeof(HPDataType) * n);
	if (php->a == NULL)
	{
		perror("malloc failed");
		exit(-1);
	}
	php->capacity = n;
	php->size = n;

	memcpy(php->a, a, sizeof(HPDataType) * n);

	// ���µ������ѣ� �����һ����Ҷ�ӽڵ㿪ʼ���е���
	// ���һ����Ҷ�ӽڵ㣬���չ��� �����һ��λ������ - 1�� / 2
	// ���һ��λ�������� n - 1
	// �����һ����Ҷ�ӽڵ�λ�ã� (n - 2) / 2
	for (int i = (n - 2) / 2; i >= 0; i--)
	{
		AdjustDown(php->a, n, i);
	}
} 

// �ѵ�����
void HeapDestory(Heap* php)
{
	assert(php);

	free(php->a);
	php->capacity = 0;
	php->size = 0;
}

// �ѵĲ���
void HeapPush(Heap* php, HPDataType x)
{
	assert(php);

	//�������
	if (php->size == php->capacity)
	{
		int newCapacity = (php->capacity = 0 ? 4 : php->capacity * 2);
		HPDataType* tmp = realloc(php->a, sizeof(HPDataType) * newCapacity);
		if (tmp == NULL)
		{
			perror("realloc failed");
			exit(-1);
		}

		php->a = tmp;
		php->capacity = newCapacity;
	}

	//β��
	php->a[php->size] = x;
	php->size++;

	//���ϵ���
	AdjustUp(php->a, php->size - 1);
}



// �ѵ�ɾ��
void HeapPop(Heap* php)
{
	assert(php);
	assert(php->size > 0);

	//����
	Swap(&php->a[0], &php->a[php->size - 1]);
	php->size--;

	//���µ���
	AdjustDown(php->a, php->size, 0);
}

// ȡ�Ѷ�������
HPDataType HeapTop(Heap* php)
{
	assert(php);
	assert(php->size > 0);

	return php->a[0];
}

// �ѵ����ݸ���
int HeapSize(Heap* php)
{
	return php->size;
}

// �ѵ��п�
bool HeapEmpty(Heap* php)
{
	assert(php);

	return php->size == 0;
}