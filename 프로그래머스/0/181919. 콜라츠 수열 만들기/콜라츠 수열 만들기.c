#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int cnt = 1;
    int m = n;
    while(m!=1) {
        cnt++;
        if(m%2==0) {
            m = m / 2;
        }
        else {
            m = 3 * m + 1;
        }    
    }
    
    int* answer = (int*)malloc(cnt * sizeof(int));
    answer[0] = n;
    for(int i = 1; i < cnt; i++) {
        if(n%2==0) {
            n = n / 2;
            answer[i] = n;
        }
        else {
            n = 3 * n + 1;
            answer[i] = n;
        }    
    }
    return answer;
}