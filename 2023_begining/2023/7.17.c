#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//int main()
//{
//	int aa[2][5] = { 10,9,8,7,6,5,4,3,2,1 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}

//练习使用库函数，qsort排序各种类型的数据
//void qsort (void* base, size_t num, size_t size,
//			  int (*compar)(const void*, const void*));
//compar函数的功能 <0 : A<B  =0 : A=B  >0 A>B;
//默认为升序



//int cmp_int(const void* p1, const void* p2)
//{
//	return(*(int*)p1 - *(int*)p2);
//}
//
//void Print(int* arr, int num)
//{
//	int i = 0;
//	for (i = 0; i < num; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//void test1()//排序整形数据
//{
//	int arr[10] = { 1,2,3,4,7,2,5,7,5,9 };
//	int num = sizeof(arr) / sizeof(arr[0]);
//	int size = sizeof(arr[0]);
//	qsort(arr, num, size, cmp_int);
//	Print(arr, num);
//}

//struct book
//{
//	char name[20];
//	int price;
//};
//
//int cmp_book_name(const void* p1, const void* p2)
//{
//	return(strcmp((char*)p1, (char*)p2));
//}
//
//void test2()
//{
//	struct book arr[] = { {"three body", 3},{"zhao wen dao", 6},{"gone with the wind",4} };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_book_name);
//}

//int cmp_book_price(const void* p1, const void* p2)
//{
//	return(((struct book*)p1)->price - ((struct book*)p2)->price);
//}
//
//void test3()
//{
//	struct book arr[] = { {"three body", 3},{"zhao wen dao", 6},{"gone with the wind",4} };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_book_price);
//}

//int main()
//{
//	//test1();//整形
//	test2();//结构体 name
//	//test3();//结构体 price
//
//	return 0;
//}

//模仿qsort的功能实现一个通用的冒泡排序

//void Swap(char* p1, char* p2, int size)
//{
//	char tmp = 0;
//	int i = 0;
//	for (i = 0; i < size; i++)//一个字节一个字节交换，交换size次
//	{
//		tmp = *p1;
//		*p1 = *p2;
//		*p2 = tmp;
//		p1++;
//		p2++;
//	}
//}
//
//void buble_sort(void* base, size_t num, size_t size, int(*cmp)(const void*, const void*))
//{
//	int i = 0;
//	for (i = 0; i < num - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < num - 1 - i; j++)
//		{
//			if (cmp((char*)base + j * size, (char*)base + (j + 1) * size) >0 )
//				Swap((char*)base + j * size, (char*)base + (j + 1) * size, size);
//		}
//	}
//}

//int cmp_int(const void* p1, const void* p2)
//{
//	return(*(int*)p1 - *(int*)p2);
//}
//
//void test1()//整形
//{
//	int arr[] = { 1,4,67,9,2,8,3,12,7,5 };
//	int num = sizeof(arr) / sizeof(arr[0]);
//	int size = sizeof(arr[0]);
//	buble_sort(arr, num, size, cmp_int);
//	int i = 0;
//	for (i = 0; i < num; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}

//struct book
//{
//	char name[20];
//	int price;
//};
//
//int cmp_book_price(const void* p1, const void* p2)
//{
//	return(((struct book*)p1)->price - ((struct book*)p2)->price);
//}
//
//void test2()
//{
//	struct book arr[] = { {"three body", 3},{"zhao wen dao", 6},{"gone with the wind",4} };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	buble_sort(arr, sz, sizeof(arr[0]), cmp_book_price);
//}
//
//int main()
//{
//	//test1();//整形
//	test2();//结构体-price
//	
//	return 0;
//}