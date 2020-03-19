#include <stdio.h>

void inmatran(int a[100][100], int n)
{
    for (int i=0; i<n; ++i, putchar('\n')){
        for (int j=0; j<n; ++j){
            printf("%d ", a[i][j]);
        }
    }
}

void xoanoc(int n){
    int a[100][100], i, d=n*n, b=0;
    while (b<=n/2)
    {
        for (i=b; i<n-b; i++) a[b][i] = d--;
            for (i=b+1; i<n-b; i++) a[i][n-b-1] = d--;
                for (i=n-b-2; i>=b; i--) a[n-b-1][i]=d--;
                    for (i=n-b-2; i>b; i--) a[i][b] = d--;
                        b++;
    }
    inmatran(a,n);
}
int main()
{
    int n;
    scanf("%d", &n);
    xoanoc(n);
}
