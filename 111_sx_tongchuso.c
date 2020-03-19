#include <stdio.h>

int tong(int n)
{
    int sum=0, t;
    while (n>0){
        t=n%10;
        sum+=t;
        n/=10;
    }
    
    return sum;
}

int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    if (tong(a)>tong(b)) printf("%d %d", b, a);
    else printf("%d %d", a, b);
    
}