#include <iostream>
using namespace std;

int main() {
    int n;
    int hap = 0;
    cin >> n;
    
    for(int i= 0; i <= 100; i++){
        hap += i;
        if(hap >= n){
            cout << i;
            break;
        }
    }
    return 0;
}