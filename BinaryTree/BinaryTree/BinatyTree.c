#include"BinaryTree.h"

// ͨ��ǰ�����������"ABD##E#H##CF##G##"����������
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


// ����������
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
// �������ڵ����
int BinaryTreeSize(BTNode* root)
{
	if (root == NULL)
		return 0;
	return BinaryTreeSize(root->left) + BinaryTreeSize(root->right) + 1;
}

// ������Ҷ�ӽڵ����
int BinaryTreeLeafSize(BTNode* root) 
{
	if (root == NULL)
		return 0;
	if (root->left == NULL && root->right == NULL)
		return 1;
	return BinaryTreeLeafSize(root->left) + BinaryTreeLeafSize(root->right);
}

// ��������k��ڵ����
int BinaryTreeLevelKSize(BTNode* root, int k)
{
	if (root == NULL)
		return 0;
	if (k == 1)
		return 1;
	return BinaryTreeLevelKSize(root->left, k - 1) + BinaryTreeLevelKSize(root->right, k - 1);
}

// ����������ֵΪx�Ľڵ�
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

// ������ǰ����� 
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

// �������������
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

// �������������
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

// �������
//ʹ�ö��У�ÿ�����ڵ���ӽڵ�ͬʱ����У����Գ�����ʱͬһ����ȳ�
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

		//������ʱ���ѳ����нڵ���ӽڵ������
		if (tmp->left)
			QueuePush(&q, tmp->left);
		if(tmp->right)
			QueuePush(&q, tmp->right);
	}
	QueueDestroy(&q);
}

//�ж϶������Ƿ�����ȫ������
//�������
bool BinaryTreeComplete(BTNode* root)
{
	Que q;
	QueueInit(&q);

	//��Ϊ������У�Ϊ�ղ���Ϊ��ȫ������
	if(root)
		QueuePush(&q, root);

	//��һ��ѭ��
	while (!QueueEmpty(&q))
	{
		BTNode* tmp = QueueFront(&q);
		
		//������ֹͣ
		if (tmp == NULL)
			break;

		//Ϊ��Ҳ�����
		QueuePush(&q, tmp->left);
		QueuePush(&q, tmp->right);
		QueuePop(&q);
	}

	//��һ�������պ󣬶������滹�зǿսڵ㣬��Ϊ��ȫ������
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