#include<stdio.h>

int main()
{
	int n, i;
	scanf("%d", &n);
	if(n<0) printf("0");
	else
	i= n%2 == 0? printf("0") : printf("1");
	
}