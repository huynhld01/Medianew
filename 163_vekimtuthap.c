#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int c=n;
    int i, j;
    for (i=1; i<=n; ++i, putchar('\n'))
    {
        for (j=1; j<=c; ++j)
        {
            if (j>n-i) printf("*");
            else printf("~");
        }
        c+=1;
    }
}