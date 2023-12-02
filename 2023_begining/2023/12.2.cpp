#include<iostream>
#include<string>
using namespace std;

#include <iostream>

// 函数：判断某年份是否为闰年
bool isLeapYear(int year) {
    if (year % 400 == 0) {
        return true;
    }
    else if (year % 100 == 0) {
        return false;
    }
    else if (year % 4 == 0) {
        return true;
    }
    else {
        return false;
    }
}

// 函数：获取某年某月的天数
int getDaysInMonth(int year, int month) {
    if (month == 2) {
        if (isLeapYear(year)) {
            return 29;
        }
        else {
            return 28;
        }
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    }
    else {
        return 31;
    }
}

int getFirstDay(int year, int month)
{
    int y = year - (14 - month) / 12;
    int x = y + y / 4 - y / 100 + y / 400;
    int m = month + 12*((14 - month) / 12) - 2;
    int d = (1 + x + (31 * m) / 12) % 7;
    
    return d;
}


// 函数：打印某年某月的日历
void printCalendar(int year, int month) {
    // 获取该月的天数
    int days = getDaysInMonth(year, month);

    // 获取该月的第一天是星期几
    int firstDay = getFirstDay(year,month); // 假设每个月的第一天都是星期一
    //cout << "firstday" << firstDay << endl;

    // 打印该月的日历
    int dayCount = 1;
    for (int row = 0; row < 6; row++) {

        for (int col = 0; col < 7; col++) {
            
            if (row == 0 && col < firstDay) {
                cout << "    "; // 该日期不在该月范围内，用空格占位
            }
            else if (dayCount > days) {
                break; // 已经打印完该月的所有日期
            }
            else {
                // 打印日期，并根据格式调整对齐
                if (dayCount < 10) {
                    cout << ' ';
                }
                cout << "  " << dayCount ;
                dayCount++;
            }
        }
        cout << endl;
    }
}

int main() {
    int year, month;
    cin >> year >> month;

    printCalendar(year, month);

    return 0;
}