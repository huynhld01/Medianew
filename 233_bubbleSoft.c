#include <stdio.h>
#include <stdlib.h>
void _bubble_sort(int a[], int n){
    int tmp;
    int thaydoi = 0;
    for (int i=0; i<n; i++)
    {
        for (int j=0; j < n-1; j++)
            if (a[j] > a[j+1])
            {
                tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
                thaydoi = 1;
            }
        if (thaydoi){
            for (int z = 0; z< n; z++)
                printf("%d ", a[z]);
            putchar('\n');
        }
        thaydoi = 0;
    }
}

int main(){
    int n;
    scanf("%d", &n);
    int a[100];
    for (int i=0; i<n; i++)
           scanf("%d", &a[i]);
    _bubble_sort(a, n);
    return 0;
}