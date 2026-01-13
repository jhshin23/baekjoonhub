#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(int a, int b) {
    int answer = 0;
    char s_a[32];
    snprintf(s_a, 32, "%d", a);
    char s_b[32];
    snprintf(s_b, 32, "%d", b);
    strcat(s_a, s_b);
    int aplusb = atoi(s_a);
    int ab2 = 2*a*b;
    answer = (aplusb>=ab2)? aplusb:ab2;
    return answer;
}