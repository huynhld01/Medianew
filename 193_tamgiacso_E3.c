#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int d;
    for (int i=0; i<n; ++i, putchar('\n')){
        d=2*i+1;
        for (int j=0; j<n-i; ++j){
            printf("%d", d);
            d+=2;
        }
    }
}