#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    for (int i=0; i<n; ++i, putchar('\n')){
        for (int j=1; j<=n; ++j){
            if (j<n-i) printf("~");
            else if (j==n-i || j==n || i==n-1)printf("*");
            else printf(".");
        }
    }
}