#include <stdio.h>

int main() {
    // Please write your code here.
    enum idxOrder { second = 1, fifth = 4, eighth = 7, max = 10};
    char arr[max] = {0};

    for (int i = 0; i < max; i++) {
        scanf("%c ", &arr[i]);
    }

    printf("%c %c %c", arr[second], arr[fifth], arr[eighth]);
    return 0;
}