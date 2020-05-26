#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int a[n][n];
    int h=n, k=n;
    for (int i=0; i<n; ++i){
        for (int j=0; j<n; ++j){
            a[i][i] = h--;
            a[i][j] = a[j][i] = k--;
        }
    }
     for (int i=0; i<n; ++i, putchar('\n')){
        for (int j=0; j<n; ++j){
            printf("%d", a[i][j]);
        }
    }
}