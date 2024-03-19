#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    int flag = false;

    cin >> a >> b >> c;

    for(int i = a; i <= b; i++){
        if(i % c == 0){
            flag = true;
        }
    }

    if(flag == true){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}