#include <stdio.h>
int main()
{
    int n; scanf("%d", &n);
    int a[n];
    int i, j;
    int dem=0;
    for (i=0; i<n; ++i)
    {
        scanf("%d", &a[i]);
    }

    for ( i = 0; i < n; ++i ) {
        for ( j = 0; j < i; ++j )
            if ( a[j] == a[i] ) break;
            if ( j == i ) printf( "%d ", a[i] );
    }
}