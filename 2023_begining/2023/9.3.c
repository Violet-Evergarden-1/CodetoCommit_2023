#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>

//int func(int x)
//{
//	int count = 0;
//	while (x)
//	{
//		count++;
//		x = x & (x - 1);//与运算
//		//-1:10000000 00000000 00000000 00000001
//		//   11111111 11111111 11111111 11111111
//		// 
//		//-2:10000000 00000000 00000000 00000010
//		//   11111111 11111111 11111111 11111110
//
//		//& :11111111 11111111 11111111 11111110
//		//   10000000 00000000 00000000 00000010
//
//		//31:11000000 00000000 00000000 00000000 - 原
//		//   11000000 00000000 00000000 00000000 - 补
//		
//		//   10111111 11111111 11111111 11111111 - 补-1
//		
//
//		//32:10000000 00000000 00000000 00000000 - &补
//		//	 01111111 11111111 11111111 11111111 - &补-1
//		//   0;
//
//	}
//	return count;
//}
//
//int main()
//{
//	printf("%d",func(-1));
//
//	return 0;
//}

//int main()
//{
//	int count = 0;
//	int x = -1;
//	while (x)
//	{
//		count++;
//		x = x >> 1;
//	}
//	//-1:10000000 00000000 00000000 00000001 -原
//	//   11111111 11111111 11111111 11111111 -补
//	//>>:11111111 11111111 11111111 11111111
//
//
//	printf("%d", count);
//
//	return 0;
//}

//int main()
//{
//	int a = 0, b, c, d;
//	//a = (b = (c = 2, d = 3));
//	a = a < a + 1;
//
//	printf("%d ", a);
//	//printf("%d ", b);
//	//printf("%d ", c);
//	//printf("%d ", d);
//
//	return 0;
//}

//int main()
//{
//	int w = 1, x = 2, y = 3, z = 4;
//	printf("%d", w < x ? w : y < z ? y : z);
//
//	return 0;
//}

//int main()
//{
//	int a = 1, b = 2, m = 0, n = 0, k;
//	k = (n = b < a) && (m = a);
//	printf("%d,%d\n", k, m);
//
//	return 0;
//}

//A(i)	B(i)	求和	进位
//0	    0	    0	    0
//0	    1	    1	    0
//1	    0	    1	    0
//1	    1	    0	    1
//(1) 当前位的和值等于 A(i) ^ B(i)
//(2) 进位等于 A(i)& B(i), 进位需要加在计算位的前一位，所以左移1位，即A(i)& B(i) << 1
//所以找出规律 A + B = A ^ B + (A & B) << 1;


//int Add(int num1, int num2) 
//{
//    //进位值
//    int add = num2;
//
//    //不进位的值
//    int sum = num1;
//
//    //进位值==0时，不进位值即为和
//    while (add)
//    {
//        //异或求不进位值
//        int tmp = sum ^ add;
//        //按位与计算进位值
//        add = (sum & add) << 1;
//        sum = tmp;
//    }
//    return sum;
//}



//448. 找到所有数组中消失的数字
//给你一个含 n 个整数的数组 nums ，其中 nums[i] 在区间[1, n] 内。请你找出所有在[1, n] 
//范围内但没有出现在 nums 中的数字，并以数组的形式返回结果。
//输入：nums = [4, 3, 2, 7, 8, 2, 3, 1]
//输出：[5, 6]


//哈希表
//int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
//
//	//维护一个数组（哈希表），初始化为0
//	int arr[100000] = { 0 };
//
//	//遍历原数组，把各元素作为下标赋值哈希表为1
//	for(int i=0;i<numsSize;i++)
//	{
//		arr[nums[i]] = 1;
//	}
//
//	int* ret = (int*)malloc(sizeof(int) * numsSize);
//
//	//遍历哈希表，仍为零的元素对应的下标就是数组中缺少的数字
//	//缺少数字的区间为[1,n],所以对应跳过下标0，结束条件为<=
//	int cur = 0;
//	for(int i=1;i<=numsSize;i++)
//	{
//		if (arr[i] == 0)
//		{
//			ret[cur++] = i;
//		}
//	}
//	*returnSize = cur;
//	return ret;
//}

//哈希表原地修改，空间复杂度由O(N)降为O(1)
//int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) 
//{
//	//遍历原数组，每遇到一个数x，就让 nums[x?1]增加n,增加以后，这些数必然大于n
//	for (int i = 0; i < numsSize; i++)
//	{
//		int x = (nums[i] - 1) % numsSize;
//		nums[x] += numsSize;
//	}
//
//	int* ret = (int*)malloc(sizeof(int) * numsSize);
//
//	//遍历数组，若 nums[i]未大于n，就说明没有遇到过数i+1
//	int cur = 0;
//	for (int i = 0; i < numsSize; i++)
//	{
//		if (nums[i] <= numsSize)
//		{
//			ret[cur++] = i + 1;
//		}
//	}
//	*returnSize = cur;
//	return ret;
//}

