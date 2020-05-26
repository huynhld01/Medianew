#include <stdio.h>
#include <string.h>
#include <ctype.h>

char* chuanHoa(char *s)
{
    char *p = s;
    while (( p = strstr( p, "  ")) != NULL)
        stpcpy( p, p+1);
    if (*s == ' ') strcpy( s, s+1);
    p = s+strlen(s)-1;
    if (*p == ' ') *p='\0';
    return s;
}
    
int main()
{
    int a[10], i, pos, c;
    char s[100];
    gets(s);
    chuanHoa(s);
    
    pos = 0, c =0;
    for (i = 0; i < strlen(s); i++)
    {
        if (s[i] == ' '){
            a[pos++] = i;
            c++;
        }
    }
    int max = 0; 
    int min = 10;
    for (i=0; i < c; i++)
    {
        if (a[i+1]-a[i]) > max
    }
     
     
     return 0;
}