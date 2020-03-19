#include <stdio.h>
int main()
{
    int n; scanf("%d", &n);
    int a[n], b[n];
    int i, j;
    int dem=0, c=0;
    for (i=0; i<n; ++i)
    {
        scanf("%d", &a[i]);
    }

    for (i=0; i<n; ++i){
        for (dem=j=0; j<n; ++j){
            if (a[j]==a[i]){
                if (j<i) break;
                else dem++;
            }
        }
        if(dem) b[i]=dem;
    }
    for (i=0; i<n; ++i)
    {
        if (b[i]==1) c++;
    }
    printf("%d\n", c);
    for ( i = 0; i < n; ++i ) {
        for ( j = 0; j < i; ++j )
            if ( a[j] == a[i] ) break;
            if ( j == i ) printf( "%d ", a[i] );
    }
}