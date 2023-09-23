#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//struct Node 
//{
//    int val;
//    struct Node* next;
//    struct Node* random;
//};

//复制带随机指针的链表
//给你一个长度为 n 的链表，每个节点包含一个额外增加的随机指针 random ，该指针可以指向链表中的任何节点或空节点。
//构造这个链表的 深拷贝。 深拷贝应该正好由 n 个 全新 节点组成，其中每个新节点的值都设为其对应的原节点的值。
//新节点的 next 指针和 random 指针也都应指向复制链表中的新节点，并使原链表和复制链表中的这些指针能够表示相同的链表状态。
//复制链表中的指针都不应指向原链表中的节点 。
//例如，如果原链表中有 X 和 Y 两个节点，其中 X.random-- > Y 。那么在复制链表中对应的两个节点 x 和 y ，同样有 x.random-- > y 。

// 分三步进行：
// 1.拷贝链表的每一个节点，拷贝的节点先链接到被拷贝节点的后面
// 2.复制随机指针的链接：拷贝节点的随机指针指向被拷贝节点随机指针的下一个位置（random指向节点的拷贝）
// 3.拆解链表，把拷贝的链表从原链表中拆解出来


//struct Node* copyRandomList(struct Node* head)
//{
//    // 1.拷贝链表，并插入到原节点的后面
//    struct Node* cur = head;
//    while (cur)
//    {
//        struct Node* curNext = cur->next;
//        struct Node* copyNood = (struct Node*)malloc(sizeof(struct Node));
//        copyNood->val = cur->val;
//        copyNood->next = curNext;
//        copyNood->random = NULL;
//
//        cur->next = copyNood;
//        cur = curNext;
//    }
//
//    // 2.复制拷贝节点的random
//    cur = head;
//    while (cur)
//    {
//        struct Node* copyNood = cur->next;
//        if (cur->random != NULL)//为空不需要复制
//            copyNood->random = cur->random->next;
//        cur = copyNood->next;
//    }
//
//    // 3.解拷贝节点，链接拷贝节点
//    cur = head;
//    struct Node* newtail = NULL, * newhead = NULL;
//    while (cur)
//    {
//        struct Node* copyNood = cur->next;
//        struct Nood* copyNoodNext = copyNood->next;
//
//        //恢复原链表
//        cur->next = copyNoodNext;
//        cur = copyNoodNext;
//
//        // copy解下来尾插
//        if (newtail == NULL)
//        {
//            newhead = newtail = copyNood;
//        }
//        else
//        {
//            newtail->next = copyNood;
//            newtail = copyNood;
//        }
//    }
//
//    return newhead;
//}


//int main()
//{
//    struct Node* n1 = (struct Node*)malloc(sizeof(struct Node));
//    struct Node* n2 = (struct Node*)malloc(sizeof(struct Node));
//    struct Node* n3 = (struct Node*)malloc(sizeof(struct Node));
//    struct Node* n4 = (struct Node*)malloc(sizeof(struct Node));
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
//    n1->random = n1;
//    n2->random = n4;
//    n3->random = n1;
//    n4->random = n2;
//
//    copyRandomList(n1);
//
//    return 0;
//


//int main()
//{
//	char s[] = "\\123456\123456\t";
//	printf("%d\n", strlen(s));
//	printf("%d\n", strlen("c:\test\x11\328\test.c"));
//	return 0;
//}

//#define N 2
//#define M N + 1
//#define NUM (M + 1) * M / 2
//int main()
//{
//	printf("%d\n", NUM);
//	return 0;
//}

//int f(int n)
//{
//	static int i = 1;
//	if (n >= 5)
//		return n;
//	n = n + i;
//	i++;
//	return f(n);
//}

//int main()
//{
//	printf("%d", f(1));
//
//	return 0;
//}


//尼科彻斯定理
//验证尼科彻斯定理，即：任何一个整数m的立方都可以写成m个连续奇数之和。
//例如：
//1 ^ 3 = 1
//2 ^ 3 = 3 + 5
//3 ^ 3 = 7 + 9 + 11
//4 ^ 3 = 13 + 15 + 17 + 19
//输入一个正整数m（m≤100），将m的立方写成m个连续奇数之和的形式输出。
//数据范围：
//1≤m≤100


//int main() {
//    int m;
//    while (scanf("%d", &m) != EOF)
//    {
//        int middle = m * m;
//        if (m % 2 == 1)
//        {
//            int small = middle - (m / 2) * 2;
//            while (m--)
//            {
//                if (m == 0)
//                    printf("%d", small);
//                else
//                    printf("%d+", small);
//                small += 2;
//            }
//        }
//        else
//        {
//            int small = middle + 1 - (m / 2) * 2;
//            while (m--)
//            {
//                if (m == 0)
//                    printf("%d", small);
//                else
//                    printf("%d+", small);
//                small += 2;
//            }
//        }
//        printf("\n");
//    }
//    return 0;
//}

//直接找起点
//int main() {
//    int m;
//    while (scanf("%d", &m) != EOF)
//    {
//        int small = m * m - m + 1;
//        printf("%d", small);
//        while (--m)
//        {
//            small += 2;
//            printf("+%d", small);
//        }
//    }
//    return 0;
//}
//
//int main() {
//    int n;
//    while (scanf("%d", &n) != EOF)
//    {
//        printf("%d", 2 * n + n * (n - 1) * 3 / 2);
//    }
//    return 0;
//}


