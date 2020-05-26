#include <stdio.h>
#include <string.h>

int boSpace(char str[], char length)
{
          char copy[1000];
          int j=0;
          for (int i=0; i < length; i++)
          {
                    if (str[i] != ' ')
                    {
                              copy[j++] = str[i];
                    }                    
          }
          printf("%s", copy);
}

int main()
{
          char str[1000];
          fgets(str, sizeof str, stdin);
          int length = strlen(str)-1;
          boSpace(str, length);
          
          return 0;
}
