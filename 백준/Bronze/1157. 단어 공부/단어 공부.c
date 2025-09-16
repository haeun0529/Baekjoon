#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    
    char str[1000001], newstr[1000001];
    scanf("%s", str);
    int len = strlen(str);
    
    for(int i=0; i<len; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') newstr[i] = str[i] - 32;
        else newstr[i] = str[i];
    }

    int cnt[26] = {0};
    for(int i=0; i<len; i++) {
        cnt[newstr[i] - 'A']++;
    }

    int max1=-1, max2=-1;
    char maxchar;
    for(int i=0; i<26; i++) {
        //printf("%c:%d\n", 'A'+i, cnt[i]);
        if(cnt[i] > max1) {
            max2 = max1;
            max1 = cnt[i];
            maxchar = 'A' + i;
        }
        else if(cnt[i] > max2 && cnt[i] <= max1) {
            max2 = cnt[i];
        }
    }
    //printf("%d %d\n", max1, max2);
    if(max1==max2) {
        printf("?");
        return 0;
    }
    printf("%c", maxchar);

    return 0;
}