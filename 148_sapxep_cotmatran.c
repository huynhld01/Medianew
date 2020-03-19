#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int i, j, k;
    int a[n][n];
    for (i=0; i < n; i++){
        for (j=0; j < n; j++) 
            scanf("%d", &a[i][j]);
    }

    for (j=0; j<n; ++j)
    {
        for (i=0; i<n; ++i){
            for (k=i+1; k<n; ++k){
            if (a[i][j] < a[k][j]){
                int tmp = a[i][j];
                a[i][j] = a[k][j];
                a[k][j] = tmp;
            }
            }
        }
    }
    
    for (i=0; i<n; ++i, putchar('\n')){
        for (j=0; j<n; ++j)
            printf("%d ", a[i][j]);
    }

}
