#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#include<assert.h>



//int cmp_int(const void* p1, const void* p2)
//{
//	return(*(int*)p1 - *(int*)p2);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[10000] = { 0 };
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	qsort(arr, n, sizeof(int), cmp_int);
//	
//	if (n == 1)
//		return arr[0];
//
//	int count = (arr[0] + arr[1]) * (n - 1);
//	int i = 2;
//	n -= 2;
//
//	while (n)
//	{
//		count += arr[i] * n;
//		n--;
//	}
//	printf("%d", count+1);
//
//	return 0;
//}


//什么是ACMhttps://ac.nowcoder.com/acm/contest/52435/H
//int main()
//{
//	char a[] = "Association_for_Computing_Machinery";
//	char b[] = "Air_Combat_Maneuvering";
//
//	char c[100000] = "";
//	scanf("%s", c);
//
//	if (!((strstr(c, a) != NULL) ^ (strstr(c, b) != NULL)))
//		printf("NO");
//	else
//		printf("YES");
//}


//十年OI一场空https://ac.nowcoder.com/acm/contest/52435/J
//int main()
//{
//	long long n = 0;
//	scanf("%lld", &n);
//	if (n > INT_MAX || n < INT_MIN)
//		printf("YES");
//	else
//		printf("NO");
//
//	return 0;
//}

//平均数https://ac.nowcoder.com/acm/contest/52435/D
//int main()
//{
//	long long num = 0;
//	long long total = 0;
//	scanf("%lld %lld", &num, &total);
//
//	long long average = total / num;
//	long long gap = total - average * num;
//
//	long long i = 0;
//	long long arr[10000] = { 0 };
//	
//	for (i = 0; i < num - gap; i++)
//	{
//		arr[i] = average;
//	}
//
//	while (gap--)
//	{
//		arr[i++] = average+1;
//	}
//
//	for (i = 0; i < num; i++)
//	{
//		printf("%lld ", arr[i]);
//	}
//
//	return 0;
//}

//幂运算https://ac.nowcoder.com/acm/contest/52435/C
//int main()
//{
//	int n, p;
//	scanf("%d %d", &n, &p);
//	long long sum = 2;
//	for (int i = 0; i < n; i++)
//	{
//		sum = (sum * sum) % p;
//	}
//	printf("%d", sum);
//
//	return 0;
//}


//typedef struct SListNode
//{
//	char question[13];
//	char answer[13];
//	struct List* next;
//}SLTNode;
//
//SLTNode* BuySLTNode(char* question, char* answer)
//{
//	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
//	if (newnode == NULL)
//	{
//		perror("malloc fail");
//		exit(-1);
//	}
//	memcpy(newnode->question, question, 13);
//	memcpy(newnode->answer, answer, 13);
//	newnode->next = NULL;
//
//	return newnode;
//}
//
//void SLTPushBack(SLTNode** pphead, char* question, char* answer)
//{
//	assert(pphead);
//
//	SLTNode* newnode = BuySLTNode(question, answer);
//	if (*pphead == NULL)
//	{
//		*pphead = newnode;
//	}
//	else
//	{
//		SLTNode* tail = *pphead;
//		while (tail->next)
//		{
//			tail = tail->next;
//		}
//		tail->next = newnode;
//	}
//}
//
//void SLTPrint(SLTNode* phead)
//{
//	SLTNode* cur = phead;
//	while (cur)
//	{
//		printf("%s->", cur->question);
//		cur = cur->next;
//	}
//	cur = phead;
//	while (cur)
//	{
//		printf("%s->", cur->answer);
//		cur = cur->next;
//	}
//	printf("NULL\n");
//}
//
//void SLTDestroy(SLTNode** pphead)
//{
//	assert(pphead);
//
//	SLTNode* pNext = (*pphead)->next;
//	SLTNode* cur = *pphead;
//	while (cur)
//	{
//		pNext = cur->next;
//		free(cur);
//		cur = pNext;
//	}
//	*pphead = NULL;
//}
//
////ChatGPT原理大揭秘https://ac.nowcoder.com/acm/contest/52435/G
//int main()
//{
//	int total = 0;
//	scanf("%d", &total);
//	while (total--)
//	{
//		int num_QA = 0;
//		int num_Q = 0;
//		scanf("%d %d", &num_QA, &num_Q);
//	
//		SLTNode* plist = NULL;
//		while (num_QA--)
//		{
//			char que[13];
//			scanf("%s", que);
//			char ans[13];
//			scanf("%s", ans);
//			SLTPushBack(&plist, que, ans);
//		}
//		//SLTPrint(plist);
//		while (num_Q--)
//		{
//			char que[13]="";
//			scanf("%s", que);
//			SLTNode* cur = plist;
//			int flag = 0;
//			while (cur)
//			{
//				if (strcmp(cur->question, que) == 0)
//				{
//					flag = 1;
//					printf("%s\n", cur->answer);
//					break;
//				}
//				else
//					cur = cur->next;
//			}
//			if (flag == 0)
//				printf("Not your business, don't ask more!\n");
//		}
//		SLTDestroy(&plist);
//	}
//}


//乘积https://ac.nowcoder.com/acm/contest/52435/E
//int main() {
//    int n = 7;
//    scanf("%d", &n);
//
//    long long firstThreeDigits = 1;
//
//    int zeroCount = 0;
//    int fiveCount = 0;
//    int twoCount = 0;
//
//    while (n--)
//    {
//        int num = 0;
//        scanf("%d", &num);
//
//        int digit = num;
//        firstThreeDigits *= digit;
//
//        while (firstThreeDigits > (LLONG_MAX / 1000))
//        {
//            firstThreeDigits /= 10;
//        }
//
//        while (num % 10 == 0)
//        {
//            zeroCount++;
//            num /= 10;
//        }
//        while (num % 5 == 0)
//        {
//            fiveCount++;
//            num /= 5;
//        }
//        while (num % 2 == 0)
//        {
//            twoCount++;
//            num /= 2;
//            if (twoCount > n + fiveCount)
//                break;
//        }
//    }
//    zeroCount += (fiveCount < twoCount ? fiveCount : twoCount);
//    while (firstThreeDigits > 1000)
//    {
//        firstThreeDigits /= 10;
//    }
//    printf("%d\n", firstThreeDigits);
//    printf("%d\n", zeroCount);
//
//    return 0;
//}

//电子手表https://ac.nowcoder.com/acm/contest/42385/A
int main()
{

}




