#include"sort.h"
#include"Stack.h"

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
	while (child < n)
	{
		if (child + 1 < n && a[child + 1] > a[child])
			child = child + 1;

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
		if (flag == 1)
			break;
	}
}

// 快速排序递归实现

//三数取中
int GetMid(int* a, int left, int right)
{
	int mid = (left + right) / 2;
	if (a[mid] < a[left])
	{
		if (a[left] < a[right])
			return left;
		else if (a[right] < a[mid])
			return mid;
		else 
			return right;
	}
	else
	{
		if (a[left] > a[right])
			return left;
		else if (a[right] > a[mid])
			return mid;
		else 
			return right;
	}
}

// 快速排序hoare版本
int PartSort1(int* a, int left, int right)
{
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
	int key = a[left];
	int hole = left;
	while (left < right)
	{
		while (left < right && a[right] >= key)
		{
			right--;
		}
		a[hole] = a[right];
		hole = right;
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
// 快速排序前后指针法
int PartSort3(int* a, int left, int right)
{
	int prev = left, cur = left + 1;
	int keyi = left;
	while (cur <= right)
	{
		if (a[cur] < a[keyi] && prev++ != cur)
			Swap(&a[cur], &a[prev]);
		cur++;
	}
	Swap(&a[prev], &a[keyi]);
	return prev;
}

void QuickSort(int* a, int left, int right)
{
	if (left >= right)
		return;

	//区间内元素个数 <= 10，调用直接插入排序
	if (right - left <= 10)
	{
		//注意：起始地址是a + begin,不是a
		InsertSort(a+left, right + 1);
	}

	int keyi = PartSort3(a,left,right);
	QuickSort(a, left, keyi - 1);
	QuickSort(a, keyi + 1,right);
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
		left = STTop(&st);
		STPop(&st);
		right = STTop(&st);
		STPop(&st);

		int keyi = PartSort3(a, left, right);

		if (right > keyi + 1)
		{
			STPush(&st, right);
			STPush(&st, keyi + 1);
		}
		if (left < keyi - 1)
		{
			STPush(&st, keyi - 1);
			STPush(&st, left);
		}
	}
	STDestory(&st);
}

void _MergeSort(int* a,int*tmp, int left, int right)
{
	if (left >= right)
		return;

	int mid = (left + right) / 2;
	_MergeSort(a, tmp, left, mid);
	_MergeSort(a, tmp, mid + 1, right);

	int begin1 = left, end1 = mid;
	int begin2 = mid+1, end2 = right;
	int index = left;

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

	memcpy(a + left, tmp + left, sizeof(int) * (right - left + 1));
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

	_MergeSort(a, tmp, 0, n-1);
}
// 归并排序非递归实现
void MergeSortNonR(int* a, int n);

// 计数排序
void CountSort(int* a, int n);