#include<stdio.h>

int count_ChanLe(int n)
{
	int c = 0, l = 0;
	while(n>0)
	{
		if((n%10)%2==0) c++;
		else l++;
		n/=10;
	}
	printf("%d %d", l, c);
}

int main()
{
	int n;
	scanf("%d", &n);
	if(n<0) return 0;
	else
	count_ChanLe(n);
}