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
    int a, b;
    scanf("%d%d", &a, &b);
    if (b>a){
        for (int i=a; i<=b; ++i)
            if (isNguyenTo(i)==1) printf("%d ", i);
    }
     if (a>b){
        for (int i=b; i<=a; ++i)
            if (isNguyenTo(i)==1) printf("%d ", i);
    }
}