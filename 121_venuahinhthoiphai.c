#include <stdio.h>

int main()
{
    int c;
    scanf("%d", &c);
    int h=2*c;

    for (int i=1; i<h; ++i, putchar('\n'))
    {
        if (i<=c){
            for (int j=1; j<=i; ++j)
                printf("*");
        }
        else {
            for (int j=h-i; j>0; j--)
                printf("*");
        }
    }
}