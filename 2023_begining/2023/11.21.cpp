#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//int main()
//{
//	string s1("11.21.cpp");
//	FILE* fout = fopen(s1.c_str(), "r");
//	char ch = fgetc(fout);
//	while (ch != EOF)
//	{
//		cout << ch;
//		ch = fgetc(fout);
//	}
//
//	return 0;
//}

//int main()
//{
//    int a, b;
//    cin >> a >> b;
//
//    if (b == 0)
//        cout << "Error:the divisor cannot be 0."<<endl;
//
//    else
//        cout << "Quotient is " << a / b;
//
//    return 0;
//}

//int main()
//{
//
//	double x, y;
//	cin >> x >> y;
//
//	if (x == 0 && y == 0)
//		cout << 0;
//	else if (x == 0)
//		cout << 'y';
//	else if (y == 0)
//		cout << 'x';
//	else if (x > 0 && y > 0)
//		cout << 1;
//	else if (x < 0 && y>0)
//		cout << 2;
//	else if (x < 0 && y < 0)
//		cout << 3;
//	else if (x > 0 && y < 0)
//		cout << 4;
//
//	return 0;
//}

//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	int A = a, B = b;
//	
//	int c = a % b;
//	while (c != 0)
//	{
//		a = b;
//		b = c;
//		c = a % b;
//	}
//	cout << A * B / b;
//}

//int main()
//{
//    int a;
//    cin >> a;
//    int b = sqrt(a);
//    if (b * b != a)
//        cout << 0;
//    else cout << 1;
//    
//    return 0;
//}

//int main()
//{
//    int n;
//    cin >> n;
//    double high = 100, total = 100;
//    while (--n)
//    {
//        high /= 2;
//        total += high * 2;
//    }
//    cout << total << ' ' << high / 2 << endl;
//
//    return 0;
//}

#include <iostream>
#include <cmath>

//int main() {
//    int a, n;
//    cin >> a >> n;
//
//    int sum = 0;
//    int term = 0;
//
//    for (int i = 0; i < n; i++) {
//        term += a * std::pow(10, i);
//        sum += term;
//    }
//
//    cout<< sum << endl;
//
//    return 0;
//}

//int func(int n) {
//    int fact = 1;
//    for (int i = 1; i <= n; i++) {
//        fact *= i;
//    }
//    return fact;
//}
//
//int main() {
//    int n;
//    cin >> n;
//
//    int sum = 0;
//    for (int i = 1; i <= n; i++) {
//        sum += func(i);
//    }
//
//    cout << sum << endl;
//
//    return 0;
//}

//int main()
//{
//	double d, p, s, r;
//	cin >> d >> p >> s;
//	r = (d * p) / (3.1415926 * s);
//	r = pow(r, 1.0 / 3.0);
//	cout << r;
//
//	return 0;
//}

//#include <iostream>
//#include <cmath>
//#include <iomanip>
//
//using namespace std;
//
//double calculateAngle(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4) {
//    double angle;
//
//    int dx1 = x2 - x1;
//    int dy1 = y2 - y1;
//    int dx2 = x4 - x3;
//    int dy2 = y4 - y3;
//
//    double dotProduct = dx1 * dx2 + dy1 * dy2;
//    double magnitude1 = sqrt(dx1 * dx1 + dy1 * dy1);
//    double magnitude2 = sqrt(dx2 * dx2 + dy2 * dy2);
//
//    if (magnitude1 == 0 || magnitude2 == 0) {
//        angle = 0.0;
//    }
//    else {
//        double cosTheta = dotProduct / (magnitude1 * magnitude2);
//        angle = acos(cosTheta) * 180.0 / 3.1415926; 
//    }
//
//    return angle;
//}
//
//int main() {
//    int x1, y1, x2, y2, x3, y3, x4, y4;
//    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
//
//    double angle = calculateAngle(x1, y1, x2, y2, x3, y3, x4, y4);
//    cout << fixed << setprecision(2) << angle << endl;
//
//    return 0;
//}

//#include<iostream>
//#include<cmath>
//#include<iomanip>
//#define pi 3.1415926;
//using namespace std;
//int main()
//{
//    double x1, y1, x2, y2, x3, y3, x4, y4;
//    long double x, y;
//    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
//    x = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
//    y = (x3 - x4) * (x3 - x4) + (y3 - y4) * (y3 - y4);
//    long double s1, s2;
//    s1 = sqrt(x);
//    s2 = sqrt(y);
//    long double s3;
//    s3 = (x2 - x1) * (x4 - x3) + (y2 - y1) * (y4 - y3);
//    long double s4;
//    s4 = abs(s3);
//    long double ans, ans2;
//    ans2 = s4 / (s1 * s2);
//    ans = acos(ans2);
//    long  double ans3;
//    ans3 = (180 * ans) / pi;
//    cout << fixed << setprecision(2) << (long double)ans3;
//    return 0;
//}

#include <iostream>
#include <cmath>
using namespace std;
float len(int x1, int y1, int x2, int y2)
{
    int t = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
    return sqrt(t);
}
int main()
{
    int xa, ya, xb, yb, xo, yo, R;
    cin >> xa >> ya >> xb >> yb >> xo >> yo >> R;
    if (xa == xb && ya == yb)
    {
        cout << "N"; return 0;
    }
    float OA = len(xa, ya, xo, yo);
    float OB = len(xb, yb, xo, yo);
    if (OA <= (float)R || OB <= (float)R)
    {
        cout << "Y"; return 0;
    }
    else
    {
        int son_cos = (xo - xa) * (xb - xa) + (yo - ya) * (yb - ya);
        float mother_cos = len(xa, ya, xo, yo) * len(xa, ya, xb, yb);
        float cos = (float)son_cos / mother_cos;
        float my_sin = sqrt(1 - cos * cos);
        float sin = (float)R / len(xa, ya, xo, yo);
        if (cos <= 0)
        {
            cout << "N";

        }
        else if (my_sin <= sin)
        {
            cout << "Y";

        }
        else
        {
            cout << "N";

        }
    }

    return 0;
}