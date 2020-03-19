#include <stdio.h>

int main()
{
    int h;
    scanf("%d",&h);
    int k=h;
    for (int i=0; i<h; ++i, putchar('\n'))
    {
        while (k<2*h){
        for (int j=0; j<k; ++j){
           
            if (j==h-1) printf("0");    
           // if (i>0 && j==h-i-1) printf("1");   
            else printf("*"); 
        }
        k+=1;
        printf("\n");
        }
    }
}