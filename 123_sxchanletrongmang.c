#include <stdio.h>


int main()
{
    int n, i, j,k,t;
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
    for (i=0; i<dem; ++i){
        for (j=i+1; j<dem; ++j)
            if (b[i]>b[j]) {t=b[i]; b[i]=b[j]; b[j]=t;};
    }
      for (i=0; i<n-dem; ++i){
        for (j=i+1; j<n-dem; ++j)
            if (c[i]>c[j]) {t=c[i]; c[i]=c[j]; c[j]=t;};
    }
  
    for (i=0; i<dem; ++i)
        printf("%d ", b[i]);
    for (i=0; i<n-dem; ++i)
        printf("%d ", c[i]);
}
