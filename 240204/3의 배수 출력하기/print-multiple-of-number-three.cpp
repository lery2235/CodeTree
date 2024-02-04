#include <iostream>

int main() {
    int n;
    int i = 3;
    std::cin >> n;

    while(n >= i){
        std::cout << i << " ";
        i += 3;
    }
    
    return 0;
}