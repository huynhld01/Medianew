#include <stdio.h>
int main()
{
    int i, j;
    scanf("%d%d", &i, &j);
    for (int m=1; m<=i; m++)
    {
        for (int n=0; n<j; n++)
            {
                printf("%d", m);
            }
        printf("\n");
    }
}