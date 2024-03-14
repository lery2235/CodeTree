#include <iostream>
using namespace std;

void recursive(int n){
    if (n == 0){
        return;
    }
    else
        {
        cout << "HelloWorld" << endl;    
        recursive(n-1);
        }
}

int main() {
    int n;
    cin >> n;

    recursive(n);

    return 0;
}