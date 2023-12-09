#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
using namespace std;

//137. ֻ����һ�ε����� II
//https://leetcode.cn/problems/single-number-ii/

//λ���� ������������ÿ��Ԫ�ص�iλ�ĺͶ���3�ı�����1+1+1 0+0+0�� ��%3��Ϊ�𰸵ĵ�iλ
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
//                //ȡ��ÿһλ���
//                total += (num >> i & 1);
//            }
//            //��λ��ֵÿһλ
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

//260. ֻ����һ�ε����� III
//https://leetcode.cn/problems/single-number-iii/description/
//       s = 101100
//      ~s = 010011
//(~s) + 1 = 010100 // ���ݲ���Ķ��壬����� -s   Ч����s ����� 1 ���ȡ�����Ҳ಻��
//  s & -s = 000100 // lowbit

//class Solution {
//public:
//    vector<int> singleNumber(vector<int>& nums)
//    {
//        //ʹ��ȡ������Ҫunsigned  C++ �ж� INT_MIN ȡ������δ������Ϊ
//        //�����������ԣ����� Java �����ж���ģ��� int ��Сֵȡ���ŵĽ��������Сֵ��
//        int cur = 0;
//        for (auto num : nums)
//        {
//            cur ^= num;
//        }
//
//        //int lowbit = cur & -cur;
//        //���߶�INT_MIN ��������
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
    
    cout << "��ͬ�Ŷ�����Ϊ��" << countQueueVarieties(numof50, numof100);
    return 0;
}
