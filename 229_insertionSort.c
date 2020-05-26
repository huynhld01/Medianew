#include <stdio.h>

void _insertion_sort(int a[], int n){
    int i, j, k, temp;
    for (i=1; i<n; ++i){ 
        temp = a[i];    
        j=i-1;          
        while ((a[j] > temp) && (j>=0)){
            a[j+1] = a[j]; 
            j--;
        }
        a[j+1] = temp; 

          for (int i=0; i<n; ++i)
            printf("%d ", a[i]);
        printf("\n");
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
    _insertion_sort(a, n);  
    return 0;
}