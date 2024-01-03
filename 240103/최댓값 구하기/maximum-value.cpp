#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;

    if(a > b && a != b){
        if(a > c && a != c){
            cout << a;
        }
    }
    else if(b > c && b != c){
        cout << b;
    }
    if(c > a && c > b && c != a && c != b)
        cout << c;


    return 0;
}