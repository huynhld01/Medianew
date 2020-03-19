#include <stdio.h>

void nhap(int a[100][100], int n);
int isNguyenTo(int n);

int main() {
    int a[100][100], n;
    int count=0, t=0, dem=0;
    int i,j;
    int b[100], c[100];
    scanf("%d", &n);
    nhap(a,n);
    for (i=0; i<n; ++i)
    {
        for (j=0; j<n; ++j){
            if (((i==j) && (isNguyenTo(a[i][j])==1)) || ((j==n-1-i) && (isNguyenTo(a[i][j])==1))) 
                b[count++] = a[i][j];
        }
    }
   
    for (i=0; i<count; ++i){
        for (j=0; j<i; ++j)
            if (b[j]==b[i]) break;
        if (j==i) c[dem++]=b[i];
    }

    printf("%d", dem);
}

void nhap(int a[100][100], int n) {
    for (int i=0; i < n; i++){
        for (int j=0; j < n; j++) 
            scanf("\n%d", &a[i][j]);
                }
}

int isNguyenTo(int n)
{
    int i;
    int c=0;
    if (n<2) return 0;
    for (i=2; i*i<=n; ++i)
    {
        if (n%i==0){ c++;}
    }
    if (c==0) return 1;
    return 0;
}