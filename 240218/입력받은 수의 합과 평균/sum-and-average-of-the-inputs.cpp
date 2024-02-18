#include <iostream>

int main() {
    int n;
    int sum = 0, cnt = 0;
    double avg; 
    std::cin >> n;

    for(int i = 0; i < n; i++){
        int a;
        std::cin >> a;
        sum += a;
        cnt++;
    }

    avg = (double)sum / cnt;

    std::cout << std::fixed;
    std::cout.precision(1);
    std::cout << sum << " " << avg;

    return 0;
}