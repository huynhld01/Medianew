#include<stdio.h>
int tong(int n);
int giaiThua(int n);


int main() {
	int n, m;
	scanf("%d%d", &n, &m);
	if (n<m)
	{
		for (int i=n; i<=m; i++)
		{
			if (tong(i)==1) printf("%d ", i);
		}
	}
	else if (m<n)
	{
		for (int i=m; i<=n; i++)
		{
			if (tong(i)==1) printf("%d ", i);
		}
		
	}
	else return 0;
		
	
}
int tong(int n){
    int tong = 0;
    int m=n;
    while(n > 0){
        int t = n % 10;
        tong += giaiThua(t);
        n /= 10;
    }
    if (tong == m) return 1;
    else return 0;
}
int giaiThua(int n){
    int t = 1;
    for (int i = 1; i <= n; i++) {
        t = t * i;
    }    
    return t;
}


