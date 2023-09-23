#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdbool.h>

//��Ч������https://leetcode.cn/problems/valid-parentheses/description/
//����һ��ֻ���� '('��')'��'{'��'}'��'['��']' ���ַ��� s ���ж��ַ����Ƿ���Ч��
//��Ч�ַ��������㣺
//�����ű�������ͬ���͵������űպϡ�
//�����ű�������ȷ��˳��պϡ�
//ÿ�������Ŷ���һ����Ӧ����ͬ���͵������š�


//typedef char STDataType;
//typedef struct Stack
//{
//	STDataType* a;
//	int top;
//	int capacity;
//}ST;
//
//void STInit(ST* ps)
//{
//	assert(ps);
//
//	ps->a = NULL;
//	ps->top = 0;
//	ps->capacity = 0;
//}
//
//void STDestory(ST* ps)
//{
//	assert(ps);
//
//	free(ps->a);
//	ps->a = NULL;
//	ps->top = 0;
//	ps->capacity = 0;
//}
//
//void STPush(ST* ps, STDataType x)
//{
//	assert(ps);
//
//	if (ps->top == ps->capacity)
//	{
//		int newCapacity = ps->capacity == 0 ? 4 : 2 * ps->capacity;
//		STDataType* tmp = (STDataType*)realloc(ps->a, sizeof(STDataType) * newCapacity);
//		if (tmp == NULL)
//		{
//			perror("realloc failed");
//			exit(-1);
//		}
//
//		ps->a = tmp;
//		ps->capacity = newCapacity;
//	}
//
//	ps->a[ps->top] = x;
//	ps->top++;
//}
//
//void STPop(ST* ps)
//{
//	assert(ps);
//	//��֤ջ��Ϊ��
//	assert(ps->top != 0);
//
//	ps->top--;
//}
//
//STDataType STTop(ST* ps)
//{
//	assert(ps);
//	//��֤ջ��Ϊ��
//	assert(ps->top != 0);
//
//	return ps->a[ps->top - 1];
//}
//
//
//bool STEmpty(ST* ps)
//{
//	assert(ps);
//
//	return ps->top == 0;
//}
//
//bool isValid(char* s)
//{
//	ST st;
//	STInit(&st);
//
//	while (*s)
//	{
//		//Ϊ��������ջ
//		if (*s == '(' || *s == '[' || *s == '{')
//			STPush(&st, *s);
//
//		//Ϊ�����Ŷ�ȡ����ջ
//		else
//		{
//			//������ƥ�䣨�����ű������Ŷࣩ
//			if (STEmpty(&st))
//			{
//				STDestory(&st);
//				return false;
//			}
//
//			char topVal = STTop(&st);
//			STPop(&st);
//			if (*s == ')' && topVal == '('
//				|| *s == ']' && topVal == '['
//				|| *s == '}' && topVal == '{');
//
//			//���Ͳ�ƥ��
//			else
//			{
//				STDestory(&st);
//				return false;
//			}
//		}
//		s++;
//	}
//
//
//	//ջ��Ϊ�գ�������ƥ�䣨�����ű������Ŷࣩ
//	bool ret = STEmpty(&st);
//	STDestory(&st);
//	return ret;
//}

//int main()
//{
//	int a = 3;
//	printf("%d\n", (a += a -= a * a));
//	return 0;
//}


//�Ǹ�����https://www.nowcoder.com/practice/6abde6ffcc354ea1a8333836bd6876b8?tpId=37&&tqId=21320&rp=1&ru=/ta/huawei&qru=/ta/huawei/question-ranking
//��������Ҫ�������������n��Ȼ������n�����������Ϊn�������и����ĸ�������������������ƽ��ֵ���������һλС����
//0��������������Ҳ���Ǹ�������������㡣���û����������ƽ��ֵΪ0��
//���ݷ�Χ��1��n ��2000  �����������������Oval�O��1000
//
//����������
//��������һ��������n��
//Ȼ������n��������
//
//���������
//��������ĸ�������������������ƽ��ֵ��


//int main() {
//    int n;
//    while (scanf("%d", &n) != EOF)
//    {
//        int count1 = 0, count2 = 0, num = 0;
//        long long add = 0;
//        int i = 0;
//        while (n--)
//        {
//            scanf("%d", &num);
//            if (num > 0)
//            {
//                add += num;
//                count1++;
//            }
//            if (num < 0)
//            {
//                count2++;
//            }
//        }
//
//        //������Ҫ��С��������Ż���С��
//        float average = add * 1.0 / count1;
//
//        printf("%d ", count2);
//        if (count1 == 0)
//            printf("0.0\n");
//        else
//            printf("%.1f\n", average);
//    }
//    return 0;
//}


//��ת�������С����
//��һ������Ϊ n �ķǽ������飬����[1, 2, 3, 4, 5]������������ת������һ�������ʼ�����ɸ�
//Ԫ�ذᵽ�����ĩβ�����һ����ת���飬��������[3, 4, 5, 1, 2]������[4, 5, 1, 2, 3]�����ġ�
//���ʣ���������һ����ת���飬�������е���Сֵ��
//���ݷ�Χ��1��n��10000������������Ԫ�ص�ֵ:0��val��10000
//Ҫ�󣺿ռ临�Ӷȣ�O(1) ��ʱ�临�Ӷȣ�O(logn)


//���� ʱ�临�Ӷ�O(N)
//int minNumberInRotateArray(int* nums, int numsLen)
//{
//    int i = 0;
//    while (--numsLen)
//    {
//        if (nums[i] > nums[i + 1])
//            return nums[i + 1];
//        else
//            i++;
//    }
//    return nums[0];
//}


//���ֲ��� ʱ�临�Ӷ�O(log N)
//int minNumberInRotateArray(int* nums, int numsLen)
//{
//    int left = 0;
//    int right = numsLen - 1;
//
//    int middle = (left & right) + (left ^ right) / 2;
//    while (left < right)
//    {
//        //ֻ��һ�����Ƚϣ�����ģ���������
//        if (nums[middle] > nums[right])
//            left = middle + 1;
//        else if (nums[middle] < nums[right])
//            right = middle;
//
//        //��middle��rightָ���ֵ���ʱ���޷��ж����ĸ�����
//        //ͨ��right--��С���ҷ�Χ
//        else
//            right--;
//        middle = (left & right) + (left ^ right) / 2;
//    }
//    return nums[left];
//}
//
//int main()
//{
//    int arr[5] = { 3,4,5,1,2 };
//    printf("%d",minNumberInRotateArray(arr, sizeof(arr)/sizeof(arr[0])));
//
//    return 0;
//}