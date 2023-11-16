#include<iostream>
using namespace std;

//bool isPrime(int n)
//{
//    for (int i = 2; i < n; i++)
//    {
//        if (n % i == 0)
//            return 0;
//    }
//    return 1;
//}
//
//int SumOfPrime(int n)
//{
//    int ret = 0;
//    for (int i = 2; i < n; i++)
//    {
//        if (isPrime(i))
//            ret += i;
//    }
//    return ret;
//}
//
//int main()
//{
//    int n = 5;
//    cout << SumOfPrime(n);
//}

//// 求两个正整数的最大公约数
//int Gcd(int a, int b)
//{
// 	int c = (a % b);
// 	while (c != 0)
// 	{
// 		a = b;
// 		b = c;
// 		c = (a % b);
// 	}
//    return b;
//}
//
//// 求两个正整数的最小公倍数
//int max(int a, int b)
//{
//    int c = 0;
//    while (c = a % b)
//    {
//        a = b;
//        b = c;
//    }
//    return b;
//}
//
//int Lcm(int a, int b)
//{
//    if (a % b == 0)
//        return a;
//    else if (b % a == 0)
//        return b;
//    else
//    {
//        int c = max(a, b);
//        long long d = a * b;
//        return d / c;
//    }
//}
//
//int main()
//{
//    int a = 5, b = 10;
//    cout << Gcd(a, b) << ' ' << (a, b) << endl;
//}


//double WheatNum()
//{
//	int a = 2;
//	double ret = 0;
//	for (int i = 0; i < 64; i++)
//	{
//		ret += pow(2, i);
//	}
//	return ret;
//}
//
//int main()
//{
//	cout << WheatNum();
//}

//int main()
//{
//    int n;
//    cin >> n;
//    for (int i = 0; i < n;i++)
//    {
//        for (int l = 0; l < i; l++)
//        {
//            cout << ' ';
//        }
//        cout << "**"; 
//        for (int j = -(2 * i) + 2 * (n - 2); j > 0; j--)
//        {
//            cout << ' ';
//        }
//        if(i!=n-1)
//            cout << "**";
//        cout << endl;
//    }
//    return 0;
//}


//int main() {
//    for (int x = 0; x <= 100 / 7; x++) {
//        for (int y = 0; y <= 100 / 5; y++) {
//            int z = 100 - x - y;
//            if ((7 * x + 5 * y + z / 3) == 100 && z % 3 == 0) {
//                std::cout << "雄鸡数量：" << x << " 只\n";
//                std::cout << "母鸡数量：" << y << " 只\n";
//                std::cout << "小鸡数量：" << z << " 只\n";
//            }
//        }
//    }
//
//    return 0;
//}

//int main() {
//    int A, B, C;
//    for (A = 1; A < 4; A++)
//    {
//        for (B = 1; B < 4; B++)
//        {
//            for (C = 1; C < 4; C++)
//            {
//                if (A != 1 && C != 1 && C != 3 && A != B && A != C && B != C)
//                    goto then;
//            }
//        }
//    }
//    
//then:
//    cout << "A--";
//    int n = A;
//    if (n == 1)
//        cout << "X";
//    if (n == 2)
//        cout << "Y";
//    if (n == 3)
//        cout << "Z";
//            
//    cout << "  B--";
//    n = B;
//    if (n == 1)
//        cout << "X";
//    if (n == 2)
//        cout << "Y";
//    if (n == 3)
//        cout << "Z";
//            
//    cout << "  C--";
//    n = C;
//    if (n == 1)
//        cout << "X";
//    if (n == 2)
//        cout << "Y";
//    if (n == 3)
//        cout << "Z";
//
//    return 0;
//}

//int main()
//{
//    int n;
//    cin >> n;
//    int high = 100, total = 100;
//    while (--n)
//    {
//        high /= 2;
//        total += high * 2;
//    }
//    cout << high / 2 << ' ' << total << endl;
//}

//int Sum(int n)
//{
//    int ret = 0;
//    while (n--)
//    {
//        ret += n;
//    }
//    return ret;
//}
//
//int main()
//{
//    cout << Sum(10);
//}

//int Fun(int x)
//{
//    int ret = 0, i = 1;
//    while (i < x)
//    {
//        if (x % i == 0)
//            ret += i;
//    }
//    return ret;
//}

//int Sum(int n)
//{
//    int ret = 0, i = 0;
//    do { ret += i; i++; } while (i <= n);
//    return ret;
//}
//
//int main()
//{
//    cout << Sum(3);
//}


//int main()
//{
//    int n, ret = 0;
//    cin >> n;
//    for (int i = 1; i <= n; i++)
//    {
//        if (i % 3 == 0)
//            continue;
//        cout << i << ' ';
//    }
//}

//int main()
//{
//    int n = 0, ret = 0;
//    for (int i = 0; i < 10; i++)
//    {
//        cin >> n;
//        if (n <= 0)
//            continue;
//        ret += n;
//    }
//    cout << "sum=" << ret;
//}

//int main()
//{
//    int n = 0, ret = 1;
//    cin >> n;
//    do
//    {
//        ret *= n % 10;
//        n /= 10;
//    } while (ret > 10);
//
//    cout << ret;
//}


//int main()
//{
//    int n = 0, ret = 1, flag = 0;
//    cin >> n;
//
//    while (flag == 0 || ret >= 10)
//    {
//        if(flag==0)
//            flag = 1;
//        else
//            n = ret, ret = 1;
//        while (n > 0)
//        {
//            if (n % 10 != 0)
//                ret *= n % 10;
//            n /= 10;
//        }
//        cout << ret<<' ';
//    }
//
//    cout << ret;
//}

//bool isPrime(int n)
//{
//    for (int i = 2; i < n; i++)
//    {
//        if (n % i == 0)
//            return 0;
//    }
//    return 1;
//}
//
//int main()
//{
//    int n = 0;
//    cin >> n;
//    if (n < 0)
//    {
//        cout << 0;
//        return 0;
//    }
//    int i = n;
//    while (!isPrime(++i));
//    cout << i;
//
//}

//int main()
//{
//    int n, i = 1, ret = 0;
//    cin >> n;
//    while (n)
//    {
//        if (isPrime(++i))
//        {
//            ret += i;
//            n--;
//        }
//    }
//    cout << ret;
//}

int main()
{
	int n = 0;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
			cout << i << endl;
	}
	return 0;
}