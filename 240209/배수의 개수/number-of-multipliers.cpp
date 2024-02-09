#include <iostream>
using namespace std;

int main() {
    int cnt3 = 0;
    int cnt5 = 0;

    for(int i = 1; i < 11; i++){
        int a;
        cin >> a;
        if(a%5 == 0){
            cnt5++;
        }
        if(a%3 == 0){
            cnt3++;
        }
    }
    cout << cnt3 << " " << cnt5;

    return 0;
}