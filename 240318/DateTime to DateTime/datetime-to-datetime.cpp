#include <iostream>

using namespace std;
// 11월 11일 11시 11분 ~ 11월 a일 b시 c분 

// day  24시간  -> 분으로 변경 1440분

int Datetime(int a, int b, int c){

    int res = (a * 24 * 60 + b * 60 + c) - (11 * 24 * 60 + 11 * 60 + 11);
    
    if(res < 0){
        cout << -1;
    }
    else
        cout << res;

    return res;

}

int main() {

    int day, time, min;

    cin >> day >> time >> min;
 
    Datetime(day, time, min);

    return 0;
}