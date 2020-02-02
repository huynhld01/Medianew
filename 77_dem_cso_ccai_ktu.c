#include <stdio.h>
#include <string.h>

int count_number(char *str)
{
    int i=0, d=0;
    while (str[i] != 0)
    {
       if (str[i] >= '0' && str[i] <= '9')
        d++;
        i++;  
    }
    return d;
}

int count_char(char *str)
{
    int i = 0, d = 0;
    while (str[i] != 0)
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        d++;
        i++;
    } 
    return d;
}
int main()
{
    char s[100];
    gets(s);
    int t = strlen(s);
    printf("%d %d %d", count_number(s), count_char(s), t-count_char(s)-count_number(s));
}

