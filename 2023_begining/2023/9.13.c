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

//��K��ڵ�
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

//965. ��ֵ������
//���������ÿ���ڵ㶼������ͬ��ֵ����ô�ö��������ǵ�ֵ��������
//ֻ�и��������ǵ�ֵ������ʱ���ŷ��� true�����򷵻� false��

//bool isUnivalTree(struct TreeNode* root) {
//	if (root == NULL)
//		return true;
//	if (root->left != NULL && root->val != root->left->val)
//		return false;
//	if (root->right != NULL && root->val != root->right->val)
//		return false;
//	return isUnivalTree(root->left) && isUnivalTree(root->right);
//}



//104. ��������������
//����һ�������� root �������������ȡ�
//�������� ������ ��ָ�Ӹ��ڵ㵽��ԶҶ�ӽڵ���·���ϵĽڵ�����

//int maxDepth(struct TreeNode* root)
//{
//	if (root == NULL)
//		return 0;
//	return fmax(maxDepth(root->left), maxDepth(root->right)) + 1;
//}

#include<limits.h>