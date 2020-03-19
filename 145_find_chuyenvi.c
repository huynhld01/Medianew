#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n][n];
    int sum=0, min_colum=10000, pos=0;
    for (int i=0; i < n; i++){
        for (int j=0; j < n; j++) 
            scanf("%d", &a[i][j]);
    }

     for (int i=0; i < n; i++){
        for (int j=0; j < i; j++){
            int tmp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = tmp;
        }
    }

    for (int i=0; i < n; i++, putchar('\n')){
        for (int j=0; j < n; j++) 
            printf("%d ", a[i][j]);
    }

}