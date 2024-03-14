#include <iostream>
using namespace std;


void recursive(int n){
    if(n == 0){
        return;
    }
    return recursive(n - 1) + n
}


int main() {
    int n;
    cin >> n;

    cout << recursive(n);
    return 0;
}