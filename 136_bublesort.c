#include <stdio.h>
#include <stdlib.h>
void _bubble_sort(int a[], int n){
    int i, j, temp, no_exchange;
    i=1;
    do{
        no_exchange = 1;
        for (j=n-1; j>=i; j--){
            if (a[j-1] > a[j]){
                temp = a[j-1];
                a[j-1] = a[j];
                a[j] = temp;
                no_exchange = 0;
                for (int i=0; i<n; ++i)
                    printf("%d ", a[i]);
                printf("\n");
            }
        }
        i++;
    } while (!no_exchange || (i==n-1));
}

int main(){
    int n; scanf("%d", &n);
    int a[n];
    for (int i=0; i<n; ++i)
        scanf("%d", a+i);

    _bubble_sort(a, n);
    return 0;
}