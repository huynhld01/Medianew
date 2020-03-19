#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int k=n;
    for (int i=0; i<n; ++i, putchar('\n')){
        for (int j=1; j<=k; ++j){
            if (j<n-i) printf("~");
            else if (j==k-2*i || j==k || i==n-1)printf("*");
            else printf(".");
        }
        k+=1;
    }
}