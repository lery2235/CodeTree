#include <iostream>
using namespace std;

int main() {
    int n;
    int cnt = 0;
    int i = 1;
        
    cin >> n;

    while(1){
        n /= i;
        cnt++;
        i++;

        if(n <= 1){
            cout << cnt;
            break;
        }

    }
    return 0;
}