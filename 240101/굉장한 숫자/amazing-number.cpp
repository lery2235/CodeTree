#include <iostream>

int main() {
    int n;
    std::cin >> n;

    if(n % 3 == 0 && n % 2 == 1 || n % 5 == 0 && n % 2 == 0){
        std::cout << "true";
    }
    else 
        std::cout << "false";
    return 0;
}