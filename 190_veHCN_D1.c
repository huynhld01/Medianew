#include <stdio.h>

int main()
{
    int h, c;
    int k, t;
    scanf("%d%d", &h, &c);
    
    for (int i=1; i<=h; ++i, putchar('\n'))
    {
        k=i;
        t=2;
        for (int j=1; j<=c; ++j)
        {          
            if (j<=i) printf("%d", k--);  
            else printf("%d", t++);
        }
    }
    return 0;
}