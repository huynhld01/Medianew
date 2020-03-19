#include <stdio.h>
int main() {
 
 int n, i, j, count;
    scanf( "%d", &n );
 int a[n];
 int dem=0, b[n];
 
 for ( i = 0; i < n; ++i )
    scanf( "%d", a + i );
 for ( i = 0; i < n; ++i ) {
    for ( count = j = 0; j < n; ++j )
        if ( a[j] == a[i] )
        if ( j < i ) break;
        else count++;
    if ( count>1 ) {     
        printf("%d ", a[i]);
        dem+=1;
    }
    
 } 
 if (dem==0) printf("0");
   
}