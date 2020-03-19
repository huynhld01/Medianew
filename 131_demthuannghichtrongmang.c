#include <stdio.h>

int isThuanNgich(int n)
{
	int tmp=0, m=n;
	while(n>0)
	{
		tmp = tmp*10 + n%10;
		n/=10;
	}
	if (tmp==m) return 1;
	return 0;
}

int main() {
 
 int n, i;
    scanf( "%d", &n );
 int a[n], dem=0;
 
 for ( i = 0; i < n; ++i )
    scanf( "%d", a + i );
 for (i=0; i<n; ++i){
     if (isThuanNgich(a[i]) && a[i]>10) dem++;
 }
 printf("%d ", dem);
 for (i=0; i<n; ++i){
     if (isThuanNgich(a[i]) && a[i]>10) printf("%d ", a[i]);
 }
}