#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//����ļ���
//���� s ������ 1 �� n �����������ҵ��ǣ���Ϊ���ݴ��󣬵��¼�������ĳһ�����ָ����˳��˼����������
//��һ�����ֵ�ֵ�����¼��� ��ʧ��һ������ ���� ��һ�������ظ� ��
//����һ������ nums �����˼��� S ���������Ľ����
//�����ҳ��ظ����ֵ����������ҵ���ʧ�����������������������ʽ���ء�
//ʾ�� 1��
//���룺nums = [1, 2, 2, 4]
//�����[2, 3]
//ʾ�� 2��
//���룺nums = [1, 1]
//�����[1, 2]


//int* findErrorNums(int* nums, int numsSize, int* returnSize)
//{
//    int x = 0;
//    int i = 0;
//
//    //��������0-n���õ���ʧ���ֺ��ظ����ֵ����
//    for (i = 0; i < numsSize; i++)
//        x = x ^ nums[i];
//    for (i = 1; i <= numsSize; i++)
//        x = x ^ i;
//
//    //��ò�ͬλ
//    for (i = 0; i < 32; i++)
//    {
//        if ((x >> i) & 1 == 1)
//            break;
//    }
//    int dif = i;
//
//
//    int ret1 = 0, ret2 = 0;
//    //�������
//    for (i = 0; i < numsSize; i++)
//    {
//        if ((nums[i] >> dif) & 1)
//            ret1 = ret1 ^ nums[i];
//        else
//            ret2 = ret2 ^ nums[i];
//    }
//    for (i = 1; i <= numsSize; i ++)
//    {
//        if ((i >> dif) & 1 == 1)
//            ret1 = ret1 ^ i;
//        else
//            ret2 = ret2 ^ i;
//    }
//
//    int* ret = (int*)malloc(sizeof(int) * 2);
//    *returnSize = 2;
//
//    //�������������ظ����ֺ�ȱʧ����
//    for (i = 0; i < numsSize; i++)
//    {
//        if (nums[i]==ret1)
//        {
//
//        }
//        else if (nums[i] == ret2)
//        {
//            ret[0] = ret2;
//            ret[1] = ret1;
//        }
//    }
//
//    return ret;
//}
//
//int main()
//{
//    int arr[] = { 1,2,3,3,5 };
//    int sz = sizeof(arr)/sizeof(arr[0]);
//    int retsz = 0;
//    int* ret = findErrorNums(arr, sz, &retsz);
//
//    printf("%d %d\n", ret[0], ret[1]);
//
//    return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	while (n--)
//	{
//		char key[100];
//		scanf("%s", key);
//
//		if (*key >= '0' && *key <= '9')
//		{
//			printf("NO\n");
//			continue;
//		}
//
//		int len = strlen(key);
//		if (len < 8)
//		{
//			printf("NO\n");
//			continue;
//		}
//
//		int i = 0;
//		int flag = 0;
//		while (len--)
//		{
//			if (*(key + i) > 'A' && *(key + i) < 'z')
//				flag = 1;
//			i++;
//		}
//		if (!flag)
//		{
//			printf("NO\n");
//			continue;
//		}
//
//		printf("YES\n");
//	}
//	return 0;
//}

