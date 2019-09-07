#include<stdio.h>

int a[100][100];
int n;

void output(){
 int r=0;
 int index = 1;
 while(index < n*n){
  for(int i = r; i < n-r-1; i++)
   a[r][i] = index++;
  for(int i = r; i < n-r-1; i++)
   a[i][n-r-1] = index++;
  for(int i = n-r-1; i >= r+1; i--)
   a[n-r-1][i] = index++;
  for(int i = n-r-1; i >= r+1; i--)
   a[i][r] = index++;
  r++;
 }
 if(n % 2 != 0){
  a[n/2][n/2] = n*n;
 }
 for(int i = 0; i < n; i++){
  for(int j = 0; j < n; j++)
   printf("%d ",a[i][j]);
	printf("\n");
 }
}

int main(){
 scanf("%d", &n);
 output();
}

