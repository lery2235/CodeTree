#include <stdio.h>

int main() {
    int arr[10];
    int sum2 = 0;
    int sum3 = 0;
    int cnt = 0;

    for(int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < 10; i++){
        if((i + 1) % 2 == 0)
            sum2 += arr[i];
        if((i + 1) % 3 == 0){
            sum3 += arr[i];
            cnt++;
        }
    }
    
    double avg3 = (double)sum3 / cnt;

    printf("%d %.1lf", sum2, avg3);

    return 0;
}