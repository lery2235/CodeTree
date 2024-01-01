#include <iostream>
using namespace std;
int main() {
    int mid,end;

    cin >> mid >> end;
    if(mid >= 90){
       if(end >= 95){
        cout << 10;
       } 
       else if(end >= 90){
        cout << 5;
       }
       else
        cout << 0;
    }
    else
        cout << 0;

    return 0;
}