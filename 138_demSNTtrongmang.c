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

void _bubble_sort(int a[], int n){
    int i, j, temp, no_exchange;
    i=1;
    do{
        no_exchange = 1;
        for (j=n-1; j>=i; j--){
            if (a[j-1] > a[j]){
                temp = a[j-1];
                a[j-1] = a[j];
                a[j] = temp;
                no_exchange = 0;
            }
        }
        i++;
    } while (!no_exchange || (i==n-1));
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n], b[n], i, j=0, count, dem=0;
    for (i=0; i<n; ++i)
        scanf("%d", &a[i]);
    _bubble_sort(a,n);

    for (i=0; i<n; ++i)
        if (isNguyenTo(a[i])==1) {
            b[j++]=a[i];
            dem++;
        }
    
    for (i=0; i<n; ++i){
        for (count=j=0; j<; ++j)
            if (b[j]==b[i])
                if (j<i) break;
                else count++;
        if (count>=1) printf("%d %d\n", b[i], count);
    }
}