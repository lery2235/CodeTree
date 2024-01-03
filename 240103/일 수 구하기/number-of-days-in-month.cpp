#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    if(n >= 7){
        if(n == 11){
            cout << 30;
        }
        else
            cout << 31;
    }
    if(n <= 7){
        if(n % 2 == 0){
            cout << 30;
        }
        else 
            cout << 31;
    }


    return 0;
}