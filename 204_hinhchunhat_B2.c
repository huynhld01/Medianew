#include <stdio.h>

int main()
{
    int n, m; scanf("%d%d", &n,&m);
    int d;
    for (int i=0; i<n; ++i, putchar('\n')){
        d=n-i;
        for (int j=0; j<m; ++j){
            if (d<m)printf("%d", d++);
            else printf("%d", m);
           
        }
    }
}