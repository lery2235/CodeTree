#include <iostream>
using namespace std;

int f(int n, int max){
    int res; 
    cin >> res;

    if(n == 0){
        return max;
    }
    
    if(res >= max){
        max = res;
    }

    return f(n - 1, max);

}

int main() {
    int n;
    int max = 0;
    cin >> n;
    cout << f(n, max);

    return 0;
}