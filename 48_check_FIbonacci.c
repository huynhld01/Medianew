#include <stdio.h>

int main()
{
	int n, i, f1=1, f2=1, f=2;
	scanf("%d", &n);
	
	while(f1+f2<=n)
	{
		f=f1+f2;
		f1=f2;
		f2=f;
	}
	
	if (f==n) printf("1");
	else printf("0");
	
}