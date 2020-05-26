#include <stdio.h>

int main()
{
    int h, c;
    int k, t;
    scanf("%d%d", &h, &c);
    
    for (int i=0; i<h; ++i, putchar('\n'))
    {
        k=c-i;
        t=2;
        for (int j=0; j<c; ++j)
        {          
            if (j<c-i) printf("%d", k--);  
            else printf("%d", t++);
        }
    }
    return 0;
}