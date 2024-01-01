#include <iostream>
using namespace std;
int main() {
    int mid,end;

    cin >> mid >> end;
    
    if(mid >= 90 && end >= 95)
        cout << "100000";
    else if(mid >= 90 && end >= 90){
        cout << "50000";
    }
    else
        cout << "0";

    return 0;
}