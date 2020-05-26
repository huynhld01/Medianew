#include <stdio.h>

int main()
{
    int n, t, i, j, k;
    scanf("%d", &n);
    
    for (i=1; i<=n; i++, putchar('\n'))
    {     
       t=n-1;
       k=t+i;      
        for (j=1; j<=i; j++)
        {   
             
            if (j==1) printf("%d ", i);
            else {
                printf("%d ", k);
                t-=1;
                k+=t;
               
            }
            
        }
    }
}