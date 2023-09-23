#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdbool.h>

//有效的括号https://leetcode.cn/problems/valid-parentheses/description/
//给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串 s ，判断字符串是否有效。
//有效字符串需满足：
//左括号必须用相同类型的右括号闭合。
//左括号必须以正确的顺序闭合。
//每个右括号都有一个对应的相同类型的左括号。


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
//	//验证栈不为空
//	assert(ps->top != 0);
//
//	ps->top--;
//}
//
//STDataType STTop(ST* ps)
//{
//	assert(ps);
//	//验证栈不为空
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
//		//为左括号入栈
//		if (*s == '(' || *s == '[' || *s == '{')
//			STPush(&st, *s);
//
//		//为右括号读取、出栈
//		else
//		{
//			//数量不匹配（右括号比左括号多）
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
//			//类型不匹配
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
//	//栈不为空，数量不匹配（左括号比右括号多）
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


//记负均正https://www.nowcoder.com/practice/6abde6ffcc354ea1a8333836bd6876b8?tpId=37&&tqId=21320&rp=1&ru=/ta/huawei&qru=/ta/huawei/question-ranking
//首先输入要输入的整数个数n，然后输入n个整数。输出为n个整数中负数的个数，和所有正整数的平均值，结果保留一位小数。
//0即不是正整数，也不是负数，不计入计算。如果没有正数，则平均值为0。
//数据范围：1≤n ≤2000  ，输入的整数都满足∣val∣≤1000
//
//输入描述：
//首先输入一个正整数n，
//然后输入n个整数。
//
//输出描述：
//输出负数的个数，和所有正整数的平均值。


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
//        //除法中要有小数，结果才会有小数
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


//旋转数组的最小数字
//有一个长度为 n 的非降序数组，比如[1, 2, 3, 4, 5]，将它进行旋转，即把一个数组最开始的若干个
//元素搬到数组的末尾，变成一个旋转数组，比如变成了[3, 4, 5, 1, 2]，或者[4, 5, 1, 2, 3]这样的。
//请问，给定这样一个旋转数组，求数组中的最小值。
//数据范围：1≤n≤10000，数组中任意元素的值:0≤val≤10000
//要求：空间复杂度：O(1) ，时间复杂度：O(logn)


//遍历 时间复杂度O(N)
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


//二分查找 时间复杂度O(log N)
//int minNumberInRotateArray(int* nums, int numsLen)
//{
//    int left = 0;
//    int right = numsLen - 1;
//
//    int middle = (left & right) + (left ^ right) / 2;
//    while (left < right)
//    {
//        //只与一个数比较，才能模拟所有情况
//        if (nums[middle] > nums[right])
//            left = middle + 1;
//        else if (nums[middle] < nums[right])
//            right = middle;
//
//        //当middle与right指向的值相等时，无法判断在哪个区间
//        //通过right--缩小查找范围
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