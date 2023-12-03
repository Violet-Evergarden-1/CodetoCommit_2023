#include<iostream>
#include<string>
#include<vector>
using namespace std;

//反转字符串 II
//https://leetcode.cn/problems/reverse-string-ii/

//解1：分情况讨论
//class Solution {
//public:
//    string reverseStr(string s, int k) {
//        string::iterator begin = s.begin();
//        for (; begin + k <= s.end(); begin += 2 * k)
//        {
//            reverse(begin, begin + k);
//        }
//        if (begin + k > s.end())
//        {
//            reverse(begin, s.end());
//        }
//        return s;
//    }
//};

//解2：
//class Solution {
//public:
//    string reverseStr(string s, int k) {
//        for (int i = 0; i < s.size(); i += 2 * k)
//        {
//            reverse(s.begin() + i, min(s.begin() + i + k, s.end()));
//        }
//        return s;
//    }
//};


//反转字符串中的单词 III
//https://leetcode.cn/problems/reverse-words-in-a-string-iii/description/

//class Solution
//{
//public:
//    string reverseWords(string s)
//    {
//        size_t pos = 0;
//        for (size_t i = 0; i <= s.size(); i++)
//        {
//            if (s[i] == ' ' || s[i] == '\0')
//            {
//                reverse(s.begin() + pos, s.begin() + i);
//                pos = i + 1;
//            }
//        }
//        return s;
//    }
//};
//
//int main()
//{
//    Solution s;
//    string s1("Mr Ding");
//    cout << s.reverseWords(s1) << endl;
//    cout << s1;
//
//    return 0;
//}



//43. 字符串相乘
//https://leetcode.cn/problems/multiply-strings/description/

//解1:取字符串1中的每个数字依次与字符串2的所有数字相乘，结果保存到字符串cur中，把每次的cur相加// 
//时间复杂度：O(N^2)
//空间复杂度：O(N)

//class Solution 
//{
//public:
//    string multiply(string num1, string num2)
//    {
//        if (num1 == "0" || num2 == "0")
//            return "0";
//        int next = 0, end1 = num1.size() - 1; 
//        string cur, ret;
//        for (int i = 0; i < num1.size(); i++)
//        {
//            cur.erase();
//            for (int j = 0; j < i; j++)
//            {
//                cur += '0';
//            }
//            int val1 = num1[end1--] - '0', next = 0;
//
//            int end2 = num2.size() - 1;
//            while (end2 >= 0)
//            {
//                int val2 = num2[end2--] - '0';
//                int val = val1 * val2 + next;
//                next = val / 10;
//                val %= 10;
//
//                cur += val + '0';
//            }
//            if (next != 0)
//                cur += next + '0';
//
//            reverse(cur.begin(), cur.end());
//
//            ret = addStrings(cur, ret);
//        }
//        return ret;
//    }
//
//    string addStrings(string num1, string num2)
//    {
//        int end1 = num1.size() - 1, end2 = num2.size() - 1;
//        string ret;
//
//        int next = 0;
//        while (end1 >= 0 || end2 >= 0)
//        {
//            int val1 = 0, val2 = 0;
//            if (end1 >= 0)
//                val1 = num1[end1--] - '0';
//
//            if (end2 >= 0)
//                val2 = num2[end2--] - '0';
//
//            int cur = val1 + val2 + next;
//            next = cur / 10;
//            cur %= 10;
//            //ret.insert(0, 1, cur + '0');
//            ret += cur + '0';
//        }
//
//        if (next == 1)
//        {
//            //ret.insert(0, 1, '1');
//            ret += '1';
//        }
//        reverse(ret.begin(), ret.end());
//
//        return ret;
//    }
//};

/*
解2：
方法一的做法是从右往左遍历乘数，将乘数的每一位与被乘数相乘得到对应的结果，
再将每次得到的结果累加，整个过程中涉及到较多字符串相加的操作。
如果使用数组代替字符串存储结果，则可以减少对字符串的操作。

设num1和num2的长度分别为m n,则num1和num2的乘积的长度为m+n-1或者m+n，即乘积的最大长度为 m+n
创建长度为m+n的数组存储乘积，将数组 ansArr转成字符串,如果最高位是0则舍弃最高位

时间复杂度：O(N^2)
空间复杂度：O(N)
*/

class Solution
{
public:
    string multiply(string num1, string num2)//"1234" "567"
    {
        if (num1 == "0" || num2 == "0")
            return "0";
        int m = num1.size(), n = num2.size();
        vector<int> retArr(m + n);

        //将每一位运算结果存在数组中
        for (int i = m-1; i >=0; i--)
        {
            int val1 = num1[i] - '0';
            for (int j = n - 1; j >= 0; j--)
            {
                int val2 = num2[j] - '0';
                retArr[i + j + 1] += val1 * val2;
            }
        }
        //0 5 16 34 52 45 28

        //相加成为一个数
        for (int i = m + n - 1; i > 0; i--)
        {
            retArr[i - 1] += retArr[i] / 10;
            retArr[i] %= 10;
        }
        //0 6 9 9 6 7 8

        //如果最高位是0则从数组第二项开始转换
        string ret;
        int index = (retArr[0] == 0 ? 1 : 0);
        while (index < m + n)
        {
            ret += retArr[index++] + '0';
        }

        return ret;
    }
};


int main()
{
    Solution s;
    string s1("1234");
    string s2("567");
    cout<<s.multiply(s1, s2);

    return 0;
}