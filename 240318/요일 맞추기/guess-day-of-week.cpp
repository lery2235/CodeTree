#include <iostream>
#include <vector>

using namespace std;

int DateToDay(int month, int day, int target_month, int target_day) {
    int day_month[] = { 0, 31, 28, 31, 30, 31, 30, 31, 30, 31, 30, 31, 30 };
    int res = 0;

    // 현재 월의 총 일 수 계산
    int total_days = 0;
    for (int i = 1; i < month; i++) {
        total_days += day_month[i];
    }
    total_days += day;

    // 대상 월의 총 일 수 계산
    int target_total_days = 0;
    for (int i = 1; i < target_month; i++) {
        target_total_days += day_month[i];
    }
    target_total_days += target_day;

    // 대상 월의 총 일 수에서 현재 월의 총 일 수를 뺌
    res = target_total_days - total_days;

    return res;
}

int main() {
    int month, day, target_month, target_day;

    vector<string> v{"Mon", "Tue", "Wed", "Thr", "Fri", "Sat", "Sun"};

    cin >> month >> day >> target_month >> target_day;

    int day_cal = DateToDay(month, day, target_month, target_day);

    // 주어진 날짜 사이의 요일 차이를 요일로 변환
    while (day_cal < 0) {
        day_cal += 7;
    }

    // 요일로 변환하여 출력
    cout << v[day_cal % 7];

    return 0;
}