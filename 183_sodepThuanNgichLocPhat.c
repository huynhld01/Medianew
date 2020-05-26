#include <stdio.h>

int is_sodep(int n){
    int m=n;
    int dao=0;
    int sum=0;
    int dem=0;
    int temp=0;
    while (n>0){
        temp=n%10;
        if (temp==6) dem++;
        dao=dao*10+temp;
        sum+=temp;
        n/=10;
    }
    if (dao==m && dem>=1 && sum%10==8) return 1;
    return 0;
}

int main(){
    int a, b; scanf("%d%d", &a, &b);
    int c=0;
    if (a<=b){
        for (int i=a; i<=b; ++i){
            if (is_sodep(i)==1) printf("%d ", i);
            c++;
        }
    }
    else {
        for (int i=b; i<=a; ++i){
            if (is_sodep(i)==1) printf("%d ", i);
            c++;
        }
    }
    if (c==0) printf("0");
}