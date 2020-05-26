#include <stdio.h>

int main()
{
    int h, c; scanf("%d%d", &h, &c);
    for (int i=0; i<h; ++i, putchar('\n')){
        for (int j=0; j<c; ++j)
        {
            if (h%2==0){
                if (c%2==0){
                    if (c/2-1 <= j && j<=c/2 || h/2-1 <= i && i <= h/2) printf("0");
                    else printf("1");
                }
                else{
                    if ( j == c/2 || h/2-1 <= i && i <= h/2) printf("0");
                    else printf("1");
                }
            }
            
            else{
                if (c%2==0){
                    if (c/2-1 <= j && j<=c/2 || i == h/2) printf("0");
                    else printf("1");
                }
                else{
                    if (j== c/2 || i == h/2) printf("0");
                    else printf("1");
                }
                
            }
        }

    }
    
}