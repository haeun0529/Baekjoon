#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    
    char str[101];
    scanf("%s", str);

    int len = strlen(str);
    int cnt = 0;
    for(int i=0; i<len; ) {
        if( (str[i] == 'c') && ((str[i+1] == '=') || (str[i+1] == '-')) ) {
            cnt++;
            i += 2;
        }
        else if( (str[i] == 'd') && (str[i+1] == 'z') && (str[i+2] == '=')) {
            cnt++;
            i += 3;
        }
        else if( (str[i] == 'd') && (str[i+1]=='-')) {
            cnt++;
            i += 2;
        }
        else if( (str[i] == 'l') && (str[i+1] == 'j')) {
            cnt++;
            i += 2;
        }
        else if( (str[i] == 'n') && (str[i+1] == 'j')) {
            cnt++;
            i += 2;
        }
        else if( (str[i] == 's') && (str[i+1] == '=')) {
            cnt++;
            i += 2;
        }
        else if( (str[i] == 'z') && (str[i+1] == '=')) {
            cnt++;
            i += 2;
        }
        else {
            cnt++;
            i++;
        }
    }
    printf("%d", cnt);

    return 0;
}