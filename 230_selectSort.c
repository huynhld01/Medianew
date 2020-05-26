#include <stdio.h>
#define swap(a, b){ int t=a; a=b; b=t;}
void _select_sort(int a[], int n){
    int i, j, k;
    for (i=0; i<n; ++i){
        k=i;
        for (j=i+1; j<n; ++j){
            if (a[k]>a[j]) { 
                k=j;
                swap(a[i], a[k]);
            } 
           for (i=0; i<n; ++i)
                printf("%d ", a[i]);
            printf("\n");
        }
    }    
}

int main(){
    int n, i;
    scanf("%d", &n);
    int a[n];
    for (i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    } 
    _select_sort(a, n);  
    return 0;
}