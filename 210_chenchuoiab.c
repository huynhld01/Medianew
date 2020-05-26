#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* insertString( char* s, char* s1, size_t k ) {
 char* s2 = strdup( s1 );
 if ( k > strlen( s1 ) ) k = strlen( s1 );
 strcpy( &s2[k], s );
 strcpy( &s2[k + strlen( s )], &s1[k] );
 return s2;
}
int main() {
 char s[1000], s1[1000], *t;
 unsigned long k;
 
 fgets( s, 1000, stdin );
 if ( ( t = strrchr( s, '\n' ) ) != NULL ) *t = '\0';



 fgets( s1, 1000, stdin );
 if ( ( t = strrchr( s1, '\n' ) ) != NULL ) *t = '\0';

 scanf( "%lu", &k );
 printf( "%s", insertString( s1, s, (size_t) k-1 ) );
 return 0;
}