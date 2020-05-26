#include <stdio.h>
#include <string.h>
int main()
{
     char s[100];
     gets(s);
     int i, j, count;

     for (i=0; i<strlen(s); ++i)
     {
          for (count = 0, j = 0; j<strlen(s); ++j)
               if (s[j] == s[i])
                    if (j<i) break;
                    else count++;
          if (count) printf("%c %d\n", s[i], count);
     }

     return 0;
}