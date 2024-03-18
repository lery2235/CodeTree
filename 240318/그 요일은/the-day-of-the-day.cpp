#include <iostream>
#include <string>
using namespace std;

int date_cal(int month, int day) {
    
    int year_of_month[] = { 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 30, 31, 30, 31 };
    int total_days = 0;

    for (int i = 1; i < month; i++) {
        total_days += year_of_month[i];
    }
    total_days += day;

    return total_days;
}

int main() {
    int m1, d1, m2, d2;
    int cnt = 0;
    string day_of_week[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    string date[2];

    cin >> m1 >> d1 >> m2 >> d2;
    cin >> date[0];

    int diff_day = date_cal(m2, d2) - date_cal(m1, d1);
    
    while (diff_day < 0) {
        diff_day += 7;
    }

    int start_day = date_cal(m1, d1) % 7;

    for (int i = start_day; i < diff_day; i++) {
        if (date[0] == day_of_week[(start_day + i) % 7]) {
            cnt++;
        }
        else {
            continue;
        }
    }

    cout << cnt;

    return 0;
}