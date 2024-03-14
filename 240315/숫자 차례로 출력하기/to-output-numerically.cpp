#include <iostream>
using namespace std;


void recursive(int n){
    if (n == 0){
        return;
    }
    else{
        recursive(n - 1);
        cout << n << " ";
    }
}

void recursive_two(int n){
    if (n == 0){
        return;
    }
    else{
        cout << n << " ";
        recursive_two(n - 1);
    }
}

int main() {
    int n;
    cin >> n;

    recursive(n);
    cout << endl;
    recursive_two(n);

    return 0;
}