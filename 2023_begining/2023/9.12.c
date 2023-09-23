#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//int TreeLeafSize(BTNode* root)
//{
//	if (root == NULL)
//		return 0;
//	return (root->left) && (root->right) == NULL ? 1 : TreeLeafSize(root->left) + TreeLeafSize(root->right);
//}

//int TreeKSize(BTNode* root,int k)
//{
//	if (root == NULL)
//		return 0;
//	if (k == 1)
//		return 1;
//	return TreeKSize(root->left,k-1)+ TreeKSize(root->right, k - 1)
//}
