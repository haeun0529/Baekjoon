#include <stdio.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);

    int k=1, sum=1;
    while(n > sum) {
        k++;
        sum = k * (k+1) / 2;
    }

    int f = (k-1)*k/2+1;
    int s = n-f;

    int n1, n2;
    if(k % 2 == 0) { 
        n1 = 1+s;
        n2 = k-s;
    }
    else {
        n1 = k-s;
        n2 = 1+s;
    }

    printf("%d/%d", n1, n2);

    return 0;   
}