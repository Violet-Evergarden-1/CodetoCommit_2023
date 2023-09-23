#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//void merge(int nums1[], int nums1Size, int m, int nums2[], int nums2Size, int n)
//{
//    int p1 = m - 1;
//    int p2 = n - 1;
//    int p = m + n - 1;
//    while (p1 >= 0 && p2 >= 0)
//    {
//        if (nums1[p1] > nums2[p2])
//        {
//            nums1[p--] = nums1[p1--];
//        }
//        else
//            nums1[p--] = nums2[p2--];
//    }
//    while (p2 >= 0)
//        nums1[p--] = nums2[p2--];
//}
//
//int main()
//{
//	int arr1[] = { 1,2,3,0,0,0 };
//	int arr2[] = { 2,5,6 };
//    merge(arr1, 6, 6, arr2, 3, 3);
//    int i = 0;
//    for (i = 0; i < 6; i++)
//    {
//        printf("%d", arr1[i]);
//    }
//    return 0;
//
//}

//void SLTPrint(SLTNode* phead)
//{
//	SLTNode* cur = phead;
//	//while (cur != NULL)
//	while (cur)
//	{
//		printf("%d->", cur->data);
//		cur = cur->next;
//	}
//
//	printf("NULL\n");
//}
//
//SLTNode* BuySListNode(SLTDataType x)
//{
//	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
//	if (newnode == NULL)
//	{
//		perror("malloc fail");
//		exit(-1);
//	}
//
//	newnode->data = x;
//	newnode->next = NULL;
//
//	return newnode;
//}
//
//// 16:07继续
//void SLTPushBack(SLTNode** pphead, SLTDataType x)
//{
//	SLTNode* newnode = BuySListNode(x);
//
//	if (*pphead == NULL)
//	{
//		// 改变的结构体的指针，所以要用二级指针
//		*pphead = newnode;
//	}
//	else
//	{
//		SLTNode* tail = *pphead;
//		while (tail->next != NULL)
//		{
//			tail = tail->next;
//		}
//
//		// 改变的结构体，用结构体的指针即可
//		tail->next = newnode;
//	}
//}
//
//void SLTPushFront(SLTNode** pphead, SLTDataType x)
//{
//	SLTNode* newnode = BuySListNode(x);
//
//	newnode->next = *pphead;
//	*pphead = newnode;
//}
//
//void SLTPopBack(SLTNode** pphead)
//{
//	// 1、空
//	assert(*pphead);
//
//	// 2、一个节点
//	// 3、一个以上节点
//	if ((*pphead)->next == NULL)
//	{
//		free(*pphead);
//		*pphead = NULL;
//	}
//	else
//	{
//		//SLTNode* tailPrev = NULL;
//		//SLTNode* tail = *pphead;
//		//while (tail->next)
//		//{
//		//	tailPrev = tail;
//		//	tail = tail->next;
//		//}
//
//		//free(tail);
//		////tail = NULL;
//		//tailPrev->next = NULL;
//
//		SLTNode* tail = *pphead;
//		while (tail->next->next)
//		{
//			tail = tail->next;
//		}
//
//		free(tail->next);
//		tail->next = NULL;
//	}
//}
//
//void SLTPopFront(SLTNode** pphead)
//{
//	// 空
//	assert(*pphead);
//
//	// 非空
//	SLTNode* newhead = (*pphead)->next;
//	free(*pphead);
//	*pphead = newhead;
//}