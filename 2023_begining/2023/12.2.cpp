#include<iostream>
#include<string>
#include<vector>
using namespace std;

//344. 反转字符串
//https://leetcode.cn/problems/reverse-string/description/

//class Solution {
//public:
//    void reverseString(vector<char>& s) 
//    {
//        int left = 0, right = s.size()-1;
//        
//        while (left < right)
//        {
//            swap(s[left], s[right]);
//            left++;
//            right--;
//        }
//        
//        for (auto ch : s)
//        {
//            cout << ch;
//        }
//    }
//};
//
//int main()
//{
//    Solution s1;
//    vector <char> s ;
//    s.push_back('h');
//    s.push_back('e');
//    s.push_back('l');
//    s.push_back('l');
//    s.push_back('o');
//    s1.reverseString(s);
//}

//387. 字符串中的第一个唯一字符
//https://leetcode.cn/problems/first-unique-character-in-a-string/description/

//class Solution {
//public:
//    int firstUniqChar(string s)
//    {
//        int count[26] = { 0 };
//        for (auto ch : s)
//        {
//            count[ch - 'a']++;
//        }
//
//        for (size_t i = 0; i < s.size(); i++)
//        {
//            if (count[s[i] - 'a'] == 1)
//                return  i;
//        }
//        return -1;
//    }
//};
//
//int main()
//{
//    string s1("EETCODE");
//    string s2("loveleetcode");
//    string s3("aabb");
//
//    Solution solution;
//    cout << solution.firstUniqChar(s1) << endl;
//    cout << solution.firstUniqChar(s2) << endl;
//    cout << solution.firstUniqChar(s3) << endl;
//
//    return 0;
//}


//int main()
//{
//	string strText = "How are you?";
//	string strSeparator = " ";
//	string strResult;
//	int size_pos = 0;
//	int size_prev_pos = 0;
//	while ((size_pos = strText.find_first_of(strSeparator, size_pos)) != string::npos)
//	{
//		strResult = strText.substr(size_prev_pos, size_pos - size_prev_pos);
//		cout << strResult << " ";
//		size_prev_pos = ++size_pos;
//	}
//	if (size_prev_pos != strText.size())
//	{
//		strResult = strText.substr(size_prev_pos, size_pos - size_prev_pos);
//		cout << strResult << " ";
//	}
//	cout << endl;
//
//	return 0;
//}



//415. 字符串相加
//https://leetcode.cn/problems/add-strings/description/

//解法1：使用头插，效率O(N^2)
//解法2：尾插，最后reverse
//class Solution {
//public:
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
//
//int main()
//{
//    string s1("12");
//    string s2("123");
//    Solution solution;
//    cout<<solution.addStrings(s1, s2);
//
//    return 0;
//}



//125. 验证回文串
//https ://leetcode.cn/problems/valid-palindrome/description/

//解法1：笨比
//class Solution {
//public:
//    bool isPalindrome(string s) 
//    {
//        string copy;
//        for (int i = 0; i < s.size(); i++)
//        {
//            if ((s[i] >= '0' && s[i] <= '9') || (s[i] >= 'a' && s[i] <= 'z'))
//                copy.push_back(s[i]);
//            if (s[i] >= 'A' && s[i] <= 'Z')
//                copy.push_back(s[i] - 'A' + 'a');
//        }
//        string rev(copy);
//        reverse(rev.begin(), rev.end());
//        if (copy.compare(rev) == 0)
//            return 1;
//        else
//            return 0;
//    }
//};

//解法2：内置函数
// islower(char c) 是否为小写字母
//isupper(char c) 是否为大写字母
//isdigit(char c) 是否为数字
//isalpha(char c) 是否为字母
//isalnum(char c) 是否为字母或者数字
//toupper(char c) 字母小转大
//tolower(char c) 字母大转小
//class Solution {
//public:
//    bool isPalindrome(string s)
//    {
//        string trans;
//        for (auto ch : s)
//        {
//            //if (islower(ch)||isdigit(ch))
//            //    trans += ch;
//            //if (isupper(ch))
//            //    trans += ch - 'A' + 'a';
//
//            if (isalnum(ch))
//                trans += tolower(ch);
//        }
//       
//        int begin = 0, end = trans.size() - 1;
//        
//        while (begin <end)
//        {
//            if (trans[begin++] != trans[end--])
//                return 0;
//        }
//        return 1;
//    }
//};
//
//int main()
//{
//    string s1("A man, a plan, a canal : Panama");
//    Solution s;
//    cout << s.isPalindrome(s1);
//}

