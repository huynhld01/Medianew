#include <stdio.h>

int main()
{
    int n;
    int i, j;
    scanf("%d", &n);
    int c = 66 ;
    int t;
    
    for (i=0; i<n; ++i, putchar('\n'))
    {
        c = 'B';
        for (j=0; j<2*i+1; ++j){
            if (j==0 || j==2*i) printf("@");
            else{
                if (j<=i) {
                    printf("%c", c);
                    c+=2;
                    t=c-4;
                }
                else {
                
                    printf("%c",t);
                    t-=2;
                    
                }
                
            } 
        }
    }
    return 0;
}