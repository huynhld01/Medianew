#include <stdio.h>

int isNguyenTo(int );
int isFibo(int );
int isTongChuSo(int );
int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    if (a<=b){
        for (int i=a; i<=b; ++i){
            int x = isTongChuSo(i);
            if (isNguyenTo(i)==1 && isFibo(x==1)) {printf("%d ", i);}
           //if (isFibo(i)==1) printf("%d ", i);
        }
    }
    // else {
        // for (int i=b; i<=a; ++i){
            // if (isnguyento(i) && isfibo(istongchuso(i))) {printf("%d ", i);}
       // }
   // }
    return 0;
}

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

int isFibo(int n){
    int f0 = 1;
    int f1 = 1;
    int fn=0;
    if (n<0) return 0;
    
    while(fn <= n){
        fn = f0+f1;
        f0 = f1;
        f1 = fn;
        if (fn == n) return 1;
        else return 0;
    }
 

}

int isTongChuSo(int n){
    int sum = 0;
    while (n>0){
        sum += n%10;
        n/=10;
    }
    return sum;
}