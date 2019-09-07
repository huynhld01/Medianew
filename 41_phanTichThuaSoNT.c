#include <stdio.h>
int main()
{
    int n; scanf("%d", &n);
    for (int i=2; i<=n;i++)
    {
        while(n%i==0)
        {
            if (n==i) printf("%d",i);
            else 
            printf("%d\t", i);
            n/=i;
        }
    }
}