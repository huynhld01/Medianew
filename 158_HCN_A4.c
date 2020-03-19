#include <stdio.h>

int main()
{
    int h, c;
    scanf("%d%d",&h, &c);

    for (int i=1; i<=h; ++i, putchar('\n'))
    {
        for (int j=1; j<=c; ++j){
            if (j<i) printf("%d", i);
            else printf("%d", j);
        }
    }
}