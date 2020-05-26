#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int i,j,h;
    for (i=0; i<n; ++i, putchar('\n')){
        int t=1;
        for (j=0; j<(2*i)+1; ++j){
            if (j<=i) {
                printf("%d", t);
                t+=2;
                h=t-4;
            }
            
            else {
                printf("%d", h);
                h-=2;
            }
        }
    }
}