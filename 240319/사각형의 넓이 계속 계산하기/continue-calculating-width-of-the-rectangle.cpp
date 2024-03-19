#include <iostream>
using namespace std;

int main() {
    int width, length;
    char c;

    while(1){
        cin >> width >> length;
        cin >> c;
    
        cout << width * length << endl;

        if(c == 'C'){
            break;
        }
    }
    
    return 0;
}