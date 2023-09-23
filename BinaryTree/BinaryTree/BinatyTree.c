#include"BinaryTree.h"

// 通过前序遍历的数组"ABD##E#H##CF##G##"构建二叉树
BTNode* BinaryTreeCreate(BTDataType* a, int n, int* pi)
{
	assert(a);
	assert(pi);

	if (a[*pi] == '#')
	{
		(*pi)++;
		return NULL;
	}

	BTNode* tmp = (BTNode*)malloc(sizeof(BTNode));
	if (tmp == NULL)
	{
		perror("mallocfailed");
		exit(-1);
	}

	tmp->data = a[(*pi)++];
	tmp->left = BinaryTreeCreate(a, n, pi);
	tmp->right = BinaryTreeCreate(a, n, pi);

	return tmp;
}


// 二叉树销毁
void BinaryTreeDestory(BTNode** root)
{
	assert(root);

	if (*root == NULL)
		return;
	BinaryTreeDestory(&((*root)->left));
	BinaryTreeDestory(&((*root)->right));

	free(*root);
	root = NULL;
}
// 二叉树节点个数
int BinaryTreeSize(BTNode* root)
{
	if (root == NULL)
		return 0;
	return BinaryTreeSize(root->left) + BinaryTreeSize(root->right) + 1;
}

// 二叉树叶子节点个数
int BinaryTreeLeafSize(BTNode* root) 
{
	if (root == NULL)
		return 0;
	if (root->left == NULL && root->right == NULL)
		return 1;
	return BinaryTreeLeafSize(root->left) + BinaryTreeLeafSize(root->right);
}

// 二叉树第k层节点个数
int BinaryTreeLevelKSize(BTNode* root, int k)
{
	if (root == NULL)
		return 0;
	if (k == 1)
		return 1;
	return BinaryTreeLevelKSize(root->left, k - 1) + BinaryTreeLevelKSize(root->right, k - 1);
}

// 二叉树查找值为x的节点
BTNode* BinaryTreeFind(BTNode* root, BTDataType x)
{
	if (root == NULL)
		return NULL;
	if (root->data == x)
		return root;
	BTNode* ret = NULL;
	ret = BinaryTreeFind(root->left, x);
	return  ret!= NULL ? ret: BinaryTreeFind(root->right, x);
}

// 二叉树前序遍历 
void BinaryTreePrevOrder(BTNode* root)
{
	if (root == NULL)
	{
		//printf("# ");
		return;
	}
	printf("%c ", root->data);
	BinaryTreePrevOrder(root->left);
	BinaryTreePrevOrder(root->right);
}

// 二叉树中序遍历
void BinaryTreeInOrder(BTNode* root)
{
	if (root == NULL)
	{
		//printf("# ");
		return;
	}
	BinaryTreeInOrder(root->left);
	printf("%c ", root->data);
	BinaryTreeInOrder(root->right);
}

// 二叉树后序遍历
void BinaryTreePostOrder(BTNode* root)
{

	if (root == NULL)
	{
		//printf("# ");
		return;
	}
	BinaryTreePostOrder(root->left);
	BinaryTreePostOrder(root->right);
	printf("%c ", root->data);
}

// 层序遍历
//使用队列，每个根节点的子节点同时入队列，所以出队列时同一层的先出
void BinaryTreeLevelOrder(BTNode* root)
{
	Que q;
	QueueInit(&q);
	QueuePush(&q,root);

	while (!QueueEmpty(&q))
	{
		BTNode* tmp = QueueFront(&q);
		printf("%c ", tmp->data);
		QueuePop(&q);

		//出队列时，把出队列节点的子节点入队列
		if (tmp->left)
			QueuePush(&q, tmp->left);
		if(tmp->right)
			QueuePush(&q, tmp->right);
	}
	QueueDestroy(&q);
}

//判断二叉树是否是完全二叉树
//层序遍历
bool BinaryTreeComplete(BTNode* root)
{
	Que q;
	QueueInit(&q);

	//不为空入队列，为空步视为完全二叉树
	if(root)
		QueuePush(&q, root);

	//第一次循环
	while (!QueueEmpty(&q))
	{
		BTNode* tmp = QueueFront(&q);
		
		//遇到空停止
		if (tmp == NULL)
			break;

		//为空也入队列
		QueuePush(&q, tmp->left);
		QueuePush(&q, tmp->right);
		QueuePop(&q);
	}

	//第一次遇到空后，队列里面还有非空节点，则不为完全二叉树
	while (!QueueEmpty(&q))
	{
		BTNode* tmp = QueueFront(&q);
		QueuePop(&q);

		if (tmp != NULL)
		{
			QueueDestroy(&q);
			return false;
		}
	}

	QueueDestroy(&q);
	return true;
}