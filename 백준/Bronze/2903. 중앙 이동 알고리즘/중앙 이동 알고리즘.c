#include <stdio.h>
#include <math.h>

int main() {

    int n;
    scanf("%d", &n);

    int temp;
    if(n == 0) printf("4");
    else {
        temp = pow(2, n);
        temp = pow(temp+1, 2);
        printf("%d", temp);
    }

    return 0;   
}
