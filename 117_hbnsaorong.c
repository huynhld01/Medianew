#include <stdio.h>

int main()
{
    int h;
    scanf("%d", &h);
    int k=2*h-1;
    for (int i=1; i<=h; ++i, putchar('\n')){
        for (int j=0; j<k;++j){
            if (j<h-i){ printf("~");}
            else if (i==1 || i==h || j==h-i || j==k-1) {printf("*");}
            else {printf(".");}
        }
        k-=1;
    }
}