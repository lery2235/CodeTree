#include <iostream>

int main() {
    int n;
    int count = 0;

    for(int i = 0; i<=5; i++){
        std::cin >> n;
        if(n % 2 == 0){
            count++;
        }
    }
    std::cout << count;

    return 0;
}