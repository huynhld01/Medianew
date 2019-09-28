#include <stdio.h>

void in(int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
}

void out(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    
}

void shift(int a[], int n, int p, int move[])
{
    int temp = 0;
    for (int i=n-p; i<n; i++)
    {
        move[temp++] = a[i];
    }

    for (int i = 0; i < n-p; i++)
    {
        move[temp++] = a[i];
    }
    
}

int main()
{
    int n, p, a[20], move[20];
    scanf("%d", &n);
    in(a, n);
    scanf("%d", &p);
    shift(a,n,p,move);
    out(move,n);
    return 0;
}