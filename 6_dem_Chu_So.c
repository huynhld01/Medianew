#include<stdio.h>

int demChuSo(int n)
{
	int cnt=0;
	while(n>0)
	{	cnt++;
		n/=10;
	}
	printf("%d", cnt);
}

int main()
{
	int n;
	scanf("%d", &n);
	demChuSo(n);
}