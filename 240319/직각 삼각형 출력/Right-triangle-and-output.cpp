#include <iostream>
using namespace std;

int main() {
    int n;
    int c = 1;
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < c; j++){
            cout << "*";
        }
        cout << endl;
        c = c + 2; 
    }


    return 0;
}