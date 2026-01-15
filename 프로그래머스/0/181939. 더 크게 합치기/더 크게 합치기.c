#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(int a, int b) {
    int answer = 0;
    int flag;
    int size = 3;
    
    flag = a;
    while(flag>=10) {
        flag /= 10;
        size++;
    }    
    flag = b;
    while(flag>=10) {
        flag /= 10;
        size++;
    }

    char str[size];
    sprintf(str, "%d%d", a, b);
    int ab = atoi(str);
    sprintf(str, "%d%d", b, a);
    int ba = atoi(str);
    
    answer = (ab >= ba)? ab : ba;
    
    return answer;
}