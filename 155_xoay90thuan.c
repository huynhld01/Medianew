#include<stdio.h>
void nhap(int a[10][10], int &n);
void in(int a[10][10], int &n);
void xoaythuan(int a[10][10], int &n);

int main() {
    int a[10][10], n;
    scanf("%d", &n);
    nhap(a,n);
    //in(a,n);
    xoaythuan(a,n);
}

void nhap(int a[10][10], int &n) {
    for (int i=0; i < n; i++){
        for (int j=0; j < n; j++) 
            scanf("\n%d", &a[i][j]);
                }
}

void in(int a[10][10], int &n) {
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++)
           { printf("%2d", a[i][j]);}
           printf("\n");

    }
}

void xoaythuan(int a[10][10], int&n) {
    for (int i=0; i<n; i++) {
        for (int j=n-1; j>=0;j--) {
            printf("%3d", a[j][i]);
        }
        printf("\n");
    }
}