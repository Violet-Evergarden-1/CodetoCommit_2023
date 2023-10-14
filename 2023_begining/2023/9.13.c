#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//typedef struct SListNode
//{
//	int val;
//	struct TreeNode* left;
//	struct TreeNode* right;
//}BTNode;

//第K层节点
//int TreeKLevel(BTNode* root, int k)
//{
//	assert(k > 0);
//
//	if (root == NULL)
//		return 0;
//	if (k == 1)
//		return 1;
//	return TreeKLevel(root->left, k - 1) + TreeKLevel(root->right, k - 1);
//}

//965. 单值二叉树
//如果二叉树每个节点都具有相同的值，那么该二叉树就是单值二叉树。
//只有给定的树是单值二叉树时，才返回 true；否则返回 false。

//bool isUnivalTree(struct TreeNode* root) {
//	if (root == NULL)
//		return true;
//	if (root->left != NULL && root->val != root->left->val)
//		return false;
//	if (root->right != NULL && root->val != root->right->val)
//		return false;
//	return isUnivalTree(root->left) && isUnivalTree(root->right);
//}



//104. 二叉树的最大深度
//给定一个二叉树 root ，返回其最大深度。
//二叉树的 最大深度 是指从根节点到最远叶子节点的最长路径上的节点数。

//int maxDepth(struct TreeNode* root)
//{
//	if (root == NULL)
//		return 0;
//	return fmax(maxDepth(root->left), maxDepth(root->right)) + 1;
//}

#include<limits.h>