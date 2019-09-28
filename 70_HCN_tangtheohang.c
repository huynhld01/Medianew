#include <stdio.h>
int main()
{
    int m, n, temp=1;
    scanf("%d%d", &m, &n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d", temp);
            temp+=1;
        }
        printf("\n");
    }
    
}