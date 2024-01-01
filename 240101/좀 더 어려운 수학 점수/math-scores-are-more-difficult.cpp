#include <iostream>

int main() {
    int a_math, a_english;
    int b_math, b_english;
    
    std::cin >> a_math >> a_english >> b_math >> b_englsih;

    if(a_math > b_math || (a_math == b_math && a_english > b_english)){
        std::cout << "A"; 
    }
    else
        cout << "B";

    return 0;
}