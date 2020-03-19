#include <stdio.h>

int main()
{
    int n, i, j,k;
    scanf("%d", &n);
    int a[n], b[n], c[n];
    int dem=0;
    for (i=0; i<n; ++i)
     scanf("%d", &a[i]);
    
    for (j=i=k=0; i<n; ++i)
    {
        if (a[i]%2==0){
            b[j++]=a[i];
            dem++;
        }
        else c[k++]=a[i];
    }

    printf("%d ",dem);
    for (i=0; i<dem; ++i)
        printf("%d ", b[i]);
    printf("\n");
    printf("%d ",n-dem);
    for (i=0; i<n-dem; ++i)
        printf("%d ", c[i]);
}