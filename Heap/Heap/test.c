#include"heap.h"

//void Test1()
//{
//	int a[] = { 65,100,70,32,50,60 };
//	Heap hp;
//	HeapInit(&hp);
//	for (int i = 0; i < sizeof(a)/sizeof(int); i++)
//	{
//		HeapPush(&hp, a[i]);
//	}
//
//	int k = 5;
//	while (!HeapEmpty(&hp) && k--)
//	{
//		printf("%d ", HeapTop(&hp));
//		HeapPop(&hp);
//	}
//
//	HeapDestroy(&hp);
//
//	return 0;
//}

void CreatNData()
{
	int n = 10000;
	srand(time(0));
	const char* file = "data.txt";
	FILE* fin = fopen(file, "w");
	if (fin == NULL)
	{
		perror("fopen failed");
		exit(-1);
	}

	for (size_t i = 0; i < n; i++)
	{
		int x = rand() % 10000;
		fprintf(fin, "%d\n", x);
	}

	fclose(fin);
}

void PrintTopK(int k)
{
	FILE* fout = fopen("data.txt","r");
	if (fout == NULL)
	{
		perror("fopen failed");
		return;
	}

	int* minheap = (int*)malloc(sizeof(int) * k);
	if (minheap == NULL)
	{
		perror("malloc failed");
		return;
	}

	//从文件中读取k个数据到数组
	for (int i = 0; i < k; i++)
	{
		fscanf(fout, "%d", &minheap[i]);
	}

	//建一个k大小的小堆
	for (int i =(k-2)/2; i >=0; i--)
	{
		AdjustDown(minheap, k, i);
	}

	//遍历文件，大于根，替换后向下调整
	int a = 0;
	while (fscanf(fout, "%d", &a) != EOF)
	{
		if (a > minheap[0])
		{
			minheap[0] = a;
			AdjustDown(minheap, k, 0);
		}
	}

	for (int i = 0; i < k; i++)
	{
		printf("%d ", minheap[i]);
	}
	printf("\n");

	fclose(fout);
}


void Test2()
{
	//CreatNData();
	int k = 10;
	PrintTopK(k);
}

void HeapSort(int* a, int n)
{
	for (int i = (n - 2) / 2; i >= 0; i--)
	{
		AdjustDown(a, n, i);
	}

	int end = n;
	while (--end)
	{
		int tmp = a[0];
		a[0] = a[end];
		a[end] = tmp;
		AdjustDown(a, end, 0);
	}
	
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}

void Test3()
{
	//int a[] = { 1,5,6,5,9,643,35,79,45,78,47,234,890 };
	int a[] = { 65,100,70,32,50,60 };
	//int a[] = { 2,3,5,7,4,6,8,65,100,70,32,50,60 };
	//int a[] = { 70, 65, 100, 32, 50, 60 };
	int n = sizeof(a) / sizeof(a[0]);
	HeapSort(a, n);
}



int main()
{
	Test3();

	return 0;
}