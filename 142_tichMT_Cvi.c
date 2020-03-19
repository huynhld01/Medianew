#include <stdio.h>

int main()
{
    int n, m, k, sum;
    scanf("%d%d", &n, &m);
    int a[n][m], b[m][n], c[n][n];

    for (int i=0; i < n; i++){
        for (int j=0; j < m; j++) 
            scanf("%d", &a[i][j]);
    }

     for (int i=0; i < n; i++){
        for (int j=0; j < m; j++) 
            b[i][j]=a[i][j];
    }
    //Find chuyen vi
     for (int i=0; i < m; i++){
        for (int j=0; j < n; j++) {
            b[i][j] = a[j][i];
        }
    }

     for (int i=0; i < n; i++){
        for (int j=0; j < m; j++) {
            sum=0;
          for (k=0; k<m; k++){
              sum = sum + a[i][k]*b[k][j];
          }
          c[i][j] = sum;
        }
    }
     for (int i=0; i < n; i++, putchar('\n')){
        for (int j=0; j < n; j++) 
            printf("%d ", c[i][j]);
    }
}
