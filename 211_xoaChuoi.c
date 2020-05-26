#include <stdio.h>
#include <string.h>

char xoatu(char s[], char s1[])
{
    int len = strlen(s);
    int len2 = strlen(s1);
    int i;
    for (i=0; i<len; ++i){
        if ((s[i]==s1[0]) && (s[i+len2-1] == s1[len2-1]))
        {
            int j;
            for (j=i; j<len; j++){
                s[j-1] = s[j+len2];
            }
            s[j+len2]='\0';
          
        }
    }
    printf("%s",s);
}

int main(){
    char s[100];
    char s1[100];
    gets(s);
    gets(s1);
    xoatu(s,s1);
    return 0;
}