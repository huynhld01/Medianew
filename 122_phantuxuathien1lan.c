#include <stdio.h>
int main() {
 
 int n, i, j, count;
    scanf( "%d", &n );
 int a[n], c[n];
 int k=0, dem=0;
 
 for ( i = 0; i < n; ++i )
    scanf( "%d", a + i );
 for ( i = 0; i < n; ++i ) {
    for ( count = j = 0; j < n; ++j )
        if ( a[j] == a[i] )
        if ( j < i ) break;
        else count++;
    if ( count==1 ) {
       c[k++] = a[i];
       dem++;
    } 
    
 } 
 if (dem==0) printf("0");
 printf("%d\n", dem);
 for (i=0; i<dem; ++i)
   printf("%d ", c[i]);
}