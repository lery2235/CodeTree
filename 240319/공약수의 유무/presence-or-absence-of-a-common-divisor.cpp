#include <iostream>
using namespace std;

int main() {
    int a, b;
    int flag = false;
    cin >> a >> b;

    for(int i = a; i <= b; i++){
        if( 1920 % i && 2880 % i){
            flag = true;
        }        
    }
    if(flag == true){
        cout << "1";
    }
    else{
        cout << "0";
    }
    return 0;
}