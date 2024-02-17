#include <iostream>
using namespace std;

int hap(int a, int b){
    int c = 0;
    for(int i = a; i <= b; i++){
        c += i;
    }
    return c;
}

int main() {
    int a, b;
    int res;
    cin >> a >> b;
    res = hap(a, b);
    cout << res;
    return 0;
}