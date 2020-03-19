#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int c=2*n-1;
    int i, j;
    for (i=0; i<n; ++i, putchar('\n'))
    {
        for (j=0; j<c; ++j)
        {
            if (j<i) printf("~");
            else printf("*");
        }
        c-=1;
    }
}