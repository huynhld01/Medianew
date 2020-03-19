#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    for (int i=0; i<n; ++i, putchar('\n'))
    {
        for (int j=0; j<n; ++j)
        {
            if (j<i) printf("~");
            else if ((j==i)||(i==0)||(j==n-1)) printf("*");
            else printf(".");
        }
    }
}