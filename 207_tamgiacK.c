#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int d, k;
    for (int i=0; i<n; ++i, putchar('\n')){
        d=n-i;
        k=i+1;
        for (int j=0; j<=i; ++j){
            printf("%d ", k);
            k+=d;
           
        }
    }
}