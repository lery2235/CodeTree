#include <iostream>
using namespace std;

int main() {
    int a, n;
    cin >> a >> n;
    int hap = a + n;

    for(int i = 1; i <= n; i++){
        cout << hap << endl;  
        hap += n;
    }
    
    return 0;
}