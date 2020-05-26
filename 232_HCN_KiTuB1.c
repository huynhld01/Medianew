#include <stdio.h>

int main()
{
          int h, c, i, j, t, m;
          
          scanf("%d%d", &h, &c);
          
          for (i=1; i<=h; i++, putchar('\n'))
          {
                  
                    if (i<j)
                    {
                              t = 63;
                              t+=i;
                              m=t-1;
                              for (j=1; j<=c; j++)
                              {
                                        if (j<=c-i) {
                                                  printf("%c", t);
                                                  t+=1;
                                        }
                                        else printf("%c", t);
                              }
                    }
                    else 
                    {
                            
                              for (j=1; j<=c; j++)
                              {
                                      
                                        printf("%c", m+1);
                              }
                    }
          }
          return 0;
}