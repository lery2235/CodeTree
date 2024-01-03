#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;

    if(a > b && a != b && a > c && a != c){
            cout << a; 
    }
    if(b > c && b != c && b > a && b != a){
        cout << b;
    }
    if(c > a && c > b && c != a && c != b){
        cout << c;
        }


    return 0;
}