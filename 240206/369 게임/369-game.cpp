#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        if(i % 3 == 0 || i == 3 || i == 6 || i == 9){
            cout << 0 << " ";
        }
        else
            cout << i << " "; 
    }
    return 0;
}