#include<iostream>
#include<string>
using namespace std;

#include <iostream>

// �������ж�ĳ����Ƿ�Ϊ����
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

// ��������ȡĳ��ĳ�µ�����
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


// ��������ӡĳ��ĳ�µ�����
void printCalendar(int year, int month) {
    // ��ȡ���µ�����
    int days = getDaysInMonth(year, month);

    // ��ȡ���µĵ�һ�������ڼ�
    int firstDay = getFirstDay(year,month); // ����ÿ���µĵ�һ�춼������һ
    //cout << "firstday" << firstDay << endl;

    // ��ӡ���µ�����
    int dayCount = 1;
    for (int row = 0; row < 6; row++) {

        for (int col = 0; col < 7; col++) {
            
            if (row == 0 && col < firstDay) {
                cout << "    "; // �����ڲ��ڸ��·�Χ�ڣ��ÿո�ռλ
            }
            else if (dayCount > days) {
                break; // �Ѿ���ӡ����µ���������
            }
            else {
                // ��ӡ���ڣ������ݸ�ʽ��������
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