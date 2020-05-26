#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int d;
    for (int i=0; i<n; ++i, putchar('\n')){
        d=1;
        for (int j=0; j<=i; ++j){
            printf("%d", d++);
        }
    }
}