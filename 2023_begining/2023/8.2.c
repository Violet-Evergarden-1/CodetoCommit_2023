#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<stdio.h>

//�Ƴ�Ԫ��
//����һ������ nums ��һ��ֵ val������Ҫ ԭ�� �Ƴ�������ֵ���� val ��Ԫ�أ��������Ƴ���������³��ȡ�
//Ҫ��ʱ�临�Ӷ�ΪO(N)���ռ临�Ӷ�ΪO(1)
//Ԫ�ص�˳����Ըı䡣�㲻��Ҫ���������г����³��Ⱥ����Ԫ�ء�

//����˫ָ�루���ı�Ԫ��˳��
//int removeElement(int* nums, int numsSize, int val) 
//{
//	int solwIndex = 0;
//	int fastIndex = 0;
//	for (fastIndex = 0; fastIndex < numsSize; fastIndex++)
//	{
//		//1.û����val,����ָ��ָ��ͬһԪ�أ���ֵ���ı�Ԫ�ء�++
//		//2.�����ָ�����val������ָ�벻��ֵ����++��ͣ����ΪvalԪ�ش�
//		//3.��ָ�벻����val���±�Ϊ��ָ���val ��ֵ�����ǣ�Ϊ �±�Ϊ��ָ���������ΪvalԪ�أ�����++
//		//4.����ָ�붼������val,��ֵ��Ų������++
//		if (nums[fastIndex] != val)
//		{
//			nums[solwIndex] = nums[fastIndex];
//			solwIndex++;
//		}
//	}
//
//	return solwIndex;
//}

//����˫ָ�루�ƶ�Ԫ���٣��ı���Ԫ��˳��
//1.��ָ����val,��ָ���ҷ�val,�� ��ֵΪ ��
//2.ֱ��left>right,������ȫΪ
//int removeElement(int* nums, int numsSize, int val)
//{
//	int leftIndex = 0;
//	int rightIndex = numsSize-1;
//	while (leftIndex <= rightIndex)
//	{
//		while (leftIndex <= rightIndex && nums[leftIndex] != val)
//		{
//			leftIndex++;
//		}
//		while (leftIndex <= rightIndex && nums[rightIndex] == val)
//		{
//			rightIndex--;
//		}
//		if (leftIndex <= rightIndex)
//			nums[leftIndex++] = nums[rightIndex--];
//	}
//
//	return leftIndex;
//}

//if����while
//int removeElement(int* nums, int numsSize, int val)
//{
//	int leftIndex = 0;
//	int rightIndex = numsSize-1;
//	while (leftIndex <= rightIndex)
//	{
//		if (nums[rightIndex] == val)
//			rightIndex--;
//		else if (nums[leftIndex] == val)
//		{
//			nums[leftIndex++] = nums[rightIndex--];
//		}
//		else
//			leftIndex++;
//	}
//
//	return leftIndex;
//}


//int main()
//{
//	int arr[] = {1,2,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n",removeElement(arr, sz, 1));
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}