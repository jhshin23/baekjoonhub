#include <stdio.h>

int main() {
    // Please write your code here.
    int size = 0, evenIdx = 0;
    int arr[100] = {0};
    int evenArr[100] = {0};
    scanf("%d", &size);
    
    for(int i = 0; i < size; i++) {
        scanf(" %d", &arr[i]);
    }
    for(int i = 0; i < size; i++) {
        if(arr[i] % 2 == 0){
            evenArr[evenIdx++] = arr[i];
        }
    }
    for(int i = 0; i < evenIdx; i++) {
        printf("%d ", evenArr[i]);
    }
    return 0;
}