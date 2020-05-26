#include <stdio.h>

int a[100][100];
int k;


void output(){
    int r = 0;
    int i, j, n;
    int index = 4;
    n = 2*k-1;
    while (index>0){
        for (i = r; i <= n-r-1; i++)
        {
            a[r][i] = index;
        }
        for (i = r; i<n-r-1; i++)
        {
            a[i][n-r-1] = index;
        }
        for (i = n-r-1; i>=r+1; i--)
        {
            a[n-r-1][i] = index;
        }
        for (i=n-r-1; i>=r+1; i--)
        {
            a[i][r] = index;
        }

        r++;
        index--;
    }    
         for (i=0; i<n; i++, putchar('\n')){
             for (j=0; j<n; j++)
                 printf("%d", a[i][j]);
         }
    
}

int main(){
    scanf("%d", &k);
    output();
}