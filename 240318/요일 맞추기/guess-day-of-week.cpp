#include <iostream>
#include <vector>

using namespace std;

int DateToDay(int month, int day, int target_month, int target_day) {
    int ChangeToDay = 0;
    int ChangeToMin = 0;
    int Target_Min;
    int day_month[] = { 0, 31, 28, 31, 30, 31, 30, 31, 30, 31, 30, 31, 30 };
    
    //현재 월 까지 일 수 더하기 계산 
    for (int i = 1; i <= month; i++) {
        ChangeToDay += day_month[i];
    }
    // 일을 분으로 변경
    ChangeToDay += day;

    ChangeToMin = ChangeToDay * 24 * 60;
    ChangeToDay = 0;

    for (int i = 1; i <= target_month; i++) {
        ChangeToDay += day_month[i];
    }
    ChangeToDay += target_day;
    Target_Min = ChangeToDay * 24 * 60;
    
    int res = (Target_Min / 24 / 60) - (ChangeToMin / 24 / 60);
    

    return res;
}


int main() {
    int month, day, target_month, target_day;

    string v[] = {"Mon", "Tue", "Wed", "Thr", "Fri", "Sat", "Sun"};

    cin >> month >> day >> target_month>> target_day;

    int day_cal = DateToDay(month, day, target_month, target_day);

    while (day_cal < 0) {
        day_cal += 7;
    }

    cout << v[day_cal % 7];

    return 0;
}