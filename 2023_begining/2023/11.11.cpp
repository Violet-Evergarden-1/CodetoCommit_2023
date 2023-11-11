#include<iostream>
using namespace std;

class Solution
{
	class Sum
	{
	public:
		Sum()
		{
			_ret += _i;
			_i++;
		}
	};
public:
	int Sum_Solution(int n)
	{
		Sum arr[n];

		return _ret;
	}
private:
	static int _i;
	static int _ret;
};

int Solution::_i = 1;
int Solution::_ret = 1;

int main()
{
	Solution s1;
	int n;
	cin >> n;
	cout << s1.Sum_Solution(n);

	return 0;
}