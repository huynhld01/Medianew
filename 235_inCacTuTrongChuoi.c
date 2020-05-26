#include <stdio.h>
#include <string.h>

int wordCount(char str[], char length)
{
          for (int i=0; i < length-1; i++)
          {
                    if (str[i] != ' ')
                    {
                              printf("%c", str[i]);
                    }
                    else printf("\n");
                    
          }
}

int main()
{
          char str[1000];
          fgets(str, sizeof str, stdin);
          int length = strlen(str);
          wordCount(str, length);
          
          return 0;
}
