#include <iostream>

int main() {
    int a;
    std::cin >> a;
    if(a % 13 == 0 || a % 19 == 0){
        std::cout << "True";
    }
    else 
        std::cout << "False";

    return 0;
}