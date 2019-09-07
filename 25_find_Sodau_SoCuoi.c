#include <stdio.h>
#include <math.h>
int chu_Sodau(int n)
{
	int temp;
	do{
		temp = n%10;
		n/=10;
	} while(n>0);
	return temp;	
}

int main()
{
    int n;
    scanf("%d", &n);
	printf("%d %d", chu_Sodau(n), n%10);
 
}