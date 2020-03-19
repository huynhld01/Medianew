#include<stdio.h>
void nhap(int a[10][10], int &n);
void in(int a[10][10], int &n);
void xoaynguoc(int a[10][10], int &n);

int main() {
    int a[10][10], n;
    scanf("%d", &n);
    nhap(a,n);
    //in(a,n);
    xoaynguoc(a,n);
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

void xoaynguoc(int a[10][10], int&n) {
    for (int i=n-1; i >=0; i--) {
        for (int j=0; j<n;j++) {
            printf("%3d", a[j][i]);
        }
        printf("\n");
    }
}