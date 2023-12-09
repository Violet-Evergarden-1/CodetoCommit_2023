#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
using namespace std;

//137. 只出现一次的数字 II
//https://leetcode.cn/problems/single-number-ii/

//位运算 除答案外数组中每个元素第i位的和都是3的倍数（1+1+1 0+0+0） 和%3即为答案的第i位
//class Solution {
//public:
//    int singleNumber(vector<int>& nums)
//    {
//        int ans = 0;
//        for (int i = 0; i < 32; i++)
//        {
//            int total = 0;
//            for (auto num : nums)
//            {
//                //取出每一位求和
//                total += (num >> i & 1);
//            }
//            //按位或赋值每一位
//            ans |= (total % 3 << i);
//        }
//        return ans;
//    }
//};
//
//int main()
//{
//    vector<int> nums = { 0,1,0,1,0,1,99 };
//    Solution s1;
//    cout << s1.singleNumber(nums);
//
//    return 0;
//}

//260. 只出现一次的数字 III
//https://leetcode.cn/problems/single-number-iii/description/
//       s = 101100
//      ~s = 010011
//(~s) + 1 = 010100 // 根据补码的定义，这就是 -s   效果：s 的最低 1 左侧取反，右侧不变
//  s & -s = 000100 // lowbit

//class Solution {
//public:
//    vector<int> singleNumber(vector<int>& nums)
//    {
//        //使用取符号需要unsigned  C++ 中对 INT_MIN 取负号是未定义行为
//        //（在其它语言，例如 Java 中是有定义的，对 int 最小值取负号的结果还是最小值）
//        int cur = 0;
//        for (auto num : nums)
//        {
//            cur ^= num;
//        }
//
//        //int lowbit = cur & -cur;
//        //或者对INT_MIN 单独处理
//        //int lowbit = (cur == INT_MIN ? cur : cur & (-cur));
//        int i = 0;
//        for (i = 0; i < 32; i++)
//        {
//            if (cur >> i & 1)
//            {
//                break;
//            }
//        }
//
//        int ans1 = 0, ans2 = 0;
//        for (auto num : nums)
//        {
//            //if (num & lowbit)
//            if (num >> i & 1)
//                ans1 ^= num;
//            else
//                ans2 ^= num;
//        }
//        vector<int> ret({ ans1, ans2 });
//        return ret;
//    }
//};
//
//int main()
//{
//    Solution s1;
//
//    vector<int> nums({ 1,2,1,-3,2,-5 });
//    vector<int >ret = s1.singleNumber(nums);
//
//    for (auto num : ret)
//    {
//        cout << num << ' ';
//    }
//}

#include <iostream>
using namespace std;

int countQueueVarieties(int numof50, int numof100)
{
    if (numof100 == 0)
    {
        return 1;
    }
    else if (numof50 < numof100)
    {
        return 0;
    }
    else
    {
        return countQueueVarieties(numof50, numof100 - 1) + countQueueVarieties(numof50 - 1, numof100);
    }
}

int main()
{
    int numof50 = 20, numof100 = 10;
    
    cout << "不同排队种数为：" << countQueueVarieties(numof50, numof100);
    return 0;
}
