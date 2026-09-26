#include <stdio.h>
#define SIZE 10

int main() {
    // Please write your code here.
    int arr[SIZE];
    for(int i = 0; i < SIZE; i++) {
        scanf(" %d", &arr[i]);
    }
    for(int i = 1; i < SIZE; i++) {
        if(arr[i] % 3 == 0) {
            printf("%d", arr[i-1]);
            break;
        }
    }
    return 0;
}