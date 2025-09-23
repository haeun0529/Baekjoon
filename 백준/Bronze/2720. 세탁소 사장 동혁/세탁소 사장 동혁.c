#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int n;
    scanf("%d", &n);

    int input;
    int q = 0, d = 0, ni = 0, p = 0;
    for(int i=0; i<n; i++) {
        scanf("%d", &input);
        q = input / 25;
        input %= 25;

        d = input / 10;
        input %= 10;

        ni = input / 5;
        input %= 5;

        p = input;

        printf("%d %d %d %d\n", q, d, ni, p);
        q = 0, d = 0, ni = 0, p = 0;
    }

    return 0;   
}

/*

3
124
25
194

4 2 0 4
1 0 0 0
7 1 1 4


*/