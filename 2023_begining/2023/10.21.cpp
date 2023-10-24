#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string.h>

//// 类中既有成员变量，又有成员函数
//class A1 {
//public:
//	void f1() {}
//private:
//	int _a;
//};
//
//// 类中仅有成员函数
//class A2 {
//public:
//	void f2() {}
//};
//
//// 类中什么都没有---空类
//class A3
//{};
//int main()
//{
//	cout << sizeof(A1) << endl;
//	cout << sizeof(A2) << endl;
//	cout << sizeof(A3) << endl;
//
//	return 0;
//}

//int main()
//{
//	char str[150000] = "";
//	char cpy[150000] = "";
//	int num = 1;
//	cin >> num;
//	while (num--)
//	{
//		cin >> str;
//		strcpy(cpy, str);
//		int len = strlen(cpy), count = 0;
//
//		char* p = strstr(cpy, "one");
//
//		while (p != nullptr)
//		{
//			if (p - 1 >= cpy && *(p - 1) != 'o')
//				memmove(p, p + 1, len);
//			else if (*(p + 3) == 0 || *(p+3) != 'e')
//				memmove(p + 2, p + 3, len);
//			else
//				memmove(p + 1, p + 2, len);
//			count++;
//
//			p = strstr(cpy, "one");
//		}
//
//		p = strstr(cpy, "two");
//		while (p != nullptr)
//		{
//			if (p - 1 >= cpy && *(p - 1) != 't')
//				memmove(p, p + 1, len);
//			else if (*(p + 3) == 0 || *(p + 3) != 'o')
//				memmove(p + 2, p + 3, len);
//			else
//				memmove(p + 1, p + 2, len);
//			count++;
//
//			p = strstr(cpy, "two");
//		}
//
//		cout << count << endl;
//		char* cur1 = str,*cur2 = cpy;
//		for(int i=0;i<len;i++)
//		{
//			if (*cur1 != *cur2)
//			{
//				cout << i + 1 << " ";
//				cur1++;
//			}
//			else
//			{
//				cur1++;
//				cur2++;
//			}
//		}
//		cout << endl;
//	}
//}


//int main()
//{
//	int num = 1;
//	cin >> num;
//	int arr[100] = { 0 };
//	int map[2] = { 0 };
//	while (num--)
//	{
//		int sz = 0;
//		cin >> sz;
//		for (int i = 0; i < sz; i++)
//			cin >> arr[i];
//		for (int i = 0; i < sz; i++)
//		{
//			if (arr[i] % 2 == 0)
//				map[0]++;
//			if (arr[i] % 2 != 0)
//				map[1]++;
//			if (map[0] == 1 || map[1] == 2)
//				break;
//		}
//		if (map[0] == 1)
//		{
//			cout << map[0] << endl;
//			for (int i = 0; i < sz; i++)
//				if (arr[i] % 2 == 0)
//				{
//					cout << i + 1 << " ";
//					break;
//				}
//		}
//		else if (map[1] == 2)
//		{
//			cout << "2" << endl;
//			int count = 0;
//			for (int i = 0; i < sz; i++)
//			{
//				if (arr[i] % 2 != 0)
//				{
//					cout << i + 1 << " ";
//					count++;
//				}
//				if (count == 2)
//					break;
//			}
//		}
//		else
//			cout << "-1" ;
//		cout << endl;
//
//		map[0] = map[1] = 0;
//	}
//
//	return 0;
//}

//int cmp_int(const void* p1, const void* p2)
//{
//	return *(int*)p2 - *(int*)p1;
//}
//
//int main()
//{
//	int num = 0;
//	cin >> num;
//	while (num--)
//	{
//		int arr[100] = { 0 };
//		int sz = 0;
//		cin >> sz;
//		for (int i = 0; i < sz; i++)
//			cin >> arr[i];
//
//		qsort(arr, sz, sizeof(int), cmp_int);
//		for (int i = 0; i < sz; i++)
//			cout << arr[i] << " ";
//		cout << endl;
//		memset(arr, 0, 100 * sizeof(int));
//	}
//	return 0;
//}


//int main()
//{
//	char str[] = "abcd";
//	char* p = str;
//	char* p1 = p + 3;
//	char* p2 = p + 4;
//	cout << p2 << endl;
//	memmove(p1, p2, strlen(str));
//	cout << str;
//}

//int main()
//{
//	int num = 0;
//	cin >> num;
//	while (num--)
//	{
//		int score[1000] = { 0 };
//		int n = 0, max = 0;
//		cin >> n >> max;
//		long long total = 0;
//		for (int i = 0; i < n; i++)
//		{
//			cin >> score[i];
//			total += score[i];
//		}
//		long long a = (total > max ? max : total);
//		cout << a << endl;
//	}
//	return 0;
//}

//int cmp_int(const void* p1, const void* p2)
//{
//	return *(int*)p1 - *(int*)p2;
//}
//
//int main()
//{
//	int num = 1;
//	cin >> num;
//	while (num--)
//	{
//		int wide = 0;
//		cin >> wide;
//		int high[100] = { 0 };
//		for (int i = 0; i < wide; i++)
//			cin >> high[i];
//		int cur = 1, prev = 0;
//		while (cur <= wide)
//		{
//			if ((high[cur] - high[prev]) % 2 == 0)
//			{
//				cur++;
//			}
//			else if ((high[cur] - high[prev]) % 2 != 0 && prev < cur - 1)
//			{
//				while (prev < cur)
//					high[prev++] = 0;
//				cur++;
//			}
//			else
//			{
//				prev++;
//				cur++;
//			}
//		}
//
//		qsort(high, wide, sizeof(int), cmp_int);
//		int min = 0, flag = 0;
//		for (int i = 0; i < wide; i++)
//		{
//			if (min == 0 && high[i] != min)
//				min = high[i];
//			if (min != 0 && (high[i] - min) % 2 != 0)
//			{
//				cout << "NO" << endl;
//				flag = 1;
//			}
//		}
//		if(flag==0)
//			cout << "YES" << endl;
//	}
//	return 0;
//}
