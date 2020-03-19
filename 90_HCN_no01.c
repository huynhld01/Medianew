#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i=0; i<n; ++i, putchar('\n'))
    {
        for (int j=0; j<m; ++j)
        {
            (j%2) ?   printf("1") : printf("0");
        }
    }
}