#include<iostream>
using namespace std;

//int max(int a, int b, int c)
//{
//	int max = a;
//	if (b > a)
//		max = b;
//	if (c > a)
//		max = c;
//
//	return max;
//}
//
//int main()
//{
//	int a, b, c;
//	cin >> a >> b >> c;
//	cout << max(a, b, c);
//	return 0;
//}
//void convert(int& hour, int& minute, char& form) {
//    if (hour == 0) {
//        hour = 12;
//        form = 'A';
//    }
//    else if (hour == 12) {
//        form = 'P';
//    }
//    else if (hour > 12) {
//        hour -= 12;
//        form = 'P';
//    }
//    else {
//        form = 'A';
//    }
//}
//
//int main() {
//    int hour, minute;
//    char form;
//
//    cin >> hour >> minute;
//
//    convert(hour, minute, form);
//
//    cout << hour << ":";
//
//    if (minute == 0)
//    {
//        cout << "0 ";
//    }
//
//    else if (minute < 10) {
//        cout << "0";
//        cout << minute << " ";
//    }
//    else
//    {
//        cout << minute << " ";
//    }
//
//    if (form == 'A') {
//        cout << "AM";
//    }
//    else {
//        cout << "PM";
//    }
//
//    return 0;
//}