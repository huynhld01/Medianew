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

int check(int n){
    int dem=0;
        if (isThuanNgich(n)==1){
            for (int i=2; i<n; ++i){
                if (isNguyenTo(i) && n%i==0) dem++;
            }
        }
    if (dem >= 3) return 1;
    else return 0;
    
}

int main()
{
    int a, b; scanf("%d%d", &a, &b);
    if (a>=b) {
        for (int i=a; i<b; ++i){
            if (check(i)==1) printf("%d ", i);
        }
    }
    else {
        for (int i=b; i<a; ++i){
            if (check(i)==1) printf("%d ", i);
        }
    }
    
}