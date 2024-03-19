#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    int flag = true;
    cin >> a >> b >> c;

    for(int i = a; i <= b; i++){
        if(i % c != 0){
            flag = false;
        }
    }    

    if(flag == true){
        cout << "NO";
    }
    else{
        cout << "YES";
    }
    return 0;
}