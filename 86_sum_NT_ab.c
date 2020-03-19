#include <stdio.h>
#include <math.h>

int find_NT(int n) {
    int c=0;
     if(n<2) return 0;
     for (int i=2; i<=sqrt(n); i++)
     	{if(n%i == 0) c++;}
	if (c==0) return 1;
    else return 0;
}

int main()
{
    int a, b, sum=0;
    scanf("%d%d", &a, &b);
    if (a>b)
    {
        for (int i =b; i<=a; i++)
        {
            if (find_NT(i)) sum+=i;
        }
    }
    else
    {
        for (int i=a; i<=b; i++)
        {
            if (find_NT(i)) sum+=i;
        }
    }
    printf("%d", sum);
}