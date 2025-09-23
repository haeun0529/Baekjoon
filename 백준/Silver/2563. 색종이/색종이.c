#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int arr[100][100] = {0};

    int n;
    scanf("%d", &n);

    int x, y;
    for(int i=0; i<n; i++) {
        scanf("%d %d", &x, &y);
        for(int a = x; a<x+10; a++) {
            for(int b = y; b<y+10; b++) {
                arr[a][b] = 1;
            }
        }
    }

    int sum = 0;
    for(int i=0; i<100; i++) {
        for(int j=0; j<100; j++) {
            if(arr[i][j] == 1) sum++;
        }
    }

    printf("%d", sum);

    return 0;
}