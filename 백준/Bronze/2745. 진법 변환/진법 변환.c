#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char N[100];
    int B;

    scanf("%s %d", N, &B);
    int len = strlen(N);

    int result = 0;
    int z = 1;
    for(int i=0; i<len; i++) {
        if(N[len-i-1] >= 'A' && N[len-i-1] <= 'Z') result += (N[len-i-1] - 'A' + 10) * z;
        else if(N[len-i-1] >= '0' && N[len-i-1] <= '9') result += (N[len-i-1] - '0') * z;
        z *= B;
    }

    printf("%d", result);

    return 0;
}

/*

ZZZZZ 36

35*36^4 + 35*36^3 + 35*36^2 + 35*36^1 + 35*36^0

*/