#include <stdio.h>

int main(){
    int n, i, j;
    int k=1;
    scanf("%d", &n);

    for (i=0; i<n; ++i, putchar('\n')){
        for (j=0; j<n;++j, k+=1)
            printf("%d ", k);
    }
}