#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int a[n], i, j;
    int d=10000;
    int tmp, pos;

    for (i=0; i<n; ++i)
        scanf("%d", &a[i]);
    
    for (i=0; i<n; ++i){
        for (j=i+1; j<n; ++j){
            if (a[i]>a[j]){
                int t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }


    for (i=0; i<n; i++){
        tmp = (a[i+1] - a[i]);
        if (tmp < d){
            d = tmp;
            pos=i;
        }
    }
    printf("%d ", d);
    printf("%d ", a[pos]);
    printf("%d ", a[pos+1]);
}