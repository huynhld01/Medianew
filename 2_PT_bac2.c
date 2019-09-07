#include<stdio.h>
#include<math.h>

int main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if(a==0) printf("%.2f", (float)(-c/b));
	else
	{
		int delta = b*b-4*a*c;
		float d = sqrt(delta);
		if(delta>0) printf("%.2f %.2f", (float)(-b+d)/(2*a), (float)(-b-d)/(2*a));
		else if(delta==0) printf("%.2f", (float)-b/(2*a));
		else printf("NO");
		
	}
}