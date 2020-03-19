#include <stdio.h>

int main()
{
    int h, c;
    scanf("%d%d", &h, &c);
    for (int i=0; i<h; ++i, putchar('\n'))
    {
        for (int j=0; j<c; ++j){
            if (j<i) printf("~");
            else printf("*");
        }
        c++;
    }
}