#include <iostream>

int main() {
    int s;
    std::cin >> s;

    if(s >= 3 && s <= 5){
        std::cout << "Spring";
    }
    else if(s >= 6 && s <= 8){
        std::cout << "Summer";
    }
    else if(s >= 9 && s <= 11){
        std::cout << "Fall";
    }
    else
        std::cout << "Winter";

    return 0;
}