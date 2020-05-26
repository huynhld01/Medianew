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
    char str[100];
    char *p = str;
    int i, count;
    
    gets(str);
    chuanHoa(str);
    strlwr(str); 
    
    count = 0;
    for (i=0; i < strlen(str); i++)
    {
        if (str[i] == ' '){
            count = i;
            break;
        }
    }
    
    for (i=0; i<strlen(str); i++)
    {
        if (str[i]==' ' && str[i+1] != '\0') str[i+1]-=32;
    }
    
    for (i=count+1; i < strlen(str); i++)
        printf("%c", str[i]);
    printf(", ");
    for (i=0; i < count; i++)
    {
        str[i]-=32;
        printf("%c", str[i]);
    }
    
    return 0;
}