#include<stdio.h>
int main()
{
	int n, tmp=0;
	scanf("%d", &n);
	while(n>0)
	{
		tmp=tmp*10+n%10;
		n/=10;
	}
	printf("%d", tmp);
}