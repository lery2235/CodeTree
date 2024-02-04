#include <iostream>

int main() {
    int b, a;
    std::cin >> a >> b;
    
    while(a >= b){
        std::cout << a << " ";
        a -= 2;
    } 
    return 0;
}