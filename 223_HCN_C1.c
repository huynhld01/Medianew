#include <stdio.h>
int main()
{
    int a=65;
    int h,c, i, j, k, m, n;
    scanf("%d%d", &h, &c);
    if (h>c)
    {
        for (i=0; i<h; i++, putchar('\n'))
        {
            k=a+i;
            m=a+i-1;
            n=a+c-1;
            for (j=0; j<c; ++j)
            {
               if (i<c){
                   if (j<c-i){
                       printf("%c", k);
                       k+=1;
                   }
                   else{
                       printf("%c", m);
                       m-=1;
                   }
               }
               
               else {
                   printf("%c", n);
                   n-=1;
               }
            }
        }
    }
    else
    {
        for (i=0; i<h; i++, putchar('\n'))
        {
            k=a+i;
            m=a+i-1;
            for (j=0; j<c; ++j)
            {
                if (j<c-i){
                    printf("%c", k);
                    k+=1;
                }
                else{
                    printf("%c", m);
                    m-=1;
                }
            }
        }
    }
}