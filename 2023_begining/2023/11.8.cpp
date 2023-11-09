#include<iostream>
using namespace std;

//int main()
//{
//	float a, b;
//	cin >> a >> b;
//	float big = a, small = b;
//	if (big < small)
//	{
//		big = b;
//		small = a;
//	}
//	cout << big - small << endl;
//
//	return 0;
//}

//int main()
//{
//	int num;
//	cin >> num;
//	int i = 0;
//	while (num > 0)
//	{
//		cout << num%10;
//		num /= 10;
//		i++;
//	}
//	cout <<" " << i << endl;
//}

//int main()
//{
//
//		int x;
//		cin >> x;
//		if (x < 10000 || x>99999)
//		{
//			cout << "对不起，您输入的不是五位正整数！" << endl;
//			return 0;
//		}
//
//		int cpy = x, ret = 0;
//		int i = 10000;
//		while (cpy > 0)
//		{
//			ret += cpy % 10 * i;
//			cpy /= 10;
//			i /= 10;
//		}
//		if (ret == x)
//			cout << "该数是回文数！" << endl;
//		else
//			cout << "该数不是回文数！" << endl;
//
//	return 0;
//}

//char LowercaseToUppercase(char c) 
//{
//    if (c >= 97 && c <= 122)
//        c -= 32;
//
//    return c;
//}
//
//int main()
//{
//    char ch;
//    cin >> ch;
//    cout << LowercaseToUppercase(ch) << endl;
//
//    return 0;
//}

//int main()
//{
//    while (1)
//    {
//        int y, m, d;
//        cin >> y >> m >> d;
//
//        if (m == 1)
//        {
//            m = 13;
//            --y;
//        }
//        if (m == 2)
//        {
//            m = 14;
//            --y;
//        }
//        int w = (d + 2 * m + 3 * (m + 1) / 5 + y + y / 4 - y / 100 + y / 400 + 1) % 7;
//        switch (w)
//        {
//        case 0:
//            cout << "星期日" << endl;
//            break;
//        case 1:
//            cout << "星期一" << endl;
//            break;
//        case 2:
//            cout << "星期二" << endl;
//            break;
//        case 3:
//            cout << "星期三" << endl;
//            break;
//        case 4:
//            cout << "星期四" << endl;
//            break;
//        case 5:
//            cout << "星期五" << endl;
//            break;
//        case 6:
//            cout << "星期六" << endl;
//            break;
//        }
//    }
//    return 0;
//}

//double TaxCalculate(double m) {
//    double more = m - 1200.0;
//    
//    if (more < 1000)
//        return more * 0.05;
//    if (more < 3000)
//        return more * 0.1;
//    if (more < 5000)
//        return more * 0.15;
//    if (more < 10000)
//        return more * 0.2;
//    else
//        return more * 0.15;
//}

//int main()
//{
//    int num;
//    cin >> num;
//
//    switch (num)
//    {
//    case 0:
//        cout << "Sunday" << endl;
//        break;
//    case 1:
//        cout << "Monday" << endl;
//        break;
//    case 2:
//        cout << "Tuesday" << endl;
//        break;
//    case 3:
//        cout << "Wednesda" << endl;
//        break;
//    case 4:
//        cout << "Thursday" << endl;
//        break;
//    case 5:
//        cout << "Friday" << endl;
//        break;
//    case 6:
//        cout << "Saturday" << endl;
//        break;
//    default:
//        cout << "Error" << endl;
//    }
//}

//int main()
//{
//    int x, y;
//    char ch;
//    cin >> x >> y >> ch;
//    if (ch == '+')
//    {
//        cout << x << '+' << y << '=' << x + y;
//    }
//    else if (ch == '-')
//    {
//        cout << x << '-' << y << '=' << x - y;
//    }
//    else if (ch == '*')
//    {
//        cout << x << '*' << y << '=' << x * y;
//    }
//    else if (ch == '/')
//    {
//        cout << x << '/' << y << '=' << x / y;
//    }
//    else if (ch == '%')
//    {
//        cout << x << '%' << y << '=' << x % y;
//    }
//    else
//        cout << "Error Operator!" << endl;
//}

//int DayOfMonth(int year, int month)
//{
//    int day[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//    if (month == 2 && (year % 400 == 0 || year % 100 != 0 && year % 4 == 0))
//        day[2] += 1;
//    return day[month];
//}

//#include <math.h>
//
//int FunCal(int a, int n)
//{
//    int ret = 0, cpy = a;
//    for (int i = 1; i <= n; i++)
//    {
//        ret += cpy;
//        cpy += a * pow(10, i);
//    }
//    return ret;
//}

//int main()
//{
//    int n = 10;
//    int ret=sqrt((double)n);
//    if (ret * ret == n)
//        return true;
//    else
//        return false;
//    
//}