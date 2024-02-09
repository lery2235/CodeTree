#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int classclean = 0;
    int hallway = 0;
    int restroom = 0;

    for(int i = 1; i <= n; i++){
        if(i % 12 == 0){
            restroom++;
        }
        else if(i % 3 == 0){
            hallway++;
        }
        else if(i % 2 == 0){
            classclean++;
        }
       

    }
    cout << classclean <<" "<< hallway << " " << restroom;

    return 0;
}