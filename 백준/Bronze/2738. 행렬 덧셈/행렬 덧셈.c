#include <stdio.h>
#include <stdlib.h>

int main () {

    int n, m;
    scanf("%d %d", &n, &m);

    int **arr = (int**)malloc(n * sizeof(int*));
    for(int i=0; i<n; i++) 
    arr[i] = (int*)malloc(m * sizeof(int));

    int **brr = (int**)malloc(n * sizeof(int*));
    for(int i=0; i<n; i++)
    brr[i] = (int*)malloc(m * sizeof(int));

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++)
            scanf("%d", &arr[i][j]);
    }

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++)
            scanf("%d", &brr[i][j]);
    }

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            printf("%d ", arr[i][j]+brr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/*

3 3
1 1 1
2 2 2
0 1 0
3 3 3
4 4 4
5 5 100

*/