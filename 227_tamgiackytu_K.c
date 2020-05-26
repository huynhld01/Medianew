#include <stdio.h>

int main()
{
    int n, t, i, j, k;
    scanf("%d", &n);
    int a=65;
    
    for (i=0; i<n; i++, putchar('\n'))
    {     
       t=n-1;
       k=t+a;    
       a=a+i;
        for (j=0; j<=i; j++)
        {   
             
            if (j==1) printf("%c ", a);
            else {
                printf("%c ", k);
                t-=1;
                k+=a;
               
            }
            
        }
    }
}