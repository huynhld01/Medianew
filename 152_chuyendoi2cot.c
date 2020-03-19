#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int a[n][m];
    int pos1, pos2;
    for (int i=0; i < n; i++){
        for (int j=0; j < m; j++) 
            scanf("%d", &a[i][j]);
    }
 
    scanf("%d%d", &pos1, &pos2);
    for (int i=0; i < m; i++){
        int temp = a[i][pos1-1];
        a[i][pos1-1] = a[i][pos2-1];
        a[i][pos2-1] = temp;
    }
    
   for (int i=0; i < n; i++, putchar('\n')){
        for (int j=0; j < m; j++) 
            printf("%d ", a[i][j]);
    }

}
