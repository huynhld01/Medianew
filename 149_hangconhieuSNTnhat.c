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

int main()
{
    int n;
    int max=-10000;
    scanf("%d", &n);
    int i, j, k=0, pos=0;
    int a[n][n], b[n];
    for (i=0; i < n; i++){
        for (j=0; j < n; j++) 
            scanf("%d", &a[i][j]);
    }

    for (i=0; i<n; ++i){
        for (j=0; j<n; ++j){
            if (isNguyenTo(a[i][j]) == 1){
                b[k++] = a[i][j];
            }
        }
        if (k>max){
             max=k;
             pos = i;
        }
        k=0;
    }

    printf("%d\n", pos+1);
    for (j=0; j<n; ++j)
        if (isNguyenTo(a[pos][j]) == 1) printf("%d ", a[pos][j]);
}