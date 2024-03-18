#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int prob = 1;
    
    for(int i = a; i <= b; i++){
        prob *= i;
    }

    cout << prob;

    return 0;
}