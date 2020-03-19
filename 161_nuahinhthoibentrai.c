#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int i, j;

    for (i=0; i<2*n-1; ++i, putchar('\n'))
    {
        for (j=0; j<n; ++j){
            if (i<n){
                if (j>=n-i-1) printf("*");
                else printf("~");
            }
            else {
                if (j<=i-n) printf("~");
                else printf("*");
            }
        }
    }
    
}