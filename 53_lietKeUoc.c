#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
    if(n<=0) return 0;
    else {
	for (int i=1; i<=n; i++)
	{
		if(n%i==0)
			printf("%d\t", i);
	}
}
}