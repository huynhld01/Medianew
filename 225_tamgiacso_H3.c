#include <stdio.h>

int main()
{
    int n, i, j, t, k;
    scanf("%d", &n);
    for (i=1; i<=n; ++i, putchar('\n'))
    {
        t=2;
        k=2*i-2;
        for (j=1; j<=n; ++j)
        {
            for (j==1; j<=n-i; j++) printf("~");
            for (j==n-i+1; j<=n; j++){printf("%d", t); t+=2;}
            for (j==n+1; j<n+i; j++){printf("%d", k); k-=2;}
            
           
        }
    }
    return 0;
}