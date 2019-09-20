#include <stdio.h>

void isFibo(int n)
{
    static int f1=0, f2=1, f3;
    if (n>0){
        f3 = f1+f2;
        f1=f2;
        f2=f3;
        printf("%d ", f3);
        isFibo(n-1);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("0 1 ");
    isFibo(n-2);
}