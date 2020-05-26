#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	char str[100], s1[100];
	gets(str);
     int j=0;
     for (int i=0; i < strlen(str); i++)
     {
          if (i+1 <= strlen(str))
          {
               if (str[i] >='A' && str[i] <= 'Z' || 0 <= str[i] || str[i] <=9)
               {
                    if (str[i+1] >='A' && str[i+1] <= 'Z')
                         {printf("%c", str[i]);}
                    else if (str[i+1] == ' ')
                         {printf("%c ", str[i]);}
                    else 
                         {printf("%c", str[i]);}
               }
          }
       
          
     }
 
	return 0;
}
