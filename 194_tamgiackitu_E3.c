#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    char c;
    for (int i=0; i<n; ++i, putchar('\n')){
        c = 2*i+65;
        for (int j=0; j<n-i; ++j){
            printf("%c", c);
            c+=2;
        }
    }
}