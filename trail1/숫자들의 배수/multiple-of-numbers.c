#include <stdio.h>

int main() {
    // Please write your code here.
    int input = 0, m = 1, cnt = 0;
    scanf("%d", &input);

    while (cnt < 2) {
        int result = input * m++;
        printf("%d ", result);

        if (result % 5 == 0)
            cnt++;
    }
    return 0;
}