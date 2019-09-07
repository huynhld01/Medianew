#include <stdio.h>

int is_Hoanhao(int n)
{
	int temp=0, i=1;
	while(i<n)
	{
		if (n%i==0) temp+=i;
		i++;
	}
	
	if (temp==n) return 1;
	else return 0;
}

int main()
{
	int n, i=1;
	scanf("%d", &n);
	if (n>0)
	{
		while(i<n)
		{
		if (is_Hoanhao(i) == 1) printf("%d ", i);
		i++;
		}
	}
	else return 0;
	
}