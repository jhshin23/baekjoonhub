#include <stdio.h>
#define SIZE 10

int main() {
    // Please write your code here.
    int arr[SIZE] = {0};
    scanf("%d %d", &arr[0], &arr[1]);
    for(int i = 2; i < SIZE; i++) {
        arr[i] = arr[i-1] + arr[i-2];
        
        if(arr[i] >= 10) arr[i] %= 10;
    }
    for(int i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}