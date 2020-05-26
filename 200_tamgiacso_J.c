#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int d, k;
    for (int i=0; i<n; ++i, putchar('\n')){
        d=1; k=i+1;
        for (int j=0; j<=i; ++j){
            if (i%2==0){
                printf("%d", d++);
            }
            if (i%2!=0){
                printf("%d",k--);
            }
        }
    }
}
