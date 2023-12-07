#include<iostream>
#include<vector>
using namespace std;

//17. 电话号码的字母组合
//给定一个仅包含数字 2 - 9 的字符串，返回所有它能表示的字母组合。答案可以按 任意顺序 返回。
//给出数字到字母的映射如下（与电话按键相同）。注意 1 不对应任何字母。
//https://leetcode.cn/problems/letter-combinations-of-a-phone-number/description/


//究极无敌笨比暴力循环
//class Solution {
//public:
//    vector<string> letterCombinations(string digits) {
//        vector<string> num;
//        num.resize(8);
//        num[0] = "abc";
//        num[1] = "def";
//        num[2] = "ghi";
//        num[3] = "jkl";
//        num[4] = "mno";
//        num[5] = "pqrs";
//        num[6] = "tuv";
//        num[7] = "wxyz";
//
//        int len = digits.size();
//        vector<string> ret;
//        if (len >= 1)
//        {
//            for (int i = 0; i < num[digits[0] - '0' - 2].size(); i++)
//            {
//                string tmp0("");
//                tmp0 += num[digits[0] - '0' - 2][i];
//                if(len==1)
//                    ret.push_back(tmp0);
//                if (len >= 2)
//                {
//                    for (int j = 0; j < num[digits[1] - '0' - 2].size(); j++)
//                    {
//                        string tmp1(tmp0);
//                        tmp1 += num[digits[1] - '0' - 2][j];
//                        if (len == 2)
//                            ret.push_back(tmp1);
//                        if (len >= 3)
//                        {
//                            for (int m = 0; m < num[digits[2] - '0' - 2].size(); m++)
//                            {
//                                string tmp2(tmp1);
//                                tmp2 += num[digits[2] - '0' - 2][m];
//                                if (len == 3)
//                                    ret.push_back(tmp2);
//                                if (len == 4)
//                                {
//                                    for (int n = 0; n < num[digits[3] - '0' - 2].size(); n++)
//                                    {
//                                        string tmp3(tmp2); 
//                                        tmp3 += num[digits[3] - '0' - 2][n];
//                                        ret.push_back(tmp3);
//                                    }
//                                }
//                            }
//                        }
//                    }
//                }
//            }
//        }
//        return ret;
//    }
//};

//递归 深度优先 回溯 成员变量
//class Solution {
//public:
//    //大括号初始化
//    vector<string> num = { "","","abc","def", "ghi", "jkl", "mon", "pqrs","tuv","wxyz"};
//    vector<string> ans = {};
//    string tmp;
//
//    void dfs(int pos,string& digits)
//    {
//        //递归终止条件
//        if (pos == digits.size())
//        {
//            ans.push_back(tmp);
//            return ;
//        }
//
//        //本层
//        for (int i = 0; i < num[digits[pos] - '0'].size(); i++)
//        {
//            tmp += num[digits[pos] - '0'][i];
//            //递归下一层
//            dfs(pos + 1, digits);
//
//            //回溯
//            tmp.pop_back();
//        }
//    }
//
//    vector<string> letterCombinations(string digits) 
//    {
//        if (digits == "")
//            return {};
//
//        int pos = 0;
//        dfs(pos, digits);
//
//        return ans;
//    }
//};
//
//int main()
//{
//    Solution s1;
//
//    string s("23");
//    vector<string> ret = s1.letterCombinations(s);
//
//    for (int i = 0; i < ret.size(); i++)
//    {
//        for (int j = 0; j < ret[i].size(); j++)
//        {
//            cout << ret[i][j];
//        }
//        cout << " ";
//    }
//}



// 数组中出现次数超过一半的数字
//https://www.nowcoder.com/practice/e8a1b01a2df14cb2b228b30ee6a92163?tpId=13&&tqId=11181&rp=1&ru=/activity/oj&qru=/ta/coding-interviews/question-ranking

//哈希 时间复杂度：O(n) 空间复杂度：O(n)
//class Solution {
//public:
//    int MoreThanHalfNum_Solution(vector<int>& numbers) {
//        int halfSz = numbers.size() / 2;
//
//        int map[100001] = { 0 };
//        for (auto num : numbers)
//        {
//            map[num]++;
//            if (map[num] > halfSz)
//                return num;
//        }
//        return 0;
//    }
//};

//排序，超过一半的数必在中间

//候选（同归于尽）
//class Solution {
//public:
//    int MoreThanHalfNum_Solution(vector<int>& numbers) 
//    {
//        int ret = 0;
//        int count = 0;
//        for (auto num : numbers)
//        {
//            if (count == 0)
//            {
//                ret = num;
//                count++;
//            }
//            else if (num != ret)
//                count--;
//            else if (num == ret)
//                count++;
//        }
//        return ret;
//    }
//};


