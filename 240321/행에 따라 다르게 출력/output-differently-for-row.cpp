#include <iostream>
using namespace std;

int main() {
    int n;
    int res = 0;
    int temp = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            for (int j = 1; j <= n; j++) {
                cout << res + j << " ";
                if (n == j) {
                    res = res + j + 2;
                }
            }
        }
        else { // 1 * 2 = 2, 2 * 2 = 4
            for (int j = 0; j < n; j++){ 
                cout << res + (j * 2) << " ";
                if (n - 1 == j) {
                    res = res + (j * 2);
                }
            }
        }
        cout << endl;
    }
    return 0;
}