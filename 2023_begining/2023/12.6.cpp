#include<iostream>
#include<vector>
using namespace std;

//删除有序数组中的重复项
//https ://leetcode.cn/problems/remove-duplicates-from-sorted-array/description/

//class Solution {
//public:
//    int removeDuplicates(vector<int>& nums) {
//        if (nums.size() == 0)
//            return 0;
//        int prev = 0;
//        int cur = 1;
//        while (cur < nums.size())
//        {
//            if (nums[cur] != nums[prev])
//            {
//                nums[prev + 1] = nums[cur];
//                prev++;
//            }
//            cur++;
//        }
//        return prev + 1;
//    }
//};
//
//
//int main()
//{
//    vector<int> arr;
//    arr.push_back(1);
//    arr.push_back(1);
//    arr.push_back(3);
//    arr.push_back(4);
//    arr.push_back(4);
//    arr.push_back(4);
//    arr.push_back(4);
//    
//    Solution s1;
//    int size = s1.removeDuplicates(arr);
//    arr.resize(size);
//    cout << size << endl;
//    for (auto num : arr)
//    {
//        cout << num << ' ';
//    }
//
//    return 0;
//}

//int main()
//{
//    int n, num;
//    cin >> n;
//
//    int arr1[10][10] = { 0 };
//    int arr2[10][10] = { 0 };
//
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            cin >> num;
//            arr1[i][j] = num;
//        }
//    }
//
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            cin >> num;
//            arr2[i][j] = num;
//        }
//    }
//
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            
//        }
//        cout << endl;
//    }
//}

//3
//1 1 1
//1 1 1
//1 1 1
//2 2 2
//2 2 2
//2 2 2