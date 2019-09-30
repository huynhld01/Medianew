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
    
    int max1=-10000, max2=-10000;
    
    for (int i = 0; i < n; i++)
    {
        if (max1<a[i]) max1=a[i];      
    }
    for (int i = 0; i < n; i++)
    {
        if ((max2<a[i]) && (a[i] != max1))
            { max2=a[i];}
    }
    printf("%d %d", max1, max2);
    
    
}