#include <stdio.h>

int main() {
    // Please write your code here.
    int arr[100] = {0};
    int size = 0;
    scanf("%d", &size);
    for(int i = 0; i < size; i++) {
        scanf(" %d", &arr[i]);
    }
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i] * arr[i]);
    }
    return 0;
}