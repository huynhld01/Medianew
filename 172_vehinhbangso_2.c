#include <stdio.h>

int n;
int a[100][100];
int r=0, i, j;

void input()
{
    scanf("%d", &n);
}

void output()
{
    int d=n;
        for (i=r; i<n-r-1; ++i){
            a[r][i] = d;
        }
        /*for (i=r; i<n-r-1; ++i){
            a[i][n-r-1] = d--;
        }
        for (i=n-1-r; i>=r+1; i--){
            a[n-r-1][i] = d--;
        }*/
        for (i=n-r-1; i>=r; i--){
            a[i][r] = d;
        }
        r++;

  
    for (i=0; i<n; ++i, putchar('\n')){
        for (j=0; j<n; ++j)
            printf("%d ", a[i][j]);
    }
}
int main(){
    input();
    output();

}