//int main()
//{
//	int x = -1;
//	unsigned int y = 2;
//	if (x > y)
//	{
//		printf("x is greater");
//	}
//	else
//	{
//		printf("y is greater");
//	}
//	return 0;
//}

//int main()
//{
//
//	int k, a, b;
//	unsigned int w = 5;
//	double x = 1.42;
//
//	//w += -20;
//	//printf("%d", w);
//
//	//x = x % 3;
//	//pritf("%lld", x);
//
//	return 0;
//}

//int main()
//{
//	int k = 1 ^ (1 << 31 >> 31);
//	//1- 00000000 00000000 00000000 00000001
//	//<< 10000000 00000000 00000000 00000000
//	//>> 11111111 11111111 11111111 11111111
//
//	//^  11111111 11111111 11111111 11111110-补
//	//   10000000 00000000 00000000 00000010-原：-2
//
//	printf("%d\n", k);
//
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	sizeof(i++);
//	printf("%d\n", i);
//
//	return 0;
//}


//485. 最大连续 1 的个数
//给定一个二进制数组 nums ， 计算其中最大连续 1 的个数。
//输入：nums = [1, 1, 0, 1, 1, 1]
//输出：3

//越界，提交不过
//int findMaxConsecutiveOnes(int* nums, int numsSize) 
//{
//	int count = 0, num = 0;
//	for (int i = 0; i < numsSize; i++)
//	{
//		count = 0;
//		while (nums[i] == 1 && i < numsSize)
//		{
//			i++;
//			count++;
//		}
//		
//		num = (count > num ? count : num);
//	}
//
//	return num;
//}

//int findMaxConsecutiveOnes(int* nums, int numsSize)
//{
//	int count = 0, num = 0;
//	for (int i = 0; i < numsSize; i++)
//	{
//		if (nums[i] == 1)
//		{
//			count++;
//		}
//		else
//		{
//			num = (count > num ? count : num);
//			count = 0;
//		}
//	}
//	num = (count > num ? count : num);
//
//	return num;
//}
//
//int main()
//{
//	int arr[] = { 1,1,0,1,1,1,0,1,1 };
//	printf("%d", findMaxConsecutiveOnes(arr, sizeof(arr) / sizeof(arr[0])));
//
//	return 0;
//}


//HJ56 完全数计算
//完全数（Perfect number），又称完美数或完备数，是一些特殊的自然数。
//它所有的真因子（即除了自身以外的约数）的和（即因子函数），恰好等于它本身。
//例如：28，它有约数1、2、4、7、14、28，除去它本身28外，其余5个数相加，
//1 + 2 + 4 + 7 + 14 = 28。
//输入n，请输出n以内(含n)完全数的个数。

//bool isPerfect(int x)
//{
//	int add = 0;
//	for (int i = 1; i < x; i++)
//	{
//		if (x % i == 0)
//			add += i;
//	}
//	if (add == x)
//		return true;
//	else
//		return false;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int count = 0;
//	for (int i = 1; i < n; i++)
//	{
//		if (isPerfect(i))
//			count++;
//	}
//	printf("%d", count);
//
//	return 0;
//}

//int main()
//{
//	char c = 'A';
//	if ('0' <= c <= '9') 
//		printf("YES");
//	else printf("NO");
//	return 0;
//}

//int main()
//{
//	int a = 1, b = 2, c = 1;
//	int d = 0;
//	d = (a++ < b++ < c++);
//
//	printf("%d ", a);
//	printf("%d ", b);
//	printf("%d ", c);
//	printf("%d ", d);
//
//} 

//int main()
//{
//	int n = 1001;
//	int ans = 0;
//	for (int i = 1; i <= n; ++i)
//	{
//		ans ^= i % 3;
//	}
//	printf("%d", ans);
//	return 0;
//}


//数字颠倒
//输入一个整数，将这个整数以字符串的形式逆序输出
//程序不考虑负数的情况，若数字含有0，则逆序形式也含有0，如输入为100，则输出为001

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	if (!n)
//		printf("0");
//	while (n)
//	{
//		printf("%c",n % 10 + '0');
//		n /= 10;
//	}
//	
//	return 0;
//}


//HJ31 单词倒排
//对字符串中的所有单词进行倒排。
//1、构成单词的字符只有26个大写或小写英文字母；
//2、非构成单词的字符均视为单词间隔符；
//3、要求倒排后的单词间隔符以一个空格表示；如果原字符串中相邻单词间有多个间隔符时，
//倒排转换后也只允许出现一个空格间隔符；
//4、每个单词最长20个字母；

//int main()
//{
//	char str[100][22] = {0};
//	int i = 0;
//	int x;
//	while (1)
//	{
//		x=scanf("%[A-z]s", str[i]);
//		if (getchar() == '\n')
//			break;
//		if (x)
//			i++;
//	} 
//	for (i; i >= 0; i--)
//	{
//		printf("%s ", str[i]);
//
//	}
//
//	return 0;
//}