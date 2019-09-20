#include <stdio.h>
int main()
{
    int i,j;
    scanf("%d%d", &i, &j);
    for (int r=0; r<i; r++)
        {
            for (int c=1; c<=j; c++)
            {
                printf ("%d", c);   
            }
        printf("\n");
        }
}