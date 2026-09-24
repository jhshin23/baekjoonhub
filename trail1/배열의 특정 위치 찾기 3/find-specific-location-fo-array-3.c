#include <stdio.h>

int main() {
    // Please write your code here.
    int arr[100] = {0};
    int lastIdx = 0;
    for (int i = 0; i < 100; i++) {
        scanf("%d ", &arr[i]);
        if (arr[i] == 0) {
            lastIdx = i-1;
            break;

        }
    }
    printf("%d", arr[lastIdx] + arr[lastIdx - 1] + arr[lastIdx - 2]);
    return 0;
}
