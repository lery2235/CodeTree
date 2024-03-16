#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    int min_cal = 0;
    cin >> a >> b >> c >> d;
    
    while(true){
        if(a == c && b == d){
            break;
        }
        b++;
        min_cal++;

        if(b == 60){
            a++;
            b = 0;
        }
    }

    cout << min_cal;


    return 0;
}