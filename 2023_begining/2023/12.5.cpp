#include<iostream>
using namespace std;
#include <vector>

//int main(void)
//{
//	vector<int>array;
//	array.push_back(100);
//	array.push_back(300);
//	array.push_back(300);
//	array.push_back(300);
//	array.push_back(300);
//	array.push_back(500);
//
//	vector<int>::iterator itor;
//	for (itor = array.begin(); itor != array.end(); itor++)
//	{
//		cout << *itor << " ";
//	}
//	cout << endl;
//
//	for (itor = array.begin(); itor != array.end(); itor++)
//	{
//		if (*itor == 300)
//		{
//			itor = array.erase(itor);
//		}
//	}
//
//	for (itor = array.begin(); itor != array.end(); itor++)
//	{
//		cout << *itor << " ";
//	}
//	return 0;
//}


//int main()
//{
//	vector<int>array;
//	array.push_back(1);
//	array.push_back(3);
//	array.push_back(3);
//	array.push_back(4);
//	array.push_back(5);
//	array.push_back(6);
//
//	vector<int>::iterator it;
//	for (it = array.begin(); it != array.end(); it++)
//	{
//		it ++ ;
//	}
//
//	for (it = array.begin(); it != array.end(); it++)
//	{
//		cout << *it << " ";
//	}
//}

//int main()
//{
//	int ar[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = sizeof(ar) / sizeof(int);
//
//	vector<int> v(ar, ar + n);
//	cout << v.size() << ":" << v.capacity() << endl;
//	v.reserve(100);
//	v.resize(20);
//	cout << v.size() << ":" << v.capacity() << endl;
//	v.reserve(50);
//	v.resize(5);
//	cout << v.size() << ":" << v.capacity() << endl;
//}

//class Solution {
//public:
//    int singleNumber(vector<int>& nums) {
//        int a = 0;
//        for (auto num : nums)
//        {
//            a ^= num;
//        }
//        return a;
//    }
//};


//118. Ñî»ÔÈý½Ç
//https ://leetcode.cn/problems/pascals-triangle/description/

//class Solution {
//public:
//    vector<vector<int>> generate(int numRows) {
//        vector<vector<int>> vv;
//        vv.resize(numRows);
//        for (int i = 0; i < numRows; ++i)
//        {
//            vv[i].resize(i + 1, 0);
//            vv[i].front() = vv[i].back() = 1;
//        }
//
//        for (int i = 2; i < numRows; ++i)
//        {
//            for (int j = 1; j < i; j++)
//            {
//                vv[i][j] = vv[i - 1][j - 1] + vv[i - 1][j];
//            }
//        }
//
//        return vv;
//    }
//};

//int main()
//{
//    Solution s1;
//    s1.generate(5);
//}