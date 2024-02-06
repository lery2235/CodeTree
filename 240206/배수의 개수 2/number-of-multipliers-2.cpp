#include <iostream>
using namespace std;
int main() {
    int cnt = 0;

    for(int i = 1; i <= 10; i++){
        int n;
        cin >> n;
        if(n % 2 == 1){
            cnt++;
        }
        else
            continue;
    }
    cout << cnt;

    return 0;
}