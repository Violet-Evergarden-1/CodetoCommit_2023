#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


//int main()
//{
//	int a[12] = { 1,2,3,4,5,6,7,8,9,10,11,12 }, * p[4], i;
//	for (i = 0; i < 4; i++)
//		p[i] = &a[i * 3];
//	printf("%d\n",p[3][2]);
//	return 0;
//}

//int main()
//{
//	int x = 0;
//	printf("%d\n", ((x = 4 * 5, x * 5), x + 5));
//	return 0;
//}



//728. �Գ���
//�Գ��� ��ָ���Ա���������ÿһλ������������
//���磬128 ��һ�� �Գ��� ����Ϊ 128 % 1 == 0��128 % 2 == 0��128 % 8 == 0��
//�Գ��� ��������� 0 ��
//������������ left �� right ������һ���б��б��Ԫ���Ƿ�Χ[left, right] �����е� �Գ��� 
//���룺left = 47, right = 85
//�����[48, 55, 66, 77]


//�ݹ�
//void isSelfdivisor(int src,int x,int* ret)
//{
//	//��ֹ�ݹ�
//	if (x == 0)
//		return;
//
//	//����а���0�����֣��ڵݹ�����У�x���ϳ���10������һ��x��10�ı���
//	//���������ֹ�ݹ��жϺ��棬 ����x==0ʱҲ����
//	else if (x % 10 == 0)
//	{
//		*ret = 1;
//		return;
//	}
//
//	else
//	{
//		*ret += src % (x % 10);
//
//		//��ԭ���ݡ���ȥ��λ�����ݡ�ret���뺯�����еݹ�
//		isSelfdivisor(src,x / 10,ret);
//		return;
//	}
//}
//
//
//int* selfDividingNumbers(int left, int right, int* returnSize) 
//{
//	int* arr = (int*)malloc(sizeof(int) * (right - left + 1));
//
//	int i = 0;
//	for (int cur = left; cur <= right; cur++)
//	{
//
//		//����ret,��ȡ��ַ���뺯��
//		int ret = 0;
//		isSelfdivisor(cur, cur, &ret);
//
//		//���Ϊ0����ÿ��ȡ�඼Ϊ0��Ϊ�Գ���
//		if (ret==0)
//		{
//			arr[i++] = cur;
//		}
//	}
//	*returnSize = i;
//
//	return arr;
//}


//ѭ��
//bool isSelfDividing(int num)
//{
//	int tmp = num;
//	while (tmp > 0)
//	{
//		//digitΪ��ȡ����Сλ����
//		int digit = tmp % 10;
//
//		//digitΪ0˵��ԭ���ֺ�0��������
//		if (digit == 0 || num % digit != 0)
//		{
//			return false;
//		}
//		tmp /= 10;
//	}
//	return true;
//}
//
//int* selfDividingNumbers(int left, int right, int* returnSize) 
//{
//	int* arr = (int*)malloc(sizeof(int) * (right - left + 1));
//
//	int pos = 0;
//	for (int i = left; i <= right; i++)
//	{
//		if (isSelfDividing(i))
//		{
//			arr[pos++] = i;
//		}
//	}
//	*returnSize = pos;
//
//	return arr;
//}
//
//
//int main()
//{
//	int returnSize = 0;
//	int* arr = selfDividingNumbers(1, 22, &returnSize);
//
//	for (int i = 0; i < returnSize; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	free(arr);
//
//	return 0;
//}



//238. ��������������ĳ˻�
//����һ���������� nums������ ���� answer ������ answer[i] ���� nums �г� nums[i] 
//֮�������Ԫ�صĳ˻� ��
//��Ŀ���� ��֤ ���� nums֮������Ԫ�ص�ȫ��ǰ׺Ԫ�غͺ�׺�ĳ˻�����  32 λ ������Χ�ڡ�
//�벻Ҫʹ�ó��������� O(n) ʱ�临�Ӷ�����ɴ��⡣
//����: nums = [1, 2, 3, 4]
//��� : [24, 12, 8, 6]



//int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
//
//    //�����������飬�ֱ����iλ��ʱi���Ԫ�صĳ˻����ұ�Ԫ�صĳ˻�
//    int L[100000] = { 1 };
//    int R[100000] = { 1 };
//
//    L[0] = 1;//��ʼ��L[0]=1
//    
//    //����ÿ��i,L[i]������L[i-1]*nums[i-1]
//    for (int i = 1; i < numsSize; i++)
//    {
//        L[i] = L[i - 1] * nums[i - 1];
//    }
//
//
//    R[numsSize-1] = 1;//��ʼ��R[numsSize-1]=1
//
//    //����ÿ��i,L[i]������L[i+1]*nums[i+1],����Ҫ�����������
//    for (int i = numsSize - 2; i >= 0; i--)
//    {
//        R[i] = R[i + 1] * nums[i + 1];
//    }
//    
//    int* ans = (int*)malloc(sizeof(int) * numsSize);
//
//    //ans[i]��ΪL[i]*R[i]
//    for (int i = 0; i < numsSize; i++)
//    {
//        ans[i] = L[i] * R[i];
//    }
//    *returnSize = numsSize;
//
//    return ans;
//}

//�ռ临�Ӷ�o(1)�ⷨ
//int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
//
//    //��������飬�ȴ洢iλ��ʱi���Ԫ�صĳ˻�
//    //�ڶ��α�����������R�洢i�ұ�Ԫ�س˻��������
//    int* ans = (int*)malloc(sizeof(int) * numsSize);
//    
//    ans[0] = 1;
//
//    //����ÿ��i,L[i]������L[i-1]*nums[i-1]
//    for (int i = 1; i < numsSize; i++)
//    {
//        ans[i] = ans[i - 1] * nums[i - 1];
//    }
//    
//    int R = 1;
//    for (int i = numsSize - 1; i >= 0; i--)
//    {
//        ans[i] = R * ans[i];
//        R *= nums[i];
//    }
//
//    *returnSize = numsSize;
//
//    return ans;
//}
//
//int main()
//{
//    int returnSize = 0;
//    int nums[4] = { 1,2,3,4 };
//    productExceptSelf(nums, sizeof(nums)/sizeof(nums[0]), &returnSize);
//
//    return 0;
//}