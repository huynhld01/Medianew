#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int i, j;
    int a[n][n];
    for (i=0; i < n; i++){
        for (j=0; j < n; j++) 
            scanf("%d", &a[i][j]);
    }

    for (i=0; i<n; ++i){
        if (i != n/2){
            int tmp=a[i][0];
            a[i][0] = a[i][n-1];
            a[i][n-1] = tmp; 
        }
    }

    for (i=0; i<n; ++i, putchar('\n')){
        for (j=0; j<n; ++j)
            printf("%d ", a[i][j]);
    }
}
