#include <stdio.h>

int main()
{
    int h, c, i, j, k, l;
    scanf("%d%d", &h, &c);
    
    if (h>c)
    {
        for (i=0; i<h; i++, putchar('\n'))
        {   
            k=h;
            l=i+1;
            for (j=0; j<c; ++j){
                if (i<c-1){
                    printf("%d", k);
                    k-=1;
                }
                else 
                {
                    if (j<h-i){printf("%d", k); k-=1;}
                    else printf("%d", l);
                }
            }
        }
    }

    
    else
    {
        for (i=0; i<h; i++, putchar('\n'))
        {
            k=c;
            l=c-h+i+1;
            for (j=0; j<c; j++)
            {
                if (j<h-i-1)
                { 
                    printf("%d", k);
                    k-=1;
                }
                else printf("%d", l);
            }
        }
    }
}