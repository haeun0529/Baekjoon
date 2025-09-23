#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int N, B;
    scanf("%d %d", &N, &B);

    int temp, index=0;
    char str[100];
    while(N > 0) {
        temp = N % B;
        if(temp < 10) str[index] = temp + '0';
        else str[index] = temp - 10 + 'A';
        N /= B;
        index++;
    }
    
    for(int i=index-1; i>=0; i--) printf("%c", str[i]);

    return 0;
}