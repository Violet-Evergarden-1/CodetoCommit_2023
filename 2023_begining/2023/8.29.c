#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

//int main()
//{
//	char ch;
//	while ((ch = getchar()) != '\n')
//	{
//		if (ch % 2 != 0 && (ch >= 'a' && ch <= 'z'))
//			ch = ch - 'a' + 'A';
//		putchar(ch);
//	}
//	printf("\n");
//	return 0;
//}


//���������������г��ֵĴ���
//����һ������Ϊ n �ķǽ��������һ���Ǹ������� k ��Ҫ��ͳ�� k �������г��ֵĴ���
//
//���ݷ�Χ��0��n��1000, 0��k��100��������ÿ��Ԫ�ص�ֵ����0��val��100
//Ҫ�󣺿ռ临�Ӷ�O(1)��ʱ�临�Ӷ�O(logn)

//int GetNumberOfK(int* nums, int numsLen, int k) {
//    if (numsLen == 0)
//        return 0;
//    int left = 0, right = numsLen - 1;
//    int middle = (left + right) / 2;
//    while (left < right)
//    {
//        if (nums[middle] < k)
//        {
//            left = middle + 1;
//        }
//        else
//            right = middle ;
//        middle = (left + right) / 2;
//    }
//
//    int count = 0;
//    int i = middle;
//    if (nums[i] == k)
//    {
//        while (nums[i] == k)
//        {
//            count++;
//            i--;
//        }
//        i = middle + 1;
//        while (nums[i] == k)
//        {
//            count++;
//            i++;
//        }
//    }
//    return count;
//}


//����ת��
//����ת������дһ��������ȷ����Ҫ�ı伸��λ���ܽ�����Aת������B��
//ʾ��1 :
//���룺A = 29 ������0b11101��, B = 15������0b01111��
//�����2

//int convertInteger(int A, int B) {
//	int i = 0, count = 0;
//	int c = A ^ B;
//	for (i = 0; i < 32; i++)
//	{
//		if (c >> i & 1 == 1)
//			count++;
//	}
//	return count;
//}

//int main()
//{
//	int a = 1;
//	for (int i = 0; i || i++ < 5;)
//	{
//		printf("%d\n", a++);
//		Sleep(1000);
//	}
//	return 0;
//}

//747. �������������������������
//����һ���������� nums ���������Ǵ��� Ψһ�� һ��������� ��
//�����ҳ������е����Ԫ�ز�������Ƿ� ������������ÿ���������ֵ����� ��
//����ǣ��򷵻� ���Ԫ�ص��±� �����򷵻� - 1 ��
//���룺nums = [3, 6, 1, 0]
//�����1
//���ͣ�6 ���������������������е�����������6 ����������������Ԫ�ص�������
//6 ���±��� 1 �����Է��� 1 ��

//int dominantIndex(int* nums, int numsSize) {
//	int max = nums[0];
//	int ret = 0;
//
//	for (int i = 0; i < numsSize; i++)
//	{
//		if (nums[i] > max)
//		{
//			max = nums[i];
//			ret = i;
//		}
//	}
//
//	for (int i = 0; i < numsSize; i++)
//	{
//		if (i == ret)
//			continue;
//		if (nums[i] * 2 > max)
//			return -1;
//	}
//
//	return ret;
//}
//
//int main()
//{
//	int arr[] = {3, 6, 1, 0};
//	printf("%d", dominantIndex(arr, sizeof(arr) / sizeof(arr[0])));
//
//	return 0;
//}


//349. ��������Ľ���
//������������ nums1 �� nums2 ������ ���ǵĽ��� ���������е�ÿ��Ԫ��һ���� Ψһ �ġ�
//���ǿ��� ��������������˳�� ��
//���룺nums1 = [1, 2, 2, 1], nums2 = [2, 2]
//�����[2]


//�����˫ָ��Ƚ���ȣ�������prev��¼�ϴμ���𰸵����飬��֤����Ԫ��Ψһ
//int cmp(const void* p1 , const void* p2)
//{
//	return *(int*)p1 - *(int*)p2;
//}
//
//int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
//
//	//����
//	qsort(nums1, nums1Size, sizeof(int), cmp);
//	qsort(nums2, nums2Size, sizeof(int), cmp);
//
//	int* ret = (int*)malloc(sizeof(int) * (nums1Size+nums2Size));
//
//	int i = 0, idx1 = 0, idx2 = 0;
//	int prev = 0;
//	while (idx1 < nums1Size && idx2 < nums2Size)
//	{
//
//		//��һ����Ȳ���prev�Ƚϣ�����ֵprev,һ�κ���prev�Ƚ������ظ���
//		if (nums1[idx1] == nums2[idx2])
//		{
//			if (i == 0 || (i != 0 && nums1[idx1] != prev))
//				{
//					ret[i++] = nums1[idx1];
//					prev = nums1[idx1];
//				}
//			idx1++;
//			idx2++;
//		}
//
//		//�������ֵ��С��ָ��++
//		else
//			(nums1[idx1] < nums2[idx2] ? idx1++ : idx2++);
//	}
//
//	*returnSize = i;
//	return ret;
//}
//
//int main()
//{
//
//	int arr1[] = { 1,2,2,1 };
//	int arr2[] = { 2,2 };
//	int returnSize = 0;
//	int* arr = NULL;
//		
//	arr = intersection(arr1, sizeof(arr1) / sizeof(arr1[0]), arr2, 
//		sizeof(arr2) / sizeof(arr2[0]),& returnSize);
//	
//	for (int i = 0; i < returnSize; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}



//int main() {
//    char str[] = "Gene\0ius";
//    print(str);
//    return 0;
//}
//
//print(char* s) {
//    if (*s) {
//        print(++s);
//        printf("%c", *s);
//    }
//}

