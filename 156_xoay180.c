#include <stdio.h>

int main()
{
     int n;
     scanf("%d", &n);
     int a[n][n], i, j;
     
     for (i=0; i<n; i++)
     {
          for (j=0; j<n; j++){
               scanf("%d", &a[i][j]);
          }
     }
     
     for (i=0; i<n; i++, putchar('\n'))
     {
          for (j=0; j<n; j++){
               printf("%d ", a[n-i][n-j]);
          }
     }
}