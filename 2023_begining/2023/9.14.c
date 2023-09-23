#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//typedef struct TreeNode
//{
//	int val;
//	struct TreeNode* left;
//	struct TreeNode* right;
//}BTNode;
//
////查找值为x的节点
//BTNode* TreeFind(BTNode* root, int x)
//{
//	if (root == NULL)
//		return NULL;
//	if (root->val == x)
//		return root;
//	BTNode* ret = TreeFind(root->left, x);
//	return ret != NULL ? ret : TreeFind(root->right, x);
//}
//
//bool isSameTree(BTNode* p, BTNode* q)
//{
//	if (p == NULL && q == NULL)
//		return true;
//
//	if (p == NULL || q == NULL)
//		return false;
//
//	if (p->val != q->val)
//		return false;
//
//	return isSameTree(p->left, q->left) && isSameTree(p->left, q->left);
//
//}