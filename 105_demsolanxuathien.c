#include <stdio.h>
int main()
{
    int n; scanf("%d", &n);
    int a[n];
    int i, j;
    int dem=0;
    for (i=0; i<n; ++i)
    {
        scanf("%d", &a[i]);
    }

    for (i=0; i<n; ++i){
        for (dem=j=0; j<n; ++j){
            if (a[j]==a[i]){
                if (j<i) break;
                else dem++;
            }
        }
        if (dem) printf("%d %d\n", a[i], dem);
    }    
}