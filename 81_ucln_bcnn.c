#include <stdio.h>
int main(){
    int n, m;
    int gcd, lcm;
    scanf("%d%d", &n, &m);

    gcd=n;
    lcm=n;
    while (n%gcd || m%gcd) {gcd--;}

    while (lcm%n || lcm%m) {lcm++;}
	printf("%d %d", gcd, lcm);
}