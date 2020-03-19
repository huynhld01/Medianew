#include <stdio.h>

void nhap(int a[100][100], int n);


int main() {
    int a[100][100], n;
    int tren=0, duoi=0;
    scanf("%d", &n);
    nhap(a,n);
    for (int i=0; i<n; ++i)
    {
        for (int j=0; j<n; ++j){
            if (j>i)
                tren+=a[i][j];
            if (j<i)
                duoi+=a[i][j];
        }
    }
    printf("%d %d", tren, duoi);
}
void nhap(int a[100][100], int n) {
    for (int i=0; i < n; i++){
        for (int j=0; j < n; j++) 
            scanf("\n%d", &a[i][j]);
                }
}

