#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    for (int i=0; i<n; ++i, putchar('\n')){
        for (int j=0; j<=i; ++j){
            printf("%d", i+1);
        }
    }
}