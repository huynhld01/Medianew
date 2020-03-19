#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    for (int i=n-1; i>=0; --i, putchar('\n')){
        for (int j=0; j<n; ++j){
            if ((j>=i) || (j==n-1)) printf("*");
            else printf("~");
        }
    }
}