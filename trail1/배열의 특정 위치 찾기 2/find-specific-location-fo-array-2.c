#include <stdio.h>
#define SIZE 10

int main() {
    // Please write your code here.
    int arr[SIZE] = {0};
    int oSum = 0, eSum = 0, result = 0;
    for(int i = 0; i < SIZE; i++) {
        scanf(" %d", &arr[i]);
    }
    for(int i = 0; i < SIZE; i+=2) {
        oSum += arr[i];
    }
    for(int i = 1; i < SIZE; i+=2) {
        eSum += arr[i];
    }    
    if(oSum == eSum)
        result = 0;
    else
        result = (oSum>eSum)? (oSum-eSum):(eSum-oSum);
    printf("%d", result);
    return 0;
}