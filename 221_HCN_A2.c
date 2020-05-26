#include <stdio.h>

int main()
{
    int h, c, i, j, k, l;
    scanf("%d%d", &h, &c);
    if (h<c)
    {
        for (i=0; i<h; i++, putchar('\n'))
        {
            k=c-i+1;
            for (j=0; j<c; j++)
            {
                if (j<c-i) printf("%d",c-i);
                else{
                    printf("%d", k);
                    k+=1;
                }
            }
        }
        
    }
    else
    {
        for (i=0; i<h; i++, putchar('\n'))
        {
              k=h-i+1;
              l=h-c;
            for (j=0; j<c; ++j)
            {
              
                if (i<c)
                {
                if (j<c-i) printf("%d", h-i);
                else{
                    printf("%d", k);
                    k+=1;
                    }
                }
                else
                {
                    printf("%d", l+1);
                    l+=1;
                }
            }
        }
    }
}