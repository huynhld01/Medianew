#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int k=1;
    for (int i=0; i<n; ++i, putchar('\n'))
    {
        for (int j=0; j<m; ++j)
        {
            printf("%d", k);
            k+=1;
        }
    }
}