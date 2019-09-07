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
	int n; scanf("%d", &n);
	if (n>0) 
	{
		if (is_Hoanhao(n)==1) printf("1");
		else printf("0");
	}
	else if(n==0) printf("1");
	else 
		printf("0");
}