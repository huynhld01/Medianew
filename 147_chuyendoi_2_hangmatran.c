#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int a[n][m];
    int pos1, pos2;
    for (int i=1; i <= n; i++){
        for (int j=1; j <= m; j++) 
            scanf("%d", &a[i][j]);
    }
 
    scanf("%d%d", &pos1, &pos2);
    for (int j=1; j <= m; j++){
        int temp = a[pos1][j];
        a[pos1][j] = a[pos2][j];
        a[pos2][j] = temp;
    }
    
   for (int i=1; i <= n; i++, putchar('\n')){
        for (int j=1; j <= m; j++) 
            printf("%d ", a[i][j]);
    }

}
