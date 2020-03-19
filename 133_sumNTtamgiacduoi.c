#include <stdio.h>

void nhap(int a[100][100], int n);
int isNguyenTo(int n);

int main() {
    int a[100][100], n;
    int sum=0;
    scanf("%d", &n);
    nhap(a,n);
    for (int i=0; i<n; ++i)
    {
        for (int j=0; j<n; ++j){
            if ((i>=j) && (isNguyenTo(a[i][j])==1))
                sum+=a[i][j];
        }
    }
   
    if (sum) printf("%d", sum);
    else printf("0");
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