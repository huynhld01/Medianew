#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int i, j, c;
    c=2*n;

    for (i=1; i<=n; ++i, putchar('\n')){
        for (j=1; j<c; ++j){
            if (i==1 || j==i || j==c-1) printf("*");
            else if (j<i) printf("~");
            else printf(".");
        }
        c--;
    }
}