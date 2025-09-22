#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char str[16];
    char **arr = (char**)malloc(5 * sizeof(char*));
    
    int max=0;
    for(int i=0; i<5; i++) {
        scanf("%s" , str);
        int len = strlen(str);
        if(len > max) max = len;
        arr[i] = (char*)malloc((len+1) * sizeof(char));
        strcpy(arr[i], str);
    }

    for(int i=0; i<max; i++) {
        for(int j=0; j<5; j++) {
            if(i<strlen(arr[j])) printf("%c", arr[j][i]);
            else printf("");
        }
    }

    for(int i=0; i<5; i++) free(arr[i]);
    free(arr);

    return 0;
}

/*

ABCDE
abcde
01234
FGHIJ
fghij

*/