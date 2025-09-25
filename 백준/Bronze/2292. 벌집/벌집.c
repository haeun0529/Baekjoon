#include <stdio.h>
#include <math.h>

int main() {

    int n;
    scanf("%d", &n);

    int res;
    int k = 1;
    while(1) {
        int s = 1 + 6 * (k-1) * k/2;
        if(s >= n) {
            res = k;
            break;
        }
        k++;
    }
    printf("%d", res);

    return 0;   
}