#include <stdio.h>

int main()
{
     int h, c, i, j;
     scanf("%d%d", &h, &c);

     for (i=0; i<h; i++, putchar('\n'))
     {
          for (j=0; j<c; j++)
          {
               if (c>h)
               {
                    if (j<i) printf("%d", c-j);
                    else printf("%d", c-i);
               }
               else
               {
                    if (j<i) printf("%d", h-j);
                    else printf("%d", h-i);
               }
          }
     }
     return 0;
}