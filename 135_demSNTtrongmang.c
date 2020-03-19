#include <stdio.h>

int isNguyenTo(int n);

int main()
{
    int n, i;
    scanf("%d", &n);
    int a[n];
    int count=0;

    for (i=0; i<n; ++i)
        scanf("%d", a+i);
    for (i=0; i<n; ++i){
        if (isNguyenTo(a[i])==1) count++;
    }
    printf("%d ", count);
    for (i=0; i<n; ++i){
        if (isNguyenTo(a[i])==1) printf("%d ", a[i]);
    }
}

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