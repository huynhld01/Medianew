#include<stdio.h>
int main()
{
	char c;
	scanf("%c", &c);
	if ((('a'<= c)  && (c <= 'z')) || (('A'<= c) && (c <= 'Z')))
		printf("1");
	else 
		printf("0");
}