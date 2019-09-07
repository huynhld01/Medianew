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

int main()
{
	int n; scanf("%d", &n);
	if (isThuanNgich(n) == 1) printf("1");
	else printf("0");
}