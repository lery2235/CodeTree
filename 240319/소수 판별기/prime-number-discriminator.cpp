#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num){
    if (num < 2) return false;
    int a = sqrt(num);

    for(int i = 2; i < a; i++){
        if(i % num == 0){
            return false;
        }
    }
    return true;
}


int main() {

    int n;
    cin >> n;

    if(isPrime(n) == true){
        cout << "P";
    }
    else{
        cout << "C";
    }

    return 0;
}