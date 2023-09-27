#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>
#include<string.h>

typedef int STDataType;
typedef struct Stack
{
	STDataType* a;
	int top;
	int capacity;
}ST;

void STInit(ST* ps);
void STDestory(ST* ps);
void STPush(ST* ps, STDataType x);
void STPop(ST* ps);
STDataType STTop(ST* ps);
int STSize(ST* ps);
bool STEmpty(ST* ps);

void STInit(ST* ps)
{
	assert(ps);

	ps->a = NULL;
	ps->top = 0;
	ps->capacity = 0;
}

void STDestory(ST* ps)
{
	assert(ps);

	free(ps->a);
	ps->a = NULL;
	ps->top = 0;
	ps->capacity = 0;
}

void STPush(ST* ps, STDataType x)
{
	assert(ps);

	if (ps->top == ps->capacity)
	{
		int newCapacity = ps->capacity == 0 ? 4 : 2 * ps->capacity;
		STDataType* tmp = (STDataType*)realloc(ps->a, sizeof(STDataType) * newCapacity);
		if (tmp == NULL)
		{
			perror("realloc failed");
			exit(-1);
		}

		ps->a = tmp;
		ps->capacity = newCapacity;
	}

	ps->a[ps->top] = x;
	ps->top++;
}

void STPop(ST* ps)
{
	assert(ps);
	//验证栈不为空
	assert(ps->top != 0);

	ps->top--;
}

STDataType STTop(ST* ps)
{
	assert(ps);
	//验证栈不为空
	assert(ps->top != 0);

	return ps->a[ps->top - 1];
}

int STSize(ST* ps)
{
	assert(ps);

	return ps->top;
}

bool STEmpty(ST* ps)
{
	assert(ps);

	return ps->top == 0;
}

void Swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void print(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d", a[i]);
	}
}

//挖坑
int Partsort2(int* a, int left, int right)
{
	int hole = left;
	//保存key值后，左边形成第一个坑
	int key = a[left];

	while (left < right)
	{
		//右边先走，找小，填到左边的坑，右边形成新的坑位
		while (left < right && a[right] >= key)
		{
			right--;
		}
		a[hole] = a[right];
		hole = right;

		//左边再走，找大，填到右边的坑，左边形成新的坑位
		while (left < right && a[left] <= key)
		{
			left++;
		}
		a[hole] = a[left];
		hole = left;
	}
	a[hole] = key;
	return hole;
}


//前后指针
int Patrsort3(int* a, int left, int right)
{
	int prev = left, cur = left + 1;
	int keyi = left;
	while (cur <= right)
	{
		if (a[cur] < a[keyi] && ++prev != cur)
		{
			Swap(&a[cur], &a[prev]);
		}
		cur++;
	}
	Swap(&a[prev], &a[keyi]);
	return prev;
}

// 冒泡排序
void BubbleSort(int* a, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int flag = 0;
		for (int j = 0; j < n - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				Swap(&a[j], &a[j + 1]);
				flag = 1;
			}
		}
		if (flag = 0)
			break;
	}
}

// 快速排序递归实现
//三数取中
int GetMidi(int* a, int left, int right)
{
	int mid = (left + right) / 2;
	if (a[mid] < a[left])
	{
		if (a[mid] > a[right])
			return mid;
		else if (a[left] < a[right])
			return left;
		else 
			return right;
	}
	else 
	{
		if (a[mid] < a[right])
			return mid;
		else if (a[right] < a[left])
			return left;
		else
			return right;
	}
}


// 快速排序hoare版本
int PartSort1(int* a, int left, int right)
{
	int midi = GetMidi(a, left, right);
	Swap(&a[left], &a[midi]);

	int keyi = left;
	while (left < right)
	{
		while (left < right && a[right] >= a[keyi])
			right--;

		while (left < right && a[left] <= a[keyi])
			left++;

		Swap(&a[left], &a[right]);
	}
	Swap(&a[keyi], &a[left]);
	return left;
}

// 快速排序挖坑法
int PartSort2(int* a, int left, int right)
{
	int midi = GetMidi(a, left, right);
	Swap(&a[left], &a[midi]);

	int hole = left;
	int key = a[left];
	while (left < right)
	{
		while (left < right && a[right] >= key)
			right--;
		//a[left] = a[right];
		a[hole] = a[right];
		hole = right;

		while (left < right && a[left] <= key)
			left++;
		//a[right] = a[left];
		a[hole] = a[left];
		hole = left;
	}
	a[left] = key;
	return left;
}

