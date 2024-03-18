#include <iostream>
#include <string>

using namespace std;

int DateToDay(int month, int day) {
    
     int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 31, 30, 31, 30};
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
    int m1, m2, d1, d2;

    cin >> m1 >> d1 >> m2 >> d2;

    int diff = DateToDay(m2, d2) - DateToDay(m1, d1);

    // 주어진 날짜 사이의 요일 차이를 요일로 변환
    while (diff < 0) {
        diff += 7;
    }

    string day_of_week[] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
     cout << day_of_week[diff % 7];

    return 0;
}