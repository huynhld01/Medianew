#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    char d;
    for (int i=0; i<n; ++i, putchar('\n')){
        d=n+64-i-1;
        for (int j=0; j<n-i; ++j){
            printf("%c", d++);
        }
    }
}