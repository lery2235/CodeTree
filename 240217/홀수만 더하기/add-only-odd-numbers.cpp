#include <iostream>
using namespace std;

int main() {
    int n;
    int sum = 0;

    for(int i = 0; i <= 100; i++){
        cin >> n;
        if(n % 3 == 0){
            sum += n;
        }
    }
    cout << sum;

    return 0;
}