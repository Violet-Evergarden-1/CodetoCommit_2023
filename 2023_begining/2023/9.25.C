#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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
	int key = a[left];
	while (cur <= right)
	{
		if (a[cur] < key && ++prev != cur)
		{
			Swap(&a[cur], &a[prev]);
		}
		cur++;
	}
	Swap(&a[prev], &key);
	return prev;
}

// 冒泡排序
void BubbleSort(int* a, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int flag = 0;
		int j = 0;
		for (j = 0; j < n - 1; j++)
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

// 快速排序 非递归实现
void QuickSortNonR(int* a, int left, int right);

void QuickSort(int* a, int begin, int end)
{
	if (begin > end)
		return;
	int keyi = PartSort3(a, begin, end);
	QuickSort(a, begin, keyi - 1);
	QuickSort(a, keyi + 1, end);
}

int main()
{
	int a[] = { 5,3,4,5,2,4,1,9,7,5,6 };
	int sz = sizeof(a) / sizeof(a[0]);
	QuickSort(a, 0, sz - 1);
	print(a, sizeof(a) / sizeof(a[0]));

	return 0;
}