#include<iostream>
using namespace std;

//double squareRoot(double x) 
//{
//    if (x < 0) {
//        // ����Ϊ�������޷�����ƽ����
//        return -1.0;
//    }
//
//    double epsilon = 1e-6;  // ����
//    double guess = x;      // ��ʼ�²�ֵΪx
//
//    // ʹ��ţ�ٵ���������ƽ����
//    while (true) {
//        double nextGuess = (guess + x / guess) / 2;  // ��һ���²�ֵ
//        if (abs(nextGuess - guess) < epsilon) 
//        {
//            // ���²�ֵ�ı仯С�ھ���Ҫ��ʱ����Ϊ�ҵ���ƽ����
//            return nextGuess;
//        }
//        guess = nextGuess;
//    }
//}
//
//int main() {
//    double x;
//    cin >> x;
//
//    double result = squareRoot(x);
//    cout << result << endl;
//
//    return 0;
//}



//// �������Һ�����ֵ
//double sin(double x) {
//    double result = 0.0;
//    double term = x;  // ��һ���ֵ
//
//    int n = 1;  // ��ǰ���ָ��
//    while (abs(term) >= 1e-7) {
//        result += term;
//        term = -term * x * x / ((2 * n) * (2 * n + 1));
//        n++;
//    }
//
//    return result;
//}
//
//// �������Һ�����ֵ
//double cos(double x) {
//    double result = 0.0;
//    double term = 1.0;  // ��һ���ֵ
//
//    int n = 1;  // ��ǰ���ָ��
//    while (abs(term) >= 1e-7) {
//        result += term;
//        term = -term * x * x / ((2 * n) * (2 * n - 1));
//        n++;
//    }
//
//    return result;
//}
//
//int main() {
//    int command;
//    double angle;
//
//    cout << "���������� (1 - sin, 2 - cos): ";
//    cin >> command;
//
//    cout << "������Ƕ�ֵ���Զ�Ϊ��λ��: ";
//    cin >> angle;
//
//    // ���Ƕ�ת��Ϊ����
//    double radian = angle * 3.1416 / 180.0;
//
//    double result;
//
//    if (command == 1) {
//        // �������Һ�����ֵ
//        result = sin(radian);
//        cout << "sin(" << angle << ") = " << result << endl;
//    }
//    else if (command == 2) {
//        // �������Һ�����ֵ
//        result = cos(radian);
//        cout << "cos(" << angle << ") = " << result << endl;
//    }
//    else {
//        cout << "��Ч�����" << endl;
//    }
//
//    return 0;
//}

// ����б��
//double calcSlope(int x1, int y1, int x2, int y2) {
//    return static_cast<double>(y2 - y1) / (x2 - x1);
//}
//
//int main() {
//    int x1, y1, x2, y2;
//
//    cout << "�������һ����ĺ�����������꣺";
//    cin >> x1 >> y1;
//
//    cout << "������ڶ�����ĺ�����������꣺";
//    cin >> x2 >> y2;
//
//    double slope = calcSlope(x1, y1, x2, y2);
//
//    cout << "б�ʣ�" << slope << endl;
//
//    return 0;
//}

//���ַ���ת��������
//https://www.nowcoder.com/practice/1277c681251b4372bdef344468e4f26e?tpId=13&&tqId=11202&rp=6&ru=/activity/oj&qru=/ta/coding-interviews/question-ranking

//class Solution {
//public:
//	int StrToInt(string str)
//	{
//		int ret = atoi(str.c_str());
//		
//		for (auto& ch : str)
//		{
//			if (ch != '+' && ch != '-' && (ch < '0' || ch>'9'))
//				ret = 0;
//		}
//		return ret;
//	}
//};
//
//int main()
//{
//	string a1("+2147483647");
//	Solution a;
//	int ret = a.StrToInt(a1);
//	cout << ret;
//}
