#include <iostream>
using namespace std;

int main() {
    int n;
    int flag = false;
    cin >> n;

    for(int i = 2; i < n; i++){
        if(n % i == 0){
            flag = true;
        }
    }
    if(flag == true){
        cout << "C";
    }
    else{
        cout << "N";
    }
    return 0;
}