#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int i, j, k;
    int h=2*n-1;
    for (i=0; i<2*n-1; ++i, putchar('\n'))
    {
        if (i<n-1){
            for (j=0; j<h; ++j){
                if (j<h/2) printf("~");
                else printf("*");
            }
            h-=2;
            k=h;
        }

        if (i >= n-1) {
            for (j=0; j<k; ++j){
                if (j<k/2) printf("~");
                else printf("*");
            }
            k+=2;
        }
    }
    
}