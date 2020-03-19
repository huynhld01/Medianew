#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n][n];
    int sum=0, max_colum=-10000, pos=0;
    for (int i=0; i < n; i++){
        for (int j=0; j < n; j++) 
            scanf("%d", &a[i][j]);
    }
 
    for (int j=0; j < n; j++){
        for (int i=0; i < n; i++) 
        {    sum += a[i][j];
        }
        if (sum > max_colum){
            max_colum = sum; 
            pos = j;
        }
        sum=0;
    }
    printf("%d\n", pos+1);
    for (int i=0; i < n; i++) 
        printf("%d ", a[i][pos]);

}
