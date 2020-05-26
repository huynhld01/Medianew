#include <stdio.h>

int isNguyenTo(int n)
{
    int i, dem;
    if (n<2) return 0;
    dem = 0;
    for (i = 2; i*i <= n; i++)
    {
        if (n % i == 0) dem += 1;
    }
    
    if (!dem) return 1;
    return 0;
}

int isAchiles(int n)
{
    int i, dem1, dem2;
    dem1 = 0;
    dem2 = 0;
    for (i=2; i<n; i++)
    {
        if (isNguyenTo(i)) dem1++;
    }
    
    for (i=2; i<n; i++)
    {
        if ((isNguyenTo(i)) && (n%i==0) && (n%(i*i)==0)) dem2++;
    }
    
    if (dem1 == dem2) return 1;
    return 0;
}
int main()
{
    int n, i;
    
    scanf("%d", &n);
    for (i=1; i<n; i++)
    {
        if (isAchiles(i)) printf("%d ", i);
    }
    
    return 0;
}