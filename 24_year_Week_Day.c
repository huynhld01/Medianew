#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int  y=0, w=0, d=0;
	y = n/365;
	w = (n%365)/7;
	d = (n%365)-7*w;
	printf("%d %d %d", y, w, d);
	
}