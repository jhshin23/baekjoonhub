#include <stdio.h>

int main() {
    // Please write your code here.
    int arr[10];
    int sum2 = 0, cnt = 0;
    double sum3 = 0, avg = 0;
    for(int i = 0; i < 10; i++) {
        scanf("%d ", &arr[i]);
    }

    for(int i = 0; i < 10; i++) {
        if((i+1)%2 == 0) {
            sum2 += arr[i];
        }
        if((i+1)%3 == 0) {
            sum3 += arr[i];
            cnt++;
        }
    }
    avg = sum3 / cnt;
    printf("%d %.1f", sum2, avg);

    return 0;
}