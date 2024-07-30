#include <stdio.h>

int main() {
    int arr[10];
    int flag = 0;

    for(int i = 0; i <= sizeof(arr)/sizeof(arr[0]); i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i <= sizeof(arr)/sizeof(arr[0]); i++){
        if (arr[i] % 3 == 0 && flag == 0){
            flag = 1;
            printf("%d", arr[i-1]);
            break;
        }
    }
    return 0;
}