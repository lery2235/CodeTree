#include <iostream>
using namespace std;

void recursive(int n){
    if (n == 0){
            return;
        }
    else{
        cout << n << " ";
        recursive(n - 1);
        cout << n << " ";
    }
}


int main() {

    int n;
    cin >> n;

    recursive(n);


    return 0;
}