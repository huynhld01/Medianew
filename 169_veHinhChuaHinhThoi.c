#include <stdio.h>

int main()
{
    int n;
    int i, j;
    scanf("%d", &n);
    int h=2*n;
    int k;
    for (i=0; i<h-1; ++i, putchar('\n'))
    {
        for (j=0; j< h; ++j)
        {
            if (i<n){
                if (j>=n-i && j<n+i){ printf("~");}
                else printf("*");               
            }
            else{
                k=i-n+1;
                if (j>k  && j<h-k-1) printf("~");
                else printf("*");
            }
        }
    }
}