#include <iostream>
using namespace std;

int main() {
    int n;
    int cnt = 0;
    while(1){
        cin >> n;
        if(cnt < 3){
            if(n % 2 == 1){
                continue;
            }
            else{
                cout << (n / 2) << endl;
                cnt++;
            }
        }
        else{
            break;
        }
    }
    return 0;
}