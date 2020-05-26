#include <stdio.h>

int main()
{
          int h, c , i, j;
          scanf("%d%d", &h, &c);
          
          for (i=0; i<h; i++, putchar('\n'))
          {
                    for (j=0; j<c; j++)
                    {
                              if (h % 3 == 0){
                                        if (h/3 <= i && i <2*h/3) printf("0");
                                        else printf("1");
                              }
                              else 
                              {
                                        if (i == 2*h/3-1) printf("0");
                                        else printf("1");
                              }
                              
                    }
          }
          
          return 0;
}