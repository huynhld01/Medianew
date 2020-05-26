#include <stdio.h>

int isNguyenTo(int n);

int main() {
     int a[100][100], n, b[100];
     int k=0;

     scanf("%d", &n);
    
     for (int i=0; i<n; i++)
     {
          for (int j=0; j<n; j++)
          {
               scanf("%d", &a[i][j]);
          }
     }
     
     for (int i=0; i<n; i++, putchar('\n'))
     {
          for (int j=0; j<n; j++)
          {
               printf("%d ", a[i][j]);
          }
     }
     
     return 0;
}


int isNguyenTo(int n)
{
    int i;
    int c=0;
    if (n<2) return 0;
    for (i=2; i*i<=n; ++i)
    {
        if (n%i==0){ c++;}
    }
    if (c==0) return 1;
    return 0;
}