#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//struct Node 
//{
//    int val;
//    struct Node* next;
//    struct Node* random;
//};

//���ƴ����ָ�������
//����һ������Ϊ n ������ÿ���ڵ����һ���������ӵ����ָ�� random ����ָ�����ָ�������е��κνڵ��սڵ㡣
//������������ ����� ���Ӧ�������� n �� ȫ�� �ڵ���ɣ�����ÿ���½ڵ��ֵ����Ϊ���Ӧ��ԭ�ڵ��ֵ��
//�½ڵ�� next ָ��� random ָ��Ҳ��Ӧָ���������е��½ڵ㣬��ʹԭ����͸��������е���Щָ���ܹ���ʾ��ͬ������״̬��
//���������е�ָ�붼��Ӧָ��ԭ�����еĽڵ� ��
//���磬���ԭ�������� X �� Y �����ڵ㣬���� X.random-- > Y ����ô�ڸ��������ж�Ӧ�������ڵ� x �� y ��ͬ���� x.random-- > y ��

// ���������У�
// 1.���������ÿһ���ڵ㣬�����Ľڵ������ӵ��������ڵ�ĺ���
// 2.�������ָ������ӣ������ڵ�����ָ��ָ�򱻿����ڵ����ָ�����һ��λ�ã�randomָ��ڵ�Ŀ�����
// 3.��������ѿ����������ԭ�����в�����


//struct Node* copyRandomList(struct Node* head)
//{
//    // 1.�������������뵽ԭ�ڵ�ĺ���
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
//    // 2.���ƿ����ڵ��random
//    cur = head;
//    while (cur)
//    {
//        struct Node* copyNood = cur->next;
//        if (cur->random != NULL)//Ϊ�ղ���Ҫ����
//            copyNood->random = cur->random->next;
//        cur = copyNood->next;
//    }
//
//    // 3.�⿽���ڵ㣬���ӿ����ڵ�
//    cur = head;
//    struct Node* newtail = NULL, * newhead = NULL;
//    while (cur)
//    {
//        struct Node* copyNood = cur->next;
//        struct Nood* copyNoodNext = copyNood->next;
//
//        //�ָ�ԭ����
//        cur->next = copyNoodNext;
//        cur = copyNoodNext;
//
//        // copy������β��
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


//��Ƴ�˹����
//��֤��Ƴ�˹���������κ�һ������m������������д��m����������֮�͡�
//���磺
//1 ^ 3 = 1
//2 ^ 3 = 3 + 5
//3 ^ 3 = 7 + 9 + 11
//4 ^ 3 = 13 + 15 + 17 + 19
//����һ��������m��m��100������m������д��m����������֮�͵���ʽ�����
//���ݷ�Χ��
//1��m��100


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

//ֱ�������
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


