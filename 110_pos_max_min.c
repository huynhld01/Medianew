#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[n], p1, p2;
    for (int i=1; i<=n; ++i){
        scanf("%d", &a[i]);
    }
    int min=100000; int max = -100000;
    for (int i=n; i>0; --i){
        if (a[i] > max) {max = a[i]; p1=i;}
        if (a[i] < min) {min = a[i]; p2=i;}
    }
    printf("%d %d", max, p1);
    printf("\n%d %d", min, p2);
}