#include <iostream>
using namespace std;

int main() {
    int n;
    int prob = 1;
    cin >> n;
    int x = 0;

    while(1){
        if(prob == n){
            break;
        }
        prob *= 2;
        x++;

    }

    cout << x;
    
    return 0;
}