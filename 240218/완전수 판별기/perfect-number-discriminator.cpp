#include <iostream>

int main() {
    int n;
    int sum = 0;
    std::cin >> n;
    
    for(int i = 1; i < n; i++)
    {
        if(n % i == 0){
          sum+=i;
        }
    }
    
    if(sum == n){
        std::cout << "P";
    }
    else
        std::cout << "N";

    return 0;
}