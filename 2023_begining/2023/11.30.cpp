#include<iostream>
using namespace std;

//double squareRoot(double x) 
//{
//    if (x < 0) {
//        // 输入为负数，无法计算平方根
//        return -1.0;
//    }
//
//    double epsilon = 1e-6;  // 精度
//    double guess = x;      // 初始猜测值为x
//
//    // 使用牛顿迭代法计算平方根
//    while (true) {
//        double nextGuess = (guess + x / guess) / 2;  // 下一个猜测值
//        if (abs(nextGuess - guess) < epsilon) 
//        {
//            // 当猜测值的变化小于精度要求时，认为找到了平方根
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



//// 计算正弦函数的值
//double sin(double x) {
//    double result = 0.0;
//    double term = x;  // 第一项的值
//
//    int n = 1;  // 当前项的指数
//    while (abs(term) >= 1e-7) {
//        result += term;
//        term = -term * x * x / ((2 * n) * (2 * n + 1));
//        n++;
//    }
//
//    return result;
//}
//
//// 计算余弦函数的值
//double cos(double x) {
//    double result = 0.0;
//    double term = 1.0;  // 第一项的值
//
//    int n = 1;  // 当前项的指数
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
//    cout << "请输入命令 (1 - sin, 2 - cos): ";
//    cin >> command;
//
//    cout << "请输入角度值（以度为单位）: ";
//    cin >> angle;
//
//    // 将角度转换为弧度
//    double radian = angle * 3.1416 / 180.0;
//
//    double result;
//
//    if (command == 1) {
//        // 计算正弦函数的值
//        result = sin(radian);
//        cout << "sin(" << angle << ") = " << result << endl;
//    }
//    else if (command == 2) {
//        // 计算余弦函数的值
//        result = cos(radian);
//        cout << "cos(" << angle << ") = " << result << endl;
//    }
//    else {
//        cout << "无效的命令！" << endl;
//    }
//
//    return 0;
//}

// 计算斜率
//double calcSlope(int x1, int y1, int x2, int y2) {
//    return static_cast<double>(y2 - y1) / (x2 - x1);
//}
//
//int main() {
//    int x1, y1, x2, y2;
//
//    cout << "请输入第一个点的横坐标和纵坐标：";
//    cin >> x1 >> y1;
//
//    cout << "请输入第二个点的横坐标和纵坐标：";
//    cin >> x2 >> y2;
//
//    double slope = calcSlope(x1, y1, x2, y2);
//
//    cout << "斜率：" << slope << endl;
//
//    return 0;
//}

//把字符串转换成整数
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
