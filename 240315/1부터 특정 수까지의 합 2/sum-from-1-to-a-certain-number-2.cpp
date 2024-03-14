#include <iostream>
using namespace std;


int recursive(int n){
    if(n == 0){
        return 0;
    }
    return recursive(n - 1) + n;
}


int main() {
    int n;
    cin >> n;

    cout << recursive(n);
    return 0;
}