#include <stdio.h>
int main()
{
    int r,c;
    scanf("%d%d", &r, &c);
    for (int i = 0; i < r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            if (i==j) printf("%d",j);
            else if (i<=j) printf("%d",j);
            else printf("%d", i);
        }
        printf("\n");
    }
    
}