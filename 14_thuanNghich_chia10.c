#include<stdio.h>
#include<math.h>
int isThuanNghich(int n){
	int a[20];
	int cnt=0;
	do{
		a[cnt++] = n%10;
		n/=10;
	}	while(n>0);
	
	for (int i=0; i<=(cnt/2); i++)
	{
		if (a[i] != a[cnt-i-1])
			return 0;
	}
	return 1;
}

int sum(int n)
{
	int s=0;
	while(n>0)
	{
		s+=n%10;
		n/=10;
	}
	return s;
}
int main()
{
	int n, count=0;
	scanf("%d", &n);
	for (int i=pow(10,n-1); i<pow(10, n); i++)
	{
		if(isThuanNghich(i)==1 && sum(i)%10==0) count++;
	}
	printf("%d", count);
}