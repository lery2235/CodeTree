#include <iostream>
#include <vector>
using namespace std;

// 두 수의 최대공약수를 구하는 함수
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// 두 수의 최소공배수를 구하는 함수
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

// 주어진 n개의 수들의 최소공배수를 구하는 함수
int get_lcm_of_all(vector<int>& arr, int n) {
    int result = arr[0];
    for (int i = 1; i < n; ++i) {
        result = lcm(result, arr[i]);
    }
    return result;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    int result = get_lcm_of_all(arr, n);
    cout << result << endl;

    return 0;
}