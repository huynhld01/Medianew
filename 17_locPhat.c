#include<stdio.h>

int check(int n)
{
	int cnt;
	while(n>0)
	{
		cnt=n%10;
		if(cnt!=0 && cnt!=6 && cnt!=8) return 0;
		n/=10;
	}
	return 1;
}

int main()
{
	int n;
	scanf("%d", &n);
	if(check(n)==1) printf("1");
	else printf("0");
}
