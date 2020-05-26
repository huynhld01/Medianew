#include <stdio.h>

int isNguyenTo(int n)
{
    int i;
    int c=0;
    if (n<2) return 0;
    for (i=2; i*i<=n; ++i)
    {
        if (n%i==0){ c++;}
    }
    if (c==0) return 1;
    return 0;
}

int sodep(int n)
{
    int t;
    int dao,m;
    m=n;
    dao=0;
    while (n>0){
        t=n%10;
        dao = dao*10+t;
        n/=10;
    }
    if (dao != m && isNguyenTo(dao)==1) return 1;
    else return 0;

}

int main(){
    int a, b; scanf("%d%d", &a, &b);
    int c=0;
    if (a<=b){
        for (int i=a; i<=b; ++i){
            if (sodep(i)==1 && isNguyenTo(i)==1) printf("%d ", i);
            c++;
        }
    }
    else {
        for (int i=b; i<=a; ++i){
            if (sodep(i)==1 && isNguyenTo(i)==1) printf("%d ", i);
            c++;
        }
    }
    if (c==0) printf("0");
}