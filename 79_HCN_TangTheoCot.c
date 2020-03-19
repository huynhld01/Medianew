#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i=0; i<n; ++i, putchar('\n')){
        for (int j=1; j<=m; j++){
            printf("%d", j);
        }
    }
}