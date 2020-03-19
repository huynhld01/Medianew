#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int k=n;
    for (int i = n; i >0; i--, putchar('\n'))
    {
        for (int j=n; j>0; j--)
         {   printf("%d ", k);
         }
         k--;
    }
    
}