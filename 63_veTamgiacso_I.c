#include <stdio.h>

int main()
{
    int n, i, j=1;
    scanf("%d", &n);
    for (i=0; i<n; i++)
    {
        for (int k=0; k<=i; k++ )
        {
            printf("%d", j);
            j++;
        }
        printf("\n");

    }
}