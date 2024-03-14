#include <iostream>


void star_five(){
    
    for(int i = 0; i<10; i++){
      std::cout << "*";
    }
    std::cout << std::endl;
}


int main() {

    for(int i = 0; i<5; i++){
        star_five();
    }
    return 0;
}