#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//int fun(int x)
//{
//	return (x == 1 ? 1 : (x + fun(x - 1)));
//}
//
//
//int main()
//{
//	printf("%d", fun(10));
//
//	return 0;
//}

//HJ34 图片整理
//Lily上课时使用字母数字图片教小朋友们学习英语单词，每次都需要把这些图片按照大小
//（ASCII码值从小到大）排列收好。请大家给Lily帮忙，通过代码解决。 
//Lily使用的图片使用字符"A"到"Z"、"a"到"z"、"0"到"9"表示。 
// 
//数据范围：每组输入的字符串长度满足
//输入描述:一行，一个字符串，字符串中的每个字符表示一张Lily使用的图片。
//输出描述:Lily的所有图片按照从小到大的顺序输出
//示例1
// 
//输入
//Ihave1nose2hands10fingers
//输出
//0112Iaadeeefghhinnnorsssv

//int cmp(const void* p1, const void* p2)
//{
//    return (*(char*)p1 - *(char*)p2);
//}
//
//int main() 
//{
//    char str[1000]="";
//
//    //fgets(str, 1000, stdin);
//    //会读取\n导致格式不正确
//
//    scanf("%[^\n]s", str);
//    //或者gets(str);
//
//    qsort(str, strlen(str), sizeof(char), cmp);
//    puts(str);
//    
//    return 0;
//}



//724. 寻找数组的中心下标
//给你一个整数数组 nums ，请计算数组的 中心下标 。
//数组 中心下标 是数组的一个下标，其左侧所有元素相加的和等于右侧所有元素相加的和。
//如果中心下标位于数组最左端，那么左侧数之和视为 0 ，因为在下标的左侧不存在元素。
//这一点对于中心下标位于数组最右端同样适用。
//如果数组有多个中心下标，应该返回 最靠近左边 的那一个。如果数组不存在中心下标，返回-1


////先求数组总和total，左和为Lsum，左右相等即为Lsum+Rsum+nums[i]==total;
////即2*Lsum+nums[i]==total;
//int pivotIndex(int* nums, int numsSize) 
//{
//	int total = 0;
//	for (int i = 0; i < numsSize; i++)
//		total += nums[i];
//
//	int Lsum = 0;
//	for (int i = 0; i < numsSize; i++)
//	{
//		if (2 * Lsum + nums[i] == total)
//			return i;
//		Lsum += nums[i];
//	}
//	return -1;
//}

//#define size 10
//char str1[size], str2[size + 2];
//
//int main()
//{
//	int num['13'] = { 7,8 };
//	int n = 5; int a[n][n + 2];
//
//	return 0;
//}


//HJ10 字符个数统计
//编写一个函数，计算字符串中含有的不同字符的个数。字符在 ASCII 码范围内(0~127 ，
//包括 0 和 127)，换行表示结束符，不算在字符里。不在范围内的不作统计。
//多个相同的字符只计算一次
//例如，对于字符串 abaca 而言，有 a、b、c 三种不同的字符，因此输出 3 。
//
//输入描述：
//输入一行没有空格的字符串。
//输出描述：
//输出 输入字符串 中范围在(0~127，包括0和127)字符的种数


////1.排序字符串，定义前指针prev记录上一个记录的字符，一样则跳过
//int cmp(const void* p1, const void* p2)
//{
//	return (*(char*)p1 - *(char*)p2);
//}
//
//int main()
//{
//	char str[501] = "0";
//	scanf("%s", str);
//	qsort(str, strlen(str), sizeof(char), cmp);
//
//	int i = 0, prev = 0, count = 0;
//	for(i=0;i<strlen(str);i++)
//	{
//		//只有第一次进入循环,或者i对应的字符不等于prev时，count++，更新prev
//		if (i == 0 || i > 0 && str[i] != prev)
//		{
//			count++;
//			prev = str[i];
//		}
//	}
//
//	printf("%d", count);
//
//	return 0;
//}

//2.创建一个128个元素的数组，对应128个ASCII码值，赋初始值为0，
//遍历字符串，把字符对应的ASCII码值作为下标赋值1,
//对应值为0的，即为第一次出现，count++，值为1的，不是第一次，跳过

//int main()
//{
//	char str[501] = "0";
//	int asc[128] = { 0 };
//	scanf("%s", str);
//
//	int count = 0;
//	for (int i = 0; i < strlen(str); i++)
//	{
//		if (asc[(int)str[i]] == 0)
//		{
//			asc[(int)str[i]] = 1;
//			count++;
//		}
//	}
//
//	printf("%d", count);
//
//	return 0;
//}


//169. 多数元素
//给定一个大小为 n 的数组 nums ，返回其中的多数元素。多数元素是指在数组中出现次数 
//大于 ⌊ n / 2 ⌋ 的元素。你可以假设数组是非空的，并且给定的数组总是存在多数元素。
//示例 1：
//输入：nums = [3, 2, 3]
//输出：3
//示例 2：
//输入：nums = [2, 2, 1, 1, 1, 2, 2]
//输出：2

//同归于尽相消
//int majorityElement(int* nums, int numsSize)
//{
//	//维护一个候选众数 candidate 和它出现的次数 count。
//	//初始时 candidate 可以为任意值，count 为 0
//	int i = 0, candidate = 0, count = 0;
//
//	for (i = 0; i < numsSize; i++)
//	{
//
//		//如果 count 的值为 0，将 x 的值赋予 candidate
//		//如果candidate数量不够多（即count==0），就会有新的数据代替candidate
//		if (count==0)
//		{
//			candidate = nums[i];
//			count++;
//		}
//
//		//如果 x 与 candidate 相等，那么计数器 count ++
//		else if (candidate == nums[i])
//		{
//			count++;
//		}
//
//		//如果 x 与 candidate 不等，那么计数器 count --
//		else if (candidate != nums[i])
//		{
//			count--;
//		}
//	}
//	return candidate;
//}