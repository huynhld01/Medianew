#include <stdio.h>
int main()
{
    int n, p;
    scanf("%d", &n);
    int a[n];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &p);
    for (int i = p; i < n; i++)
    {
        a[i] = a[i+1];
    }

    for (int i = 1; i <= n-1; i++)
    {
        printf("%d ", a[i]);
    }
    
    
    
}