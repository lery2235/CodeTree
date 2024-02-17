#include <iostream>
using namespace std;

int main() {
    int n;
    int sum = 0;

    for(int i = 0; i <= 10; i++){
        cin >> n;
        if(n % 3 == 0 && n % 2 == 1){
            sum += n;
        }
    }
    cout << sum;

    return 0;
}