#include <stdio.h>

int main()
{
    int n;
    int i, j;
    scanf("%d", &n);
    int c=n;
    int h=2*n;
    for (i=1; i<h; ++i, putchar('\n'))
    {
        if (i<n){
            for (j=1; j<=c; ++j){
                if (j>n-i) printf("*");
                else printf("~");
            }
            c+=1;
        }
        else{
            for (j=1; j<=c; ++j){
                if (j>=i-n+1) printf("*");
                else printf("~");

            }
            c-=1;
        }
}
}