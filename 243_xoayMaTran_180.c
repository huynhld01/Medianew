#include <stdio.h>

int main()
{
     int n;
     scanf("%d", &n);
     int b[n*n];
     int a[n][n], i, j, k;
     k=0;
     
     for (i=0; i<n; i++)
     {
          for (j=0; j<n; j++){
               scanf("%d", &a[i][j]);
               b[k] = a[i][j];
               k+=1; 
          }
     }
     
     //for (i=0; i<n; i++)
     //{
     //     for (j=0; j<n; j++){
     //         
     //     }
     //}
     for (i=0; i<n; i++, putchar('\n'))
     {
          for (j=0; j<n; j++){
               printf("%d ", b[k-1]);
               k-=1;
          }
     }
}