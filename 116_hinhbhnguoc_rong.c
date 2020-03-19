#include <stdio.h>

int main()
{
    int h, c;
    scanf("%d%d", &h, &c);
    int k;
    for (int i=1; i<=h; ++i, putchar('\n')){
        for (int j=1; j<=c; ++j){
            if (j<i){ printf("~");}
            else if (i==1 || i==h || j==i || j==c) {printf("*");}
            else {printf(".");}
        }
        c+=1;
    }
}