#include <iostream>

int main() {
    int n;
    int i = 1;
    std::cin >> n;

    while(n >= i){
        std::cout << i << " ";
        i += 3;
    }
    
    return 0;
}