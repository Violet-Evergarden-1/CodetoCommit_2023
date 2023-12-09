#include"Vector.h"

namespace syz
{
	void print_vector(const vector<int>& v)
	{
		for (auto e : v)
		{
			cout << e << " ";
		}
		cout << endl;
	}

	void test1()
	{
		vector<int> v(3, 1);

		cout << v.size() << ' ' << v.capacity() << endl;
		print_vector(v);
	}

	void test2()
	{
		vector<int> v1;
		v1.push_back(1);
		v1.push_back(2);
		v1.push_back(3);
		v1.push_back(4);
		cout << v1.size() << ' ' << v1.capacity() << endl;
		print_vector(v1);

		vector<int>v2(v1.begin() + 1, v1.end() - 1);
		cout << v2.size() << ' ' << v2.capacity() << endl;
		print_vector(v2);
	}

	void test3()
	{
		const vector<int> v1(3, 10);
		/*v1.push_back(1);
		v1.push_back(2);
		v1.push_back(3);
		v1.push_back(4);*/

		vector<int> v2(v1);
		cout << v2.size() << ' ' << v2.capacity() << endl;
		print_vector(v2);
	}

	void test4()
	{
		vector<int> v1(1,10);
		v1.push_back(1);
		v1.push_back(2);
		v1.push_back(3);
		v1.push_back(4);

		cout << v1.size() << ' ' << v1.capacity() << endl;
		print_vector(v1);

		v1.pop_back();

		v1.pop_back();

		//v1.resize(0,999);
		cout << v1.size() << ' ' << v1.capacity() << endl;
		print_vector(v1);
	}
}

void print_vector(const vector<int>& v)
{
	for (auto e : v)
	{
		cout << e << " ";
	}
	cout << endl;
}

void test1()
{
	vector<int> v(3);

	cout << v.size() << ' ' << v.capacity() << endl;
	print_vector(v);
}

int main()
{
	syz::test3();

	return 0;
}