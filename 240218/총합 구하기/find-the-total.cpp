#include <iostream>
using namespace std;

int main() {
    int a, b;
    int sum = 0;
    std::cin >> a >> b;

    for(int i = a; i <= b; i++){
        if(i % 6 == 0 && i % 8 != 0){
            sum += i;
        }

    }
    std::cout << sum;
    return 0;
}