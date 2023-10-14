#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>

// struct TreeNode {
//	int val;
//	struct TreeNode* left;
//	struct TreeNode* right;
//};
//
// int sumOfLeftLeaves(struct TreeNode* root) 
// {
//	 if (root == NULL)
//		 return 0;
//	 if (root->left != NULL && root->left->left == NULL && root->left->right == NULL)
//		 return (root->left->val) + sumOfLeftLeaves(root->right);
//	 return sumOfLeftLeaves(root->left) + sumOfLeftLeaves(root->right);
// }

typedef struct SListNode {
	int val;
	struct SListNode* next;
}SLTNode;

SLTNode* BuySLTNode(int num)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	newnode->val = num;
	newnode->next = NULL;

	return newnode;
}

int main()
{
	int m = 2, n = 5;
	//scanf("%d %d", &n, &m);
	
	SLTNode* phead = NULL, * tail = NULL;
	for (int i = 1; i <= n; i++)
	{
		SLTNode* newnode = BuySLTNode(i);
		if (phead == NULL)
			phead = tail = newnode;
		else
		{
			tail->next = newnode;
			tail = newnode;
		}
	}
	tail->next = phead;

	int i = 1;
	SLTNode* cur = phead, * prev = tail;
	while (cur->next != cur)
	{
		if (i != m)
		{
			prev = cur;
			cur = cur->next;
			i++;
		}
		else
		{
			prev->next = cur->next;
			free(cur);
			cur = prev->next;
			i = 1;
		}
	}

	printf("%d", cur->val);
	free(cur);
}