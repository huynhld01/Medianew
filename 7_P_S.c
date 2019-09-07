#include<stdio.h>

int main()
{
	int n , m;
	scanf("%d%d", &n, &m);
	int P=(m+n)*2, S=m*n;
	if(n<=0 || m<=0) printf("0");
	else{
		printf("%d %d", P, S);
	}
}