#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* myString, const char* pat) {
    int answer = 0, cnt = 0, size = strlen(myString), pat_size = strlen(pat);
    char* str = (char*)malloc(size+1); 
    strcpy(str, myString);
    for(int i = 0 ; i < size; i++) {
        if(str[i] == 'A') {
            str[i] = 'B';
        }
        else if (str[i] == 'B') {
            str[i] = 'A';
        }
    }
    for(int i = 0; i < size - pat_size + 1; i++) {
      for(int j = 0; j < pat_size; j++) {
          if(str[i+j] == pat[j]) {
              cnt++;
          } 
          if(cnt == pat_size) {
              return 1;
          }
      }
        cnt = 0;
    }
    return answer;
}