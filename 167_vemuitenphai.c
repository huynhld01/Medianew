#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int i, j, h, c;
    h=2*n-1;
    c=n;

    for (i=0; i<h; ++i, putchar('\n')){
        if (i<=n-1){
            for (j=0; j<c; ++j){
                if (i==0) printf("*");
                else if (j<2*i) printf("~");
                else printf("*");
            }
            c++;
        }

        if (i>n-1){
            for (j=0; j<c-2; ++j){
                if (j<(h-i-1)*2) printf("~");
                else if (i==h-1) printf("*");
                else printf("*");
            }
            c--;
        }
    }
}