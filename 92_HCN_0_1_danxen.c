#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i=0; i<n; ++i, putchar('\n'))
    {
        for (int j=0; j<m; ++j)
        {
            if (i%2==0){
                (j%2==0) ? printf("1") : printf("0");
            }
            else {
                (j%2==0) ? printf("0") : printf("1");
            }
        }
    }
}