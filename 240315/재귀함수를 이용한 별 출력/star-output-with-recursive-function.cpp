#include <iostream>
using namespace std;

void recurisve(int n){
    if (n == 0){
        return;
    }
    else{
        recurisve(n-1);
        for(int i = 0; i < n; i++){
            cout << "*";
        }
        cout << endl;
        
    }
}

int main() {
    int n;
    cin >> n;

    recurisve(n);

    return 0;
}