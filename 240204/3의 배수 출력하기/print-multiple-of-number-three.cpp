#include <iostream>

int main() {
    int n;
    int i = 1;
    std::cin >> n;

    while(n >= i){
        if(i % 3 == 0){
            std::cout << i << " ";
        }
        i += 1;
    }
    
    return 0;
}