#include<stdio.h>

int n, a[100];
void swap()
{
	int i=0;
	while(n>0)
	{
		a[i] = n%10;
		n/=10;
		i++;
	}
	if (a[0]!=0)
		printf("%d", a[0]);
	for (int j=i-2; j>=1; j--)
		printf("%d", a[j]);
	printf("%d", a[i-1]);
}

int main()
{
	scanf("%d", &n);
	swap();
}