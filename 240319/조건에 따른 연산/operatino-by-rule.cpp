#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt = 0;

    while(1){
        if(n >= 1000){
            break;
        }
        cnt++;
        if(n % 2 == 0){
            n = (n * 3) + 1;
        }
        else{
            n = (n * 2) + 2;
        }
    }
    cout << cnt;
    
    return 0;
}