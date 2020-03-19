#include <stdio.h>

int main()
{
    int n, m, p, i, j;
    scanf("%d%d%d", &n, &m, &p);
    int a[n], b[m], c[n+m];
    for (i=0; i<n; ++i)
     scanf("%d", &a[i]);
    for (i=0; i<m; ++i)
     scanf("%d", &b[i]);
    
    for (i=0; i<p; ++i)
        c[i]=a[i];
    for (i=0; i<m; ++i)
        c[i+p]=b[i];
    for (i=p; i<n; ++i)
        c[i+m]=a[i];
    
    for (i=0; i<m+n; ++i)
        printf("%d ", c[i]);
}