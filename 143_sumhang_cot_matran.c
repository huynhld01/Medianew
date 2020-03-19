#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n][n];
    int sum=0;
    for (int i=0; i < n; i++){
        for (int j=0; j < n; j++) 
            scanf("%d", &a[i][j]);
    }

     for (int i=0; i < n; i++){
        for (int j=0; j < n; j++) 
        {    sum += a[i][j];
        }
         printf("%d ", sum);
        sum=0;
    }
    printf("\n");
    for (int j=0; j < n; j++){
        for (int i=0; i < n; i++) 
        {    sum += a[i][j];
        }
         printf("%d ", sum);
        sum=0;
    }
    
}
