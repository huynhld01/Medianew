#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int d, k;
    for (int i=0; i<n; ++i, putchar('\n')){
        d=1; k=2;
        for (int j=0; j<=i; ++j){
            if (i%2==0)printf("%d", d);
            else printf("%d", k);
            d+=2;
            k+=2;
        }
    }
}