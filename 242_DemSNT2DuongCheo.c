#include <stdio.h>

int isNguyenTo(int n);

int main() {
     int a[100][100], n, b[100];
     int k=0, c, i, j;

     scanf("%d", &n);
    
     for (i=0; i<n; i++)
     {
          for (j=0; j<n; j++)
          {
               scanf("%d", &a[i][j]);
          }
     }
     
     for (i=0; i<n; i++)
     {
          for (j=0; j<n; j++)
          {
               if (i==j || j == n-i-1)
               {
                    if (isNguyenTo(a[i][j])==1)
                    {   
                         b[k] = a[i][j];
                         k+=1;
                    }
                 
               }
          }
     }
     
     for (i=0; i<k-1; i++)
     {
          for (c=j=i+1; j<k; ++j)
               if (b[j] != b[i]) b[c++] = b[j];
          k=c;
     }
     
     printf("%d", k);
 
  
     return 0;
}


int isNguyenTo(int n)
{
    int i;
    int c=0;
    if (n<2) return 0;
    if (n==2) return 1;
    for (i=2; i*i<=n; ++i)
    {
        if (n%i==0){ c++;}
    }
    if (c==0) return 1;
    return 0;
}