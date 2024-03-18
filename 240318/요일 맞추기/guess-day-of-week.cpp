#include <iostream>
#include <string>

using namespace std;

int DateToDay(int month, int day) {
    
    int day_month[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 30, 31, 30, 31, 30 };
   
    //현재 월 까지 일 수 더하기 계산 
    int res = 0;
    for (int i = 1; i < month; i++) {
        res += day_month[i];
    }
    // 일을 분으로 변경
    res += day;
    
    return res;
}


int main() {
    int month, day, target_month, target_day;


    cin >> month >> day >> target_month>> target_day;

    int day_cal = DateToDay(target_month, target_day) - DateToDay(month, day);

    // 주어진 날짜 사이의 요일 차이를 요일로 변환
    while (day_cal < 0) {
        day_cal += 7;
    }

    string day_of_week[] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
     cout << day_cal[diff % 7];

    return 0;
}