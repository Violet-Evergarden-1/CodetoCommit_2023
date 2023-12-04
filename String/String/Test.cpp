#include"String.h"

namespace syz
{
	void Test1()
	{
		string s1;
		string s2("1234 abcd");
		string s3(s2);

		cin>>s1;

		cout << s1;
		cout << s2;
		cout << s3;
	}

	void Test2()
	{
		string s2("1234 abcd");
		s2.push_back('\0');
		cout << s2 << endl;
		s2 += '0';
		cout << s2 << endl;
		s2 += " abcd";
		cout << s2 << endl;
	}
}

void Test2()
{
	string s2("1234 abcd");
	s2.push_back('\0');
	cout << s2 << endl;
	s2 += '\0';
	cout << s2 << endl;
	s2 += '0';
	cout << s2 << endl;
	s2 += " abcd";
	cout << s2 << endl;
}

int main()
{
	syz::Test2();
	//Test2();

	return 0;
}