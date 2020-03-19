#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int a[n], Ch[n], Le[n];
    int l=0, c=0, dem=0;
    for (int i=0; i<n; ++i){
        scanf("%d", &a[i]);
    }

    for (int i=0; i<n; ++i)
    {
        if (a[i] % 2==0) {
            Ch[c++]=a[i];
            dem++;
        }
        else {
            Le[l++]=a[i];
        }
    }
    for (int i = 0; i < dem; i++)
    {
        printf("%d ", Ch[i]);
    }
     printf("\n");
    for (int i = 0; i < n-dem; i++)
    {
        printf("%d ", Le[i]);
    }
   
  
}