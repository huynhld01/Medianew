#include <stdio.h>
int main()
{
    
    int h,c, i, j, k, m, n;
    scanf("%d%d", &h, &c);
    if (h>c)
    {
        for (i=0; i<h; i++, putchar('\n'))
        {
            k=1+i;
            m=i+1;
            n=i;
            //n=i+1;
            for (j=0; j<c; ++j)
            {
               if (i<c-1){
                   if (j<c-i){
                       printf("%d", k);
                       k+=1;
                   }
                   else{
                       printf("%d", m);
                       m-=1;
                   }
               }
               
               else {
                   printf("%d", n+1);
                   n-=1;
               }
            }
        }
    }
    else
    {
        for (i=0; i<h; i++, putchar('\n'))
        {
            k=1+i;
            m=c-1;
            for (j=0; j<c; ++j)
            {
                if (j<c-i){
                    printf("%d", k);
                    k+=1;
                }
                else{
                    printf("%d", m);
                    m-=1;
                }
            }
        }
    }
}