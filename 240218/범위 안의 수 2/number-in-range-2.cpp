#include <iostream>
using namespace std;

int main() {
    int n;
    int cnt = 0, sum = 0;
    double avg;
    for(int i = 1; i <= 10; i++){
        cin >> n;
        if(n > 0 && n <=200){
            sum += n;
            cnt++;
        }
    }
    
    avg =(double) sum / cnt;
    cout << fixed;
    cout.precision(1);
    cout << sum << " " << avg;

    return 0;
}