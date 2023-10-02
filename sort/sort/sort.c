#include"sort.h"

void Swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

// 插入排序
void InsertSort(int* a, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int end = i;
		int tmp = a[i + 1];
		while(end >= 0)
		{
			if (a[end] > tmp)
				a[end + 1] = a[end];
			else
				break;
			end--;
		}
		a[end + 1] = tmp;	
	}
}

// 希尔排序
void ShellSort(int* a, int n)
{
	int gap = n;
	while (gap > 1)
	{
		gap = gap / 3 + 1;
		for (int i = 0; i < n - gap; i++)
		{
			int end = i;
			int tmp = a[i + gap];
			while (end >= 0)
			{
				if (a[end] > tmp)
					a[end + gap] = a[end];
				else
					break;
				end -= gap;
			}
			a[end + gap] = tmp;
		}
	}
}

// 选择排序
void SelectSort(int* a, int n)
{
	int begin = 0, end = n - 1;
	while (begin < end)
	{
		int mini = begin, maxi = begin;
		for (int i = begin; i <= end; i++)
		{
			if (a[i] < a[mini])
				mini = i;
			if (a[i] > a[maxi])
				maxi = i;
		}
		Swap(&a[begin], &a[mini]);
		if (maxi == begin)
			maxi = mini;
		Swap(&a[maxi], &a[end]);
		begin++;
		end--;
	}
}

// 堆排序
void AdjustDwon(int* a, int n, int root)
{
	int parent = root;
	int child = parent * 2 + 1;
	if (child + 1 < n && a[child + 1] > a[child])
		child = child + 1;
	while (child < n)
	{
		if (a[parent] < a[child])
			Swap(&a[parent], &a[child]);
		parent = child;
		child = parent * 2 + 1;
	}
}

void HeapSort(int* a, int n)
{
	for (int i = ((n - 1) - 1) / 2; i >= 0; i--)
		AdjustDwon(a, n, i);
	
	int end = n;
	while(end--)
	{
		//交换首尾，将根（最大的数）放在最后
		Swap(&a[0], &a[end]);

		//把新的根向下调整，找到下一个最大的数
		AdjustDwon(a, end, 0);
	}
}

// 冒泡排序
void BubbleSort(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		int flag = 1;

		//j要和后一个元素比较，防止越界j+1<n，
		//又因为循环i次能确定最后i个数据的位置，可以让j+1<n-i
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				flag = 0;
				Swap(&a[j], &a[j + 1]);
			}
		}
		if (flag = 1)
			break;
	}
}

// 快速排序递归实现
// 快速排序hoare版本
int PartSort1(int* a, int left, int right);
// 快速排序挖坑法
int PartSort2(int* a, int left, int right);
// 快速排序前后指针法
int PartSort3(int* a, int left, int right);
void QuickSort(int* a, int left, int right);

// 快速排序 非递归实现
void QuickSortNonR(int* a, int left, int right);

// 归并排序递归实现
void MergeSort(int* a, int n);
// 归并排序非递归实现
void MergeSortNonR(int* a, int n);

// 计数排序
void CountSort(int* a, int n);