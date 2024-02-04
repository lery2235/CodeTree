#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int i = 1;

    while(n >= i){
        std::cout << "*" << std::endl;
        i += 1;
    }

    return 0;
}