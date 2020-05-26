#include <stdio.h>

int main()
{
    int n, i, j;
    scanf("%d", &n);
    int t, k;
    
    for (i=1; i<=n; ++i, putchar('\n'))
    {
        t = 1;
        for (j=1; j<=n+i-1; ++j)
        {
            if (j >n-i  && j<=n){
                printf("%d", t);
                t+=2;
                k=t-4;
            }
            else if(j>n){
                printf("%d", k);
                k-=2;
            }
            else printf("~");
        }
    }
    return 0;
}