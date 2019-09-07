#include <stdio.h>

int main()
{
	int n, m, lcm;
	scanf("%d%d", &n, &m);
	lcm=n;
	while (lcm%n || lcm%m) 
		lcm++;
	printf("%d", lcm);
}