#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int prob = 1;

    for(int i = 1; i <= b; i++){
        if(i % a == 0){
            prob *= i;        
        }
    }

    cout << prob;

    return 0;
}