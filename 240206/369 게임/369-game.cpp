#include <iostream>
using namespace std;

int main() {
    int n;
    int digit;
    int digit_double;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        digit = i % 10;
        digit_double = i / 10;

        if (digit_double == 3 || digit_double == 6 || digit_double == 9 || i % 3 == 0 || digit == 3 || digit == 6 || digit == 9) {
            cout << "0" << " ";
        }
        else {
            cout << i << " ";
        }
    }
    
    return 0;
}