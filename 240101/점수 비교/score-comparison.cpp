#include <iostream>
using namespace std;
int main() {

    int a_math,a_english,b_math,b_english;
    cin >> a_math >> a_english >> b_math >> b_english;

    cout << (a_math > b_math && a_english > b_english) << endl;

    return 0;
}