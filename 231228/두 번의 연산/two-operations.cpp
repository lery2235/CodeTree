#include <iostream>
using namespace std;

int main() {
    int a,res;
    
    cin >> a;

    if (a % 2 == 1){
        res = a + 3;
    }
    if(a % 2 == 1){
        res = res / 3;
    }
    
    cout << res;

    return 0;
}