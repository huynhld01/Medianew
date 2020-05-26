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

int thuannghich(int n){
    int m=n;
    int t=0;
    int dao=0;
   
    while (n>0){
        t=n%10;
        dao=dao*10+t;
        n/=10;
    }
    if (dao==m) return 1;
    else return 0;
    
}

int sodep(int n){
    int i, dem;
    dem=0;
    for (i=2; i<n; ++i){
        if (isNguyenTo(i)==1 && n%i==0){
            dem++;
        }
    }
    if (dem>=3) return 1;
    else return 0;
}

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    if (a<=b){
    for (int i=a; i<=b; ++i){
        if (thuannghich(i)==1 && sodep(i)==1){
            printf("%d ", i);
        }
    }
    }
    else {
        for (int i=b; i<=a; ++i){
        if (thuannghich(i)==1 && sodep(i)==1){
            printf("%d ", i);
        }
    }
    }
}