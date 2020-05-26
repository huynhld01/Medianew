#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int i, j, h;
   
    for (i=0; i<n; ++i, putchar('\n')){
        h=1;
        for (j=0; j<n; ++j){
            if (j< i) printf("~");
            else printf("%d",h++);
            
        }
         
    }
}