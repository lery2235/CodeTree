#include <iostream>

using namespace std;

int main() {
    // 변수 선언 및 입력
    int n;
    cin >> n;
	int cnt = 0;
	
	// 1년부터 n년까지 윤년의 횟수를 구합니다.
	for(int i = 1; i <= n; i++) {
		if((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
			cnt++;
	}
		
	cout << cnt;
	
	return 0;
}