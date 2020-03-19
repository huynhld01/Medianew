#include <stdio.h>

int main()
{
    int r,c;
    scanf("%d%d", &r, &c);
    int k;
    for (int i=0; i<r; i++, putchar('\n'))
    {
        k=i;
        for (int j=0; j<c; j++)
        {
            k+=1;
            if (k<=c) printf("%d", k); 
            if (k>c) printf("%d", c-j);
        }
    }
}