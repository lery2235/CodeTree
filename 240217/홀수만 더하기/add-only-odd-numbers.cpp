#include <iostream>
using namespace std;

int main() {
    int n = 0;
    int sum = 0;
    cin >> n;

    for(int i = 1; i <= 10; i++){
        int a;
        cin >> a;    
        if(a % 3 == 0 && a % 2 == 1){
            sum += a;
        }
    }
    cout << sum;

    return 0;
}