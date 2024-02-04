#include <iostream>

int main() {
    int a, b;
    int res;
    std::cin >> a >> b;

    for(int i = 1; i <= b; i++){
        if((i % 2 == 1) && (a <= i) && (b >= i)){
            std::cout << i << " ";
        }

    }

    return 0;
}