#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0; i<n; ++i){
        scanf("%d", &a[i]);
    }
    int min=100000; int max = -100000;
    for (int i=0; i<n; ++i){
        if (a[i] > max) max = a[i];
        if (a[i] < min) min = a[i];
    }
    printf("%d %d", max, min);
}