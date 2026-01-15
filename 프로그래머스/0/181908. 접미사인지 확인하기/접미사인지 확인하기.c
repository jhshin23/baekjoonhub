#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* my_string, const char* is_suffix) {
    int answer = 0;
    int loop_cnt = strlen(my_string) - strlen(is_suffix);
    if(loop_cnt < 0) return answer;

    int my_idx = strlen(my_string)-1;
    int is_idx = strlen(is_suffix)-1;

    for(int i = 0; i < strlen(is_suffix); i++) {
        if(my_string[my_idx] != is_suffix[is_idx]) return answer;
        my_idx--;
        is_idx--;
    }
    
    answer = 1;
    return answer;
}