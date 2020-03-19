#include <stdio.h>
#include <string.h>

char cvt_thuong_hoa(char *str)
{
    int i = 0;
    while(str[i] != 0)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
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
    cvt_thuong_hoa(s);    
}