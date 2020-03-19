#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i=0; i<n; ++i, putchar('\n'))
    {
        for (int j=0; j<m; ++j)
        {
            (i%2) ?   printf("0") : printf("1");
        }
    }
}