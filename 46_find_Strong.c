#include<stdio.h>

int giaiThua(int n);
int tong(int n);

int main() {
	int n;
	scanf("%d", &n);
	if (tong(n))
		printf("1");
	else 
		printf("0");

}
int giaiThua(int n){
    int t = 1;
    for (int i = 1; i <= n; i++) {
        t = t * i;
    }    
    return t;
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
