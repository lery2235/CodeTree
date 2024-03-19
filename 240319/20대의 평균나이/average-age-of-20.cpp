#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double avg = 0.0;
    int sum = 0;
    int cnt = 0;

    while(1){
        int n;
        cin >> n;
        
        if(n >= 30){
            break;
        }   

        sum += n;
        cnt++;
    }
    avg = (double)sum / cnt;
    cout << fixed << setprecision(2) << avg;



    return 0;
}