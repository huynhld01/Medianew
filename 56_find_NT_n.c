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
	for (int i=1; i<n; i++)
	{
		if (find_NT(i)) printf("%d ", i);
	}
}