#include"heap.h"

void Swap(HPDataType* p1, HPDataType* p2)
{
	HPDataType tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

//向上调整
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

//向下调整
void AdjustDown(HPDataType* a, int n, int parent)
{
	int child = parent * 2 + 1;
	while (child < n)
	{
		// 找出小的那个孩子
		if (child + 1 < n && a[child + 1] < a[child])
		{
			child ++;
		}
		if (a[child] < a[parent])
		{
			Swap(&a[child], &a[parent]);
			// 继续向下调整
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

// 堆的构建
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

	// 向下调整建堆： 从最后一个非叶子节点开始进行调整
	// 最后一个非叶子节点，按照规则： （最后一个位置索引 - 1） / 2
	// 最后一个位置索引： n - 1
	// 故最后一个非叶子节点位置： (n - 2) / 2
	for (int i = (n - 2) / 2; i >= 0; i--)
	{
		AdjustDown(php->a, n, i);
	}
} 

// 堆的销毁
void HeapDestory(Heap* php)
{
	assert(php);

	free(php->a);
	php->capacity = 0;
	php->size = 0;
}

// 堆的插入
void HeapPush(Heap* php, HPDataType x)
{
	assert(php);

	//检查容量
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

	//尾插
	php->a[php->size] = x;
	php->size++;

	//向上调整
	AdjustUp(php->a, php->size - 1);
}



// 堆的删除
void HeapPop(Heap* php)
{
	assert(php);
	assert(php->size > 0);

	//交换
	Swap(&php->a[0], &php->a[php->size - 1]);
	php->size--;

	//向下调整
	AdjustDown(php->a, php->size, 0);
}

// 取堆顶的数据
HPDataType HeapTop(Heap* php)
{
	assert(php);
	assert(php->size > 0);

	return php->a[0];
}

// 堆的数据个数
int HeapSize(Heap* php)
{
	return php->size;
}

// 堆的判空
bool HeapEmpty(Heap* php)
{
	assert(php);

	return php->size == 0;
}