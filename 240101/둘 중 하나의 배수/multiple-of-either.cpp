#include <iostream>

int main() {
    int a;
    std::cin >> a;
    
    if(a % 3 == 0 || a % 5 == 0){
        std::cout << 1;
    }
    else 
        std::cout << 0;
    return 0;
}