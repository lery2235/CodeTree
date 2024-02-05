#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    for(int i = a; a <= b; i++){
        if(i % 2 == 1){
            cout << a << " ";
            a = a * 2;
        }
        else if(i % 2 == 0){
            cout << a << " ";
            a = a + 3;
            
        }
    }
    return 0;
}