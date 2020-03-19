#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    for (int i=2*n-1; i>0; ++i, putchar('\n'))
    {
         for (int j=0; j<n; ++j)
         {
             if (i<n){
                if (j<i) printf("~");
                else printf("*");
             }
             else{
                
                if (j<i) printf("*");
                else printf("~");
             }
         }
    }
}