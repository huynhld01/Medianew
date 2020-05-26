#include <stdio.h>

bool is_hoanhao(int x){
    int sum=0;
    for (int i=1; i<x; ++i){
        if (x%i==0) sum+=i;
    }
    if (tong == x)  return true;
    else return false;
}

int main()
{
	int a, b;
    int c=0;
	scanf("%d%d", &a, &b);
	if (a>=b)
	{
		for (int i=b; i<=a; i++)
		{
			if (is_hoanhao(i))
				printf("%d ", i);
                c++;
		}
	}
	else 
	{
		for (int i=a; i<=b; i++)
		{
			if (is_hoanhao(i))
				printf("%d ", i);
                c++;
		}
		
	}
	if (c==0) printf("0");
}