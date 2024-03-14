#include <iostream>
using namespace std;


int recursive(int n)
   {
    if (n < 10) {
        return n * n;
    }
    
    return recursive(n / 10) + (n % 10) * (n % 10);
}

int main() {
    int n;
    cin >> n;
    cout << recursive(n);
    

    return 0;
}