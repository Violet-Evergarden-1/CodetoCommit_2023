#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>



//int main()
//{
//	int a = 1;
//	int k = 5;
//	while (k--)
//	{
//		printf("%d ", a);
//	}
//	printf("\n");
//	k = 5;
//	while (k)
//	{
//		printf("%d ", a);
//		k--;
//	}
//
//	return 0;
//}



//struct ListNode {
//    int val;
//    struct ListNode* next;
//};

//void SLTPrint(struct ListNode* phead)
//{
//    struct ListNode* cur = phead;
//    while (cur)
//    {
//        printf("%d->", cur->val);
//        cur = cur->next;
//    }
//    printf("NULL\n");
//}

//struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
//    struct ListNode* newhead = NULL;
//    struct ListNode* tail = NULL;
//
//    if (tail == NULL)
//    {
//        newhead = (((list1->val) >= (list2->val)) ? (list1 = list1->next) : (list2 = list2->next));
//        tail = newhead;
//    }
//
//    while (list1 && list2)
//    {
//
//        if (list1->val >= list2->val)
//        {
//            tail->next = list1;
//            tail = list1++;
//        }
//        else
//        {
//            tail->next = list2;
//            tail = list2++;
//        }
//    }
//
//    if (list1)
//    {
//        tail->next = list1;
//    }
//    else
//    {
//        tail->next = list2;
//    }
//
//    return newhead;
//}

//struct ListNode {
//    int val;
//    struct ListNode* next;
//};
//
//void SLTPrint(struct ListNode* phead)
//{
//    struct ListNode* cur = phead;
//    while (cur)
//    {
//        printf("%d->", cur->val);
//        cur = cur->next;
//    }
//    printf("NULL\n");
//}
//
//struct ListNode* middleNode(struct ListNode* head)
//{
//    struct ListNode* slow = head;
//    struct ListNode* fast = head;
//
//    while (fast && fast->next)
//    {
//        slow = slow->next;
//        fast = fast->next->next;
//    }
//    return slow;
//}
//
//struct ListNode* reverseList(struct ListNode* head)
//{
//    struct ListNode* cur = NULL, * next = NULL;
//
//    if (head)
//        cur = head->next;
//
//    while (cur)
//    {
//        if (!next)
//            head->next = NULL;
//        next = cur->next;
//        cur->next = head;
//        head = cur;
//        cur = next;
//    }
//
//    return head;
//}
//
//void chkPalindrome(struct ListNode* head)
//{
//    struct ListNode* middle = middleNode(head);
//    struct ListNode* tail = reverseList(middle);
//    SLTPrint(head);
//    SLTPrint(tail);
//    while (tail)
//    {
//        if (head->val != tail->val)
//            return;
//        head = head->next;
//        tail = tail->next;
//    }
//    printf("true");
//    return ;
//}
//
//int main()
//{
//    struct ListNode* n1 = (struct ListNode*)malloc(sizeof(struct ListNode));
//    struct ListNode* n2 = (struct ListNode*)malloc(sizeof(struct ListNode));
//    struct ListNode* n3 = (struct ListNode*)malloc(sizeof(struct ListNode));
//    struct ListNode* n4 = (struct ListNode*)malloc(sizeof(struct ListNode));
//
//    n1->val = 1;
//    n2->val = 2;
//    n3->val = 2;
//    n4->val = 1;
//
//    n1->next = n2;
//    n2->next = n3;
//    n3->next = n4;
//    n4->next = NULL;
//
//   chkPalindrome(n1);
//
//    return 0;
//}