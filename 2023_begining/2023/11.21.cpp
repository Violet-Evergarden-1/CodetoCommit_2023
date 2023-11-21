#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

int main()
{
	string s1("11.21.cpp");
	FILE* fout = fopen(s1.c_str(), "r");
	char ch = fgetc(fout);
	while (ch != EOF)
	{
		cout << ch;
		ch = fgetc(fout);
	}

	return 0;
}