#include<stdio.h>
#include<math.h>

int main()
{
	int n, i, j, temp1, temp2;
	scanf("%d", &n);
	int a[n];
	for (i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	int b[n], m=0, x;
	for (i=0; i<n; i++)
	{
		for (j=1; j<n; j++)
		{
			b[m] = abs(a[i]-a[j]);
			m++;
		}
	} 
	for (m=0; m++; ){
		printf("%d ", b[m]);
	}
}