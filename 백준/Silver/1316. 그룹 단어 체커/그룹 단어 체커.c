#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    
    int n;
    scanf("%d", &n);

    char str[101];
    int result = 0;
    for(int i=0; i<n; i++) {
        scanf("%s", str);
        int len = strlen(str);
        char prev = 0;
        int ap[26] = {0};
        int flag = 1;

        for(int j=0; j<len; j++) {
            if(str[j] != prev) { // 현재 문자가 이전 문자와 같지 않은 경우
                if(ap[str[j] - 'a']) { // 나온 문자인 경우
                    flag = 0;
                    break;
                }
                ap[str[j] - 'a'] = 1;
                prev = str[j];
            }
        }
        if(flag) result++;
    }
    printf("%d", result);

    return 0;
}