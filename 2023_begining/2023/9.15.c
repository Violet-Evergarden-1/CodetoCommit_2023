#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<Windows.h>

// struct TreeNode 
// {
//	int val;
//	struct TreeNode* left;
//	struct TreeNode* right;
//	
//};


//226. 翻转二叉树
//给你一棵二叉树的根节点 root ，翻转这棵二叉树，并返回其根节点。

//struct TreeNode* invertTree(struct TreeNode* root) 
//{
//	if (root == NULL)
//		return NULL;
//
//	//交换左右子树
//	struct TreeNode* tmp = root->left;
//	root->left = root->right;
//	root->right = tmp;
//	
//	//递归
//	invertTree(root->left);
//	invertTree(root->right);
//
//	//只有第一层返回根有效，递归的返回未接收
//	return root;
//}


//100. 相同的树
//给你两棵二叉树的根节点 p 和 q ，编写一个函数来检验这两棵树是否相同。
//如果两个树在结构上相同，并且节点具有相同的值，则认为它们是相同的。

//bool isSameTree(struct TreeNode* p, struct TreeNode* q)
//{
//	//如果同为空，一样，返回真
//	if (p == NULL && q == NULL)
//		return true;
//
//	//pq不会同为空，如果p||q有空，说明一个为空一个不为空，返回假
//	if (p == NULL || q == NULL)
//		return false;
//
//	if (p->val != q->val)
//		return false;
//
//	return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
//}


//101. 对称二叉树
//给你一个二叉树的根节点 root ， 检查它是否轴对称。

 ////这个是用来递归判断的函数
 //bool isSymmetricTree(struct TreeNode* p, struct TreeNode* q)
 //{
 //    //如果同为空，一样，返回真
 //    if (p == NULL && q == NULL)
 //        return true;

 //    //pq不会同为空，如果p||q有空，说明一个为空一个不为空，返回假
 //    if (p == NULL || q == NULL)
 //        return false;

 //    if (p->val != q->val)
 //        return false;

 //    //递归，但传入节点相反的左右子树
 //    return isSymmetricTree(p->left, q->right) && isSymmetricTree(p->right, q->left);
 //}

 ////这个是题目的函数
 //bool isSymmetric(struct TreeNode* root)
 //{
 //    if (root == NULL)
 //        return true;
 //    return isSymmetricTree(root->left, root->right);
 //}

//572. 另一棵树的子树
//给你两棵二叉树 root 和 subRoot 。检验 root 中是否包含和 subRoot 具有相同结构和节点值的子树。
//如果存在，返回 true ；否则，返回 false 。
//二叉树 tree 的一棵子树包括 tree 的某个节点和这个节点的所有后代节点。
//tree 也可以看做它自身的一棵子树。

 //bool isSameTree(struct TreeNode* p, struct TreeNode* q)
 //{
	// //如果同为空，一样，返回真
	// if (p == NULL && q == NULL)
	//	 return true;

	// //pq不会同为空，如果p||q有空，说明一个为空一个不为空，返回假
	// if (p == NULL || q == NULL)
	//	 return false;

	// if (p->val != q->val)
	//	 return false;

	// return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
 //}

 ////遍历树，找和subRoot值一样的节点
 //bool isSubtree(struct TreeNode* root, struct TreeNode* subRoot) 
 //{
	// if (subRoot == NULL)
	//	 return true;

	// //subRoot不为空，root为空，说明当前分支找不到了，返回假
	// if (root == NULL)
	//	 return false;

	// //找到了值一样的节点进入isSameTree
	// if (root->val == subRoot->val)
	// {
	//	 //isSameTree找到了返回真，找不到继续遍历找
	//	 if (isSameTree(root, subRoot))
	//		 return true;
	// }
	// return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
 //}


//144. 二叉树的前序遍历
//给你二叉树的根节点 root ，返回它节点值的 前序 遍历。

// int TreeSize(struct TreeNode* root)
// {
//	 return root == NULL ? 0 : TreeSize(root->left) + TreeSize(root->right) + 1;
// }
//
// void preorder(struct TreeNode* root, int* a, int* pi)
// {
//	 if (root == NULL)
//		 return;
//
//	 a[(*pi)++] = root->val;
//	 preorder(root->left, a, pi);
//	 preorder(root->right, a, pi);
// }
//
//int* preorderTraversal(struct TreeNode* root, int* returnSize)
//{
//	int n = TreeSize(root);
//	int* a = (int*)malloc(sizeof(int) * n);
//
//	int i = 0;
//	preorder(root, a, &i);
//
//	*returnSize = n;
//	return a;
//}


//94. 二叉树的中序遍历
//给你二叉树的根节点 root ，返回它节点值的 中序 遍历。

// int TreeSize(struct TreeNode* root)
// {
//	 return root == NULL ? 0 : TreeSize(root->left) + TreeSize(root->right) + 1;
// }
//
// void inorder(struct TreeNode* root, int* a, int* pi)
// {
//	 if (root == NULL)
//		 return;
//
//	 inorder(root->left, a, pi);
//	 a[(*pi)++] = root->val;
//	 inorder(root->right, a, pi);
// }
//
//int* inorderTraversal(struct TreeNode* root, int* returnSize)
//{
//	int n = TreeSize(root);
//	int* a = (int*)malloc(sizeof(int) * n);
//
//	int i = 0;
//	inorder(root, a, &i);
//
//	*returnSize = n;
//	return a;
//}


//145. 二叉树的后序遍历
//给你二叉树的根节点 root ，返回它节点值的 后序 遍历。

// int TreeSize(struct TreeNode* root)
// {
//	 return root == NULL ? 0 : TreeSize(root->left) + TreeSize(root->right) + 1;
// }
//
// void postorder(struct TreeNode* root, int* a, int* pi)
// {
//	 if (root == NULL)
//		 return;
//
//	 postorder(root->left, a, pi);
//	 postorder(root->right, a, pi);
//	 a[(*pi)++] = root->val;
// }
//
//int* postorderTraversal(struct TreeNode* root, int* returnSize)
//{
//	int n = TreeSize(root);
//	int* a = (int*)malloc(sizeof(int) * n);
//
//	int i = 0;
//	postorder(root, a, &i);
//
//	*returnSize = n;
//	return a;
//}

//#include <stdio.h>
//int main()
//{
//	char a = -1;
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111-截断
//	//11111111 -a
//	//11111111111111111111111111111111
//	//11111111111111111111111111111110
//	//10000000000000000000000000000001--> -1
//
//	signed char b = -1;
//	//11111111111111111111111111111111
//	//11111111 -b
//
//	unsigned char c = -1;
//	//11111111 -c
//	//00000000000000000000000011111111
//	//
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	//%d - 十进制的形式打印有符号整型整数
//	//整型提升
//
//	return 0;
//}

//int main()
//{
//	char a = -128;
//	//-128
//	//10000000000000000000000010000000
//	//11111111111111111111111101111111
//	//11111111111111111111111110000000
//	//-128的补码
//	//10000000
//	//11111111111111111111111110000000
//	//
//	printf("%u\n", a);
//	return 0;
//}


//int main()
//{
//	int i = -20;
//	unsigned  int  j = 10;
//	printf("%d\n", i + j);
//
//	return 0;
//}

//int main()
//{
//	char a[] = "abcd";
//	a[2] = 0;
//
//	printf("%s ", a);
//	printf("%d ", strlen(a));
//}

//int main()
//{
//	unsigned char i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u ", i);
//		Sleep(100);
//	}
//}

#include<float.h>

