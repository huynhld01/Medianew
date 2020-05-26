#include <stdio.h>

int is_Powerfull(int );
int isNguyenTo(int n);
int main()
{
    int a, b, i, j;
    scanf("%d%d", &a, &b);
    if (a<=b){
        for (i=a; i<=b; ++i){
            if (is_Powerfull(i)==1) printf("%d ", i);
        }
    }
    else {
        for (i=b; i<=a; ++i){
            if (is_Powerfull(i)==1) printf("%d ", i);
        }
    }
    return 0;
}

int isNguyenTo(int n)
{
    int i;
    int c=0;
    if (n<2) return 0;
    for (i=2; i*i<n; ++i)
    {
        if (n%i==0){ c++;}
    }
    if (c==0) return 1;
    return 0;
}

int is_Powerfull(int n)
{
    int i;
    int c=0;
    for (i=2; i<=n; ++i){
        if (isNguyenTo(i)==1 && n%i==0 && n%(i*i)==0){
            c++;
        }
    }
     if (c!=0) return 1;
     return 0;
    
}