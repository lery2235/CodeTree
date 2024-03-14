#include <iostream>
using namespace std;

void recursive(int n){
    if(n == 0){
        return;
    }
    else{
        for(int i = n; i >= 1; i--){
            cout << "*" << " ";
        }
        cout << endl;
        
        recursive(n - 1);
        
        for(int i = 0; i < n; i++){
            cout << "*" << " ";
        }
        cout << endl;
        
    }
}

int main() {
    int n;
    cin >> n;

    recursive(n);
    return 0;
}