// 快速排序前后指针法
int PartSort3(int* a, int left, int right)
{
	int midi = GetMidi(a, left, right);
	Swap(&a[left], &a[midi]);  

	int keyi = left;
	int prev = left;
	int cur = left + 1;
	while (cur <= right)
	{
		if (a[cur] < a[keyi] && ++prev != cur)
			Swap(&a[cur], &a[prev]);
		cur++;
	}
	Swap(&a[prev], &a[keyi]);
	return prev;
}

void QuickSort(int* a, int begin, int end)
{
	if (begin > end)
		return;
	int keyi = PartSort1(a, begin, end);
	QuickSort(a, begin, keyi - 1);
	QuickSort(a, keyi + 1, end);
}

// 快速排序 非递归实现
void QuickSortNonR(int* a, int left, int right)
{
	ST st;
	STInit(&st);
	STPush(&st, right);
	STPush(&st, left);
	while (!STEmpty(&st))
	{
		left =  STTop(&st);
		STPop(&st);
		right = STTop(&st);
		STPop(&st);

		int keyi = PartSort3(a, left, right);
		
		if (right > keyi + 1)
		{
			STPush(&st, right);
			STPush(&st, keyi + 1);
		}
		if (keyi - 1 > left)
		{
			STPush(&st, keyi - 1);
			STPush(&st, left);
		}
	}
	STDestory(&st);
}



void _MergeSort(int* a, int* tmp, int begin, int end)
{
	if (begin >= end)
		return;

	int mid = (begin + end) / 2;
	// [begin, mid][mid+1, end]
	_MergeSort(a, tmp, begin, mid);
	_MergeSort(a, tmp, mid + 1, end);

	// 归并到tmp数据组，再拷贝回去
	// a->[begin, mid][mid+1, end]->tmp
	int begin1 = begin, end1 = mid;
	int begin2 = mid + 1, end2 = end;
	int index = begin;

	while (begin1 <= end1 && begin2 <= end2)
	{
		if (a[begin1] <= a[begin2])
			tmp[index++] = a[begin1++];
		else
			tmp[index++] = a[begin2++];
	}

	while (begin1 <= end1)
		tmp[index++] = a[begin1++];

	while (begin2 <= end2)
		tmp[index++] = a[begin2++];

	memcpy(a + begin, tmp + begin, sizeof(int) * (end - begin + 1));
}

// 归并排序递归实现
void MergeSort(int* a, int n)
{
	int* tmp = (int*)malloc(sizeof(int) * n);
	if (tmp == NULL)
	{
		perror("malloc failed");
		exit(-1);
	}
	_MergeSort(a, tmp, 0, n - 1);

	free(tmp);
}

// 归并排序非递归实现
void MergeSortNonR(int* a, int n)
{
	int* tmp = (int*)malloc(sizeof(int) * n);
	if (tmp == NULL)
	{
		perror("malloc failed");
		return;
	}

	int gap = 1;
	while (gap < n)
	{
		for (int i = 0; i < n; i += 2 * gap)
		{

			int begin1 = i, end1 = i + gap - 1;
			int begin2 = i + gap, end2 = i + 2 * gap - 1;
			int index = i;

			//if (end1 >= n||begin2 >= n)
			if (begin2 >= n)
				break;

			end2 >= n ? end2 = n - 1 : end2;


			while (begin1 <= end1 && begin2 <= end2)
			{
				if (a[begin1] < a[begin2])
				{
					tmp[index++] = a[begin1++];
				}
				else
					tmp[index++] = a[begin2++];
			}

			while (begin1 <= end1)
			{
				tmp[index++] = a[begin1++];
			}

			while (begin2 <= end2)
			{
				tmp[index++] = a[begin2++];
			}

			memcpy(a + i, tmp + i, sizeof(int) * (end2 - i + 1));
		}
		gap *= 2;
	}
	free(tmp);
}

int main()
{
	int a[] = { 0,4,7,2,8,0,8,6,4,7 };
	int sz = sizeof(a) / sizeof(a[0]);
	QuickSort(a, 0, sz - 1);
	print(a, sizeof(a) / sizeof(a[0]));

	printf("\n");

	int b[] = { 9,8,7,6,5,4,3,2,1,0 };
	sz = sizeof(b) / sizeof(b[0]);
	QuickSort(b, 0, sz - 1);
	print(b, sizeof(b) / sizeof(b[0]));

	return 0;
}