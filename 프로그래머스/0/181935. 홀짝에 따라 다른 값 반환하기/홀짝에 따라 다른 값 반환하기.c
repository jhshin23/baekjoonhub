#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    if(n % 2 == 1) {
        for(int i = n; i > 0; i--) {
            if(i % 2 != 1) continue;
            answer += i;
        }
    }
    else {
        for(int i = n; i > 0; i--) {
            if(i % 2 == 1) continue;
            answer += i * i;
        }
    }
    return answer;
}