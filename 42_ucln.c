#include <stdio.h>

int main()
{
	int n, m, gcd;
	scanf("%d%d", &n, &m);
	gcd=n;
	while (n%gcd || m%gcd) 
		gcd--;
	printf("%d", gcd);
}