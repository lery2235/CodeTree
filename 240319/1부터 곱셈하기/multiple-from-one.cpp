#include <iostream>
using namespace std;

int main() {
    int n;
    int hap = 1;
    cin >> n;
    for(int i = 1; i <= 10; i++){
        hap *= i;
        if(hap >= n){
            cout << i;
            break;
        }
    }


    return 0;
}