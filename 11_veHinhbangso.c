#include<stdio.h>
int a[100][100], n, d=1, r=0;

void vehinh(){
    while(r<n){
        for (int i=r; i<n-r-1; i++) {
            a[r][i] = d++;
        }
        for (int i=r; i<n-r-1;i++) {
            a[i][n-r-1] = d--;
        }
        for (int i=n-r-1; i>=r+1; i--) {
            a[n-r-1][i] = d++;
        }
        for (int i=n-r-1; i>=r+1; i--) {
            a[i][r] = d--;
        }
        r++;
    }
    if(n%2!=0){
        a[n/2][n/2] =1;
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++)
            printf("%d ", a[i][j]);
            printf("\n");
            
    }
}

int main(){
    scanf("%d", &n);
    vehinh();
}