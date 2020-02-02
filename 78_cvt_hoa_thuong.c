#include <stdio.h>
#include <string.h>

char cvt_hoa_thuong(char *str)
{
    int i = 0;
    while(str[i] != 0)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            {
                str[i] = str[i] + 32;
            }
        else if (str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] = str[i] - 32;
            }
        else
            {
                str[i] = str[i];
            }
        i++;
    }
    puts(str);
}

int main()
{
    char s[100];
    gets(s);
    cvt_hoa_thuong(s);    
}