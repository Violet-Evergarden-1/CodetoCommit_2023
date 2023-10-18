#include<iostream>
using namespace std;

//void TestFor(int array[])
//{
//    for (auto& e : array)
//        cout << e << endl;
//}
//
//int main()
//{
//    int array[] = { 1, 2, 3, 4, 5 };
//    for (auto& e : array)
//        e *= 2;
//
//    for (auto e : array)
//        cout << e << " ";
//
//    return 0;
//}

//void f(int)
//{
//	cout << "f(int)" << endl;
//}
//void f(int*)
//{
//	cout << "f(int*)" << endl;
//}
//int main()
//{
//	//f(0);
//	//f(NULL);
//	//f((int*)NULL);
//	//return 0;
//
//	cout << sizeof(nullptr)<<endl;
//	cout << sizeof((void*)0)<<endl;
//	cout << sizeof(NULL)<<endl;
//}

//int main()
//{
//    float money = 100000;
//    int year = 0;
//    cin >> year;
//
//    while (year--)
//    {
//        money *= 1.0375;
//    }
//
//    printf("%.3f", money);
//
//    return 0;
//}

//int main()
//{
//    int a = 0, b = 0;
//    cin >> a >> b;
//
//    int c = (a > b ? a : b);
//    cout << c;
//}

//int main()
//{
//	double a = 950;
//	double b = 0.00000000000000000000003;
//
//	double n = 0;
//	cin >> n;
//
//	double ret = n * a / b;
//	cout << ret;
//
//	return 0;
//}

//int main()
//{
//	int num = 0, n = 0;
//	cin >> num >> n;
//	int ret = num, a = num;
//	while(--n)
//	{
//		a = a * 10 + num;
//		ret += a;
//	}
//	cout << ret;
//
//	return 0;
//}

//int main()
//{
//    int num = 0, n = 0;
//    cin >> n;
//    double ret = 0;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> num;
//        ret += num;
//    }
//    cout << ret / n;
//
//    return 0;
//}

//int  main()
//{
//	int arr[12] = { 0 };
//	for(int i=0;i<12;i++)
//		cin >> arr[i];
//	int a = 0, b = 0;
//	for (int i = 0; i < 12; i++)
//	{
//		if (i % 2 == 1)
//			a += arr[i];
//		if (i % 2 == 0)
//			b += arr[i];
//	}
//	int c = 10 - (a * 3 + b) % 10;
//
//	for (int i = 0; i < 12; i++)
//		cout << arr[i];
//
//	if (c == 10)
//		cout << 0;
//	else
//		cout << c;
//
//	return 0;
//}

//int  main()
//{
//	int arr[13] = { 0 };
//	for (int i = 0; i < 13; i++)
//		cin >> arr[i];
//	int a = 0, b = 0;
//	for (int i = 0; i < 12; i++)
//	{
//		if (i % 2 == 1)
//			a += arr[i];
//		if (i % 2 == 0)
//			b += arr[i];
//	}
//	a *= 3;
//	int c = (a + b) % 10;
//	c = (c == 0 ? 0 : 10 - c);
//	if (c != arr[12])
//	{
//		cout << "Error";
//		return 0;
//	}
//	
//	int e = 0, j = 10;
//	for (int i = 3; i < 12; i++)
//	{
//		e += arr[i] * j--;
//	}
//	e = 11 - (e % 11);
//	for (int i = 3; i < 12; i++)
//		cout << arr[i];
//	if (e == 10)
//	{
//		cout << 'x';
//		return 0;
//	}
//	if (e == 11)
//		e = 0;
//	cout << e;
//
//	return 0;
//}

//int main()
//{
//    float a, b, c;
//    cin >> a >> b >> c;
//
//    if (b * b - 4 * a * c == 0)
//    {
//        cout << -b / (a * 2);
//    }
//    else if (b * b - 4 * a * c > 0)
//    {
//        cout << (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
//        cout << (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
//    }
//    else
//        cout << "方程无实数根";
//
//    return 0;
//}


//int IsLeapYear(int year)
//{
//	if (year % 400 == 0 || year % 100 != 0 && year % 4 == 0)
//		return 1;
//	else
//		return 0;
//}
