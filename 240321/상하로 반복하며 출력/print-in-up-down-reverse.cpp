#include <iostream>
using namespace std;

int main() {
    int n;
    int res;
    int pos;
    cin >> n;
    for(int i = 0; i < n; i++){ 
        for (int j = 0; j < n; j++) {
            if (j % 2 == 0) {
                res = i + 1;
                cout << res;
            }
            else {
                pos = n - i;
                cout << pos;
            }

        }
        
        cout << endl;
    }
    return 0;
}