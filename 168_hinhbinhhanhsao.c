#include <stdio.h>

int main()
{
    int n; scanf("%d",&n);
    int i, j, c;
    c=2*n;

    for (i=1; i<=n; ++i, putchar('\n')){
        for (j=1; j<c; ++j){
            if (j<=n-i) printf("~");
            else printf("*");
        }
        --c;
    }
}