#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int f1=0, f2=1, fi;
	for (int i=1; i<=n; i++)
	{
		fi=f1+f2;
		f1=f2;
		f2=f1;
		
	}

}