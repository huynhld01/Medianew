#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    
    for (int i=0; i<n; ++i, putchar('\n'))
    {
        int k = n;
        for (int j=0; j<n; ++j){
           if (j<i) printf("%d ", k);
           else printf("%d ", n-i);
           k-=1;
            
        }
      
    }
}