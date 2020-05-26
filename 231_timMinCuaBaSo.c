#include <stdio.h>

int min2Number(int x, int y)
{
          return (x<y ? x:y);
}


int min3Number(int x, int y, int z)
{
          return min2Number(x, min2Number(y,z));
}
int main()
{
          int a, b, c;
          scanf("%d%d%d", &a, &b, &c);
          printf("%d", min3Number(a,b,c));
          
     
     return 0;
}