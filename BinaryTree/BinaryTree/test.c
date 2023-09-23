#include"BinaryTree.h"

void Test1()
{
	char* a = "ABD##E#H##CF##G##";
	int i = 0;
	BTNode* root = BinaryTreeCreate(a, strlen(a), &i);

	printf("%d\n", BinaryTreeSize(root));
	printf("%d\n", BinaryTreeLeafSize(root));
	printf("%d\n", BinaryTreeLevelKSize(root, 0));

	BTNode* pos = NULL;
	pos = BinaryTreeFind(root, 'E');
	printf("%c", pos->data);



	BinaryTreeDestory(&root);
}

void Test2()
{
	char* a = "ABD##E#H##CF##G##";
	int i = 0;
	BTNode* root = BinaryTreeCreate(a, strlen(a), &i);

	BinaryTreePrevOrder(root);
	printf("\n");
	BinaryTreeInOrder(root);
	printf("\n");
	BinaryTreePostOrder(root);
	printf("\n");
	BinaryTreeLevelOrder(root);
	printf("\n");



	BinaryTreeDestory(&root);
}


void Test3()
{
	char* a = "ABD##E#H##CF##G##";
	int i = 0;
	BTNode* root = BinaryTreeCreate(a, strlen(a), &i);

	if (BinaryTreeComplete(root))
		printf("isCompleteBT");
	else
		printf("isn'tCompleteBT");
}

int main()
{
	Test3();

	return 0;
}