#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

// num_list_len은 배열 num_list의 길이입니다.
int solution(int num_list[], size_t num_list_len) {
    int answer = 0;
    int o = 0;
    int e = 0;
    int o_count_weight = 0;
    int e_count_weight = 0;
    for(int i = num_list_len-1; i >= 0; i--) {
        if(num_list[i] % 2 == 1) {
            o += num_list[i] * (int)pow(10, o_count_weight);
            o_count_weight++;
        }
        else {
            e += num_list[i] * (int)pow(10, e_count_weight);
            e_count_weight++;
        }
        answer = e + o;
    }
    return answer;
}