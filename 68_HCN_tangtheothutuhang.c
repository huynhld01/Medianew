#include <stdio.h>
int main()
{
    int i,j;
    scanf("%d%d", &i, &j);
    int k;
    for (int m = 1; m <= i; m++)
    {
        k=m;
        int h=k;
        for (int n=0;n<j; n++)
        {
            
            printf("%d", h);
            h+=1;
            
        }
        
        printf("\n");
        
    }
    
}