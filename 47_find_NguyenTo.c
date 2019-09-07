#include <stdio.h>
#include <math.h>

bool find_NT(int n) {
     if(n<2) return false;
     for (int i=2; i<=sqrt(n); i++)
     	if(n%i == 0) return false;
	return true;
	 }
    
main()
{
    int n;
    scanf("%d", &n);
    if (find_NT(n)) printf("1");
    else printf("0");
}