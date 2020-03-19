#include <stdio.h>
int main() {
 
 int n, i, j, count;
    scanf( "%d", &n );
 int a[n];
 
 for ( i = 0; i < n; ++i )
    scanf( "%d", a + i );
for ( i = 0; i < n; ++i ) {
    for ( j = 0; j < i; ++j )
        if ( a[j] == a[i] ) break;
    if ( j == i ) printf( "%d ", a[i] );
    }
 putchar( '\n' );
 return 0;
}