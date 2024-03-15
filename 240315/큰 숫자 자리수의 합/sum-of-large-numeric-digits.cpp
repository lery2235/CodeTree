#include <iostream>
using namespace std;

int f(int res){
    if(res == 0){
        return 0;
    }

    return f(res / 10) + (res % 10);
}


int main() {
    int array[10];
    int res = 1;
    
    for(int i = 0; i < 3; i++){
        cin >> array[i];
     }
     for(int i = 0; i < 3; i++){
        res *= array[i];
     }

    cout << f(res);
    

    return 0;
}