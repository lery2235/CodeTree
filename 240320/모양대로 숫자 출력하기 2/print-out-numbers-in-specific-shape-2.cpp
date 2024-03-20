#include <iostream>
using namespace std;

int main() {
    int n;
    int cnt = 2;
    int icnt = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << cnt  << " ";
                cnt += 2;
                if(cnt > 8){
                    cnt = 2;
                }
                    }
        cout << endl;
    }
    return 0;
}