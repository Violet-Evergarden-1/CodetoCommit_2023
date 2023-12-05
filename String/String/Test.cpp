#include"String.h"

namespace syz
{
	void Test1()
	{
		string s1;
		string s2("1234 abcd");
		string s3(s2);
		string s4 = s2;

		//cin >> s1;

		cout << s1 << endl;
		cout << s2 << endl;
		cout << s3 << endl;
		cout << s4 << endl;
	}

	void Test2()
	{
		string s2("1234 abcd");
		s2.push_back('\0');
		cout << s2 << endl;
		cout << s2.size() << endl;
		cout << s2.capacity() << endl;
		s2 += '\0';
		cout << s2 << endl;
		cout << s2.size() << endl;
		cout << s2.capacity() << endl;
		s2 += 'a';
		cout << s2 << endl;
		cout << s2.size() << endl;
		cout << s2.capacity() << endl;
		s2 += "a\0cccccccccccc";
		cout << s2 << endl;
		cout << s2.size() << endl;
		cout << s2.capacity() << endl;
	}

	void Test3()
	{
		string s1("1234567");
		cout << s1 << endl;
		cout << s1.size() << endl;
		cout << s1.capacity() << endl;

		s1.resize(3);
		cout << s1 << endl;
		cout << s1.size() << endl;
		cout << s1.capacity() << endl;

		s1 = "1234567";
		s1.resize(10, 'a');
		cout << s1 << endl;
		cout << s1.size() << endl;
		cout << s1.capacity() << endl;
	}

	void Test4()
	{
		string s1("2333");
		string s2("2333");

		cout << (s1 < s2) << endl;
		cout << (s1 > s2) << endl;
		cout << (s1 <= s2) << endl;
		cout << (s1 >= s2) << endl;
		cout << (s1 == s2) << endl;
		cout << (s1 != s2) << endl;
	}

	void Test5()
	{
		string s1("abcdefg 1234");
		//cout << s1.find('d') << endl;
		//cout << s1.find(' ') << endl;
		//cout << s1.find('\0') << endl;
		//cout << s1.find('H') << endl;

		//cout << s1.find('d', 7) << endl;
		//cout << s1.find('4', 7) << endl;
		//cout << s1.find('4', 19) << endl;

		//cout << s1.find("abc") << endl;
		//cout << s1.find("abd") << endl;
		//cout << s1.find(" 1") << endl;

		//cout << s1.find("123",7) << endl;
		//cout << s1.find("abc",7) << endl;
		//cout << s1.find(" 1", 7) << endl;
		//cout << s1.find(" 1", 10) << endl;
		//string s2 = s1.substr(1);
		//cout << s2 << endl;
		//cout << s2.size() << endl;
		//cout << s2.capacity() << endl;
	}

	void Test6()
	{
		string s1("abcdefg 1234");
		cout << s1 << endl;
		cout << s1.size() << endl;
		cout << s1.capacity() << endl;
		s1.insert(-1, "000");
		cout << s1 << endl;
		cout << s1.size() << endl;
		cout << s1.capacity() << endl;
	}

	void Test7()
	{
		string s1("abcdefg 1234");
		cout << s1 << endl;
		cout << s1.size() << endl;
		cout << s1.capacity() << endl;
		s1.erase(12);
		cout << s1 << endl;
		cout << s1.size() << endl;
		cout << s1.capacity() << endl;
	}
}


void Test2()
{
	string s2("1234 abcd");
	s2.push_back('\0');
	cout << s2 << endl;
	cout << s2.size() << endl;
	cout << s2.capacity() << endl;
	s2 += '\0';
	cout << s2 << endl;
	cout << s2.size() << endl;
	cout << s2.capacity() << endl;
	s2 += 'a';
	cout << s2 << endl;
	cout << s2.size() << endl;
	cout << s2.capacity() << endl;
	s2 += "a\0cccccccccccc";
	cout << s2 << endl;
	cout << s2.size() << endl;
	cout << s2.capacity() << endl;
}

int main()
{
	syz::Test2();
	
	return 0;
}