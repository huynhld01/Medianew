#include <stdio.h>

int isThuanNgich(int n)
{
	int tmp=0, m=n;
	while(n>0)
	{
		tmp = tmp*10 + n%10;
		n/=10;
	}
	if (tmp==m) return 1;
	return 0;
}

int tong(int n)
{
    while (n>0)
    {
        if (n%10 == 9) return 0;
        n/=10;
    }
    return 1;
}
int main()
{
	int n; scanf("%d", &n);
    int c=0;
    for (int i=2; i<n; ++i)
    {
	    if (isThuanNgich(i)==1 && tong(i)==1){
             printf("%d ", i);
             c++;
        }
    }
    printf("\n%d", c);
}