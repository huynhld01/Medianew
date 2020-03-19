#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    for (int i=0; i<n; ++i, putchar('\n'))
    {
        for (int j = n-i; j > 0; j--)
        {
            if ((i==0) || (j==1) || (j==n-i) ) printf("*");
            else printf(".");
        }
    }
}