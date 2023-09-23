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


//226. ��ת������
//����һ�ö������ĸ��ڵ� root ����ת��ö�����������������ڵ㡣

//struct TreeNode* invertTree(struct TreeNode* root) 
//{
//	if (root == NULL)
//		return NULL;
//
//	//������������
//	struct TreeNode* tmp = root->left;
//	root->left = root->right;
//	root->right = tmp;
//	
//	//�ݹ�
//	invertTree(root->left);
//	invertTree(root->right);
//
//	//ֻ�е�һ�㷵�ظ���Ч���ݹ�ķ���δ����
//	return root;
//}


//100. ��ͬ����
//�������ö������ĸ��ڵ� p �� q ����дһ���������������������Ƿ���ͬ��
//����������ڽṹ����ͬ�����ҽڵ������ͬ��ֵ������Ϊ��������ͬ�ġ�

//bool isSameTree(struct TreeNode* p, struct TreeNode* q)
//{
//	//���ͬΪ�գ�һ����������
//	if (p == NULL && q == NULL)
//		return true;
//
//	//pq����ͬΪ�գ����p||q�пգ�˵��һ��Ϊ��һ����Ϊ�գ����ؼ�
//	if (p == NULL || q == NULL)
//		return false;
//
//	if (p->val != q->val)
//		return false;
//
//	return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
//}


//101. �Գƶ�����
//����һ���������ĸ��ڵ� root �� ������Ƿ���Գơ�

 ////����������ݹ��жϵĺ���
 //bool isSymmetricTree(struct TreeNode* p, struct TreeNode* q)
 //{
 //    //���ͬΪ�գ�һ����������
 //    if (p == NULL && q == NULL)
 //        return true;

 //    //pq����ͬΪ�գ����p||q�пգ�˵��һ��Ϊ��һ����Ϊ�գ����ؼ�
 //    if (p == NULL || q == NULL)
 //        return false;

 //    if (p->val != q->val)
 //        return false;

 //    //�ݹ飬������ڵ��෴����������
 //    return isSymmetricTree(p->left, q->right) && isSymmetricTree(p->right, q->left);
 //}

 ////�������Ŀ�ĺ���
 //bool isSymmetric(struct TreeNode* root)
 //{
 //    if (root == NULL)
 //        return true;
 //    return isSymmetricTree(root->left, root->right);
 //}

//572. ��һ����������
//�������ö����� root �� subRoot ������ root ���Ƿ������ subRoot ������ͬ�ṹ�ͽڵ�ֵ��������
//������ڣ����� true �����򣬷��� false ��
//������ tree ��һ���������� tree ��ĳ���ڵ������ڵ�����к���ڵ㡣
//tree Ҳ���Կ����������һ��������

 //bool isSameTree(struct TreeNode* p, struct TreeNode* q)
 //{
	// //���ͬΪ�գ�һ����������
	// if (p == NULL && q == NULL)
	//	 return true;

	// //pq����ͬΪ�գ����p||q�пգ�˵��һ��Ϊ��һ����Ϊ�գ����ؼ�
	// if (p == NULL || q == NULL)
	//	 return false;

	// if (p->val != q->val)
	//	 return false;

	// return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
 //}

 ////���������Һ�subRootֵһ���Ľڵ�
 //bool isSubtree(struct TreeNode* root, struct TreeNode* subRoot) 
 //{
	// if (subRoot == NULL)
	//	 return true;

	// //subRoot��Ϊ�գ�rootΪ�գ�˵����ǰ��֧�Ҳ����ˣ����ؼ�
	// if (root == NULL)
	//	 return false;

	// //�ҵ���ֵһ���Ľڵ����isSameTree
	// if (root->val == subRoot->val)
	// {
	//	 //isSameTree�ҵ��˷����棬�Ҳ�������������
	//	 if (isSameTree(root, subRoot))
	//		 return true;
	// }
	// return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
 //}


//144. ��������ǰ�����
//����������ĸ��ڵ� root ���������ڵ�ֵ�� ǰ�� ������

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


//94. ���������������
//����������ĸ��ڵ� root ���������ڵ�ֵ�� ���� ������

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


//145. �������ĺ������
//����������ĸ��ڵ� root ���������ڵ�ֵ�� ���� ������

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
//	//11111111111111111111111111111111-�ض�
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
//	//%d - ʮ���Ƶ���ʽ��ӡ�з�����������
//	//��������
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
//	//-128�Ĳ���
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

