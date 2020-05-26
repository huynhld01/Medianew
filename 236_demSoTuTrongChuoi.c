#include <stdio.h>
#include <string.h>

int wordCount(char str[], char length)
{
          int count = (str[0] != ' ');
          for (int i=0; i < length-1; i++)
          {
                    if (str[i] == ' ' && str[i+1] != ' ')
                    {
                              count++;
                    }                    
          }
          return count;
}

int main()
{
          char str[1000];
          fgets(str, sizeof str, stdin);
          int length = strlen(str)-1;
          printf("%d", wordCount(str, length));
          
          return 0;
}
