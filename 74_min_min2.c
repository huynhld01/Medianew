#include <stdio.h>
int main()
{
    int n; scanf("%d", &n);
    int a[n];
    while (n<3)
    {
        scanf("%d", &n);
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    int min1=10000, min2=10000;
    
    for (int i = 0; i < n; i++)
    {
        if (min1>a[i]) min1=a[i];      
    }
    for (int i = 0; i < n; i++)
    {
        if ((min2>a[i]) && (a[i] != min1))
            { min2=a[i];}
    }
    printf("%d %d", min1, min2);
    
    
}