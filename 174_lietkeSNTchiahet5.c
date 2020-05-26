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

int isTong(int n)
{
    int sum=0;
    while (n>0){
        sum += n%10;
        n/=10;
    }
    return sum;
}

int main()
{
    int n; scanf("%d", &n);
    int c=0;
    for (int i=2; i<n; ++i){
        if (isNguyenTo(i) && isTong(i)%5==0){
             printf("%d ", i);
             c++;
        }
    }
    printf("\n%d", c);
}