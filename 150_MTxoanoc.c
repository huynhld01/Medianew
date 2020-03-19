#include <stdio.h>

int isNguyenTo(int n)
{
    int i;
    int c=0;
    if (n<2) return 0;
    for (i=2; i*i<=n; ++i)
    {
        if (n%i==0){ c++;}
    }
    if (c==0) return 1;
    return 0;
}

void inmatran(int a[100][100], int n)
{
    for (int i=0; i<n; ++i, putchar('\n')){
        for (int j=0; j<n; ++j){
            printf("%d ", a[i][j]);
        }
    }
}

void xoanoc(int n){
    int a[100][100], i, d=2, b=0;
    while (b<=n/2)
    {
        for (i=b; i<n-b; i++) a[b][i] = isNguyenTo(d++);
            for (i=b+1; i<n-b; i++) a[i][n-b-1] = isNguyenTo(d++);
                for (i=n-b-2; i>=b; i--) a[n-b-1][i]= isNguyenTo(d++);
                    for (i=n-b-2; i>b; i--) a[i][b] = isNguyenTo(d++);
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
