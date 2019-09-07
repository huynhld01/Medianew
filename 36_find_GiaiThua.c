#include<stdio.h>

int find_giaiThua(int n)
{
	if (n==0) return 1;
	else if(n<0) return 1;
	return n*find_giaiThua(n-1);
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d",find_giaiThua(n));
	
}