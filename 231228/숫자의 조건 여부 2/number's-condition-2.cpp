#include <iostream>
using namespace std;

int main() {
    int a, b;

    cin >> a, b;

    if (a == 5){
        cout << "A";
    }
    if(a % 2 == 0){
        cout << "B";
    }
    else
        cout << " ";

    return 0;
}