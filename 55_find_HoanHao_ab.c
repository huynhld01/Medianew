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
	int a, b;
	scanf("%d%d", &a, &b);
	if (a>b)
	{
		for (int i=b; i<=a; i++)
		{
			if (is_Hoanhao(i)==1)
				printf("%d ", i);
		}
	}
	else 
	{
		for (int i=a; i<=b; i++)
		{
			if (is_Hoanhao(i)==1)
				printf("%d ", i);
		}
		
	}
	
}