#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i=1; i<=n; ++i, putchar('\n'))
    {
        for (int j=1; j<=m; ++j)
        {
            if (i==1 || i==n || j==1 || j==m) printf("1");
            else printf("0");
        }
    }
}