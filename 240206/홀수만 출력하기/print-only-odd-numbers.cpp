#include <iostream>
using namespace std;

int main() {
    int testcase;
    cin >> testcase;
    for(int i = testcase; i >= 1; i--){
        int n;
        cin >> n;
        if(n % 3 == 0 && n % 2 == 1){
            cout << n << endl;
        }
    }
    return 0;
}