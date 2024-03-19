#include <iostream>
using namespace std;

int main() {
    int n;
    while(1){
        cin >> n;
        if(n == 0){
            break;
        }
        if(n <= 4){
            switch(n){
                case 1:
                    cout << "John" << endl;
                    break;
                case 2:
                    cout << "Tom" << endl;
                    break;
                case 3:
                    cout << "Paul" << endl;
                    break;
                case 4:
                    cout << "Sam" << endl;
                    break;
            }
        }
        else{
            cout << "Vacancy";
            break;
        }
    }
    return 0;
}