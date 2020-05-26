#include <stdio.h>

int isNguyenTo(int n)
{
    int i;
    int c=0;
    if (n<2) return 0;
    for (i=2; i*i<=n; ++i)
    {
        if (n%i==0){ c++;}
    }
    if (c==0) return 1;
    return 0;
}

int sumOfNumber(int n)
{
    int sum = 0;
    while (n>0)
    {
        sum += n%10;
        n /= 10;
    }
    return sum;
}

int checkFiBo(int n)
{
    int f0 = 1;
    int f1 = 1;
    int f;
    while (f0+f1 <= n)
    {
        f = f0+f1;
        f0 = f1;
        f1 = f;
    }
    if (f == n) return 1;
    else return 0;
}

int main()
{
    int a, b, i;
    scanf("%d%d", &a, &b);
    if (a<=b)
    {
        for (i=a; i<=b; i++)
        {
            if (isNguyenTo(i) && checkFiBo(sumOfNumber(i)))
            {
                printf("%d ", i);
            }
        }
    }
    else
    {
          for (i=b; i<=a; i++)
        {
            if (isNguyenTo(i) && checkFiBo(sumOfNumber(i)))
            {
                printf("%d ", i);
            }
        }
    }
    
    return 0;
}