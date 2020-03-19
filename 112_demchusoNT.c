#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    if (n<0) n = n*-1;
    int d[] = {0,0,0,0};
    int a[5];
    while (n>0){
        switch (n%10)
        {
        case 2:
            a[0]=2;
            d[0]+=1;
            break;
        case 3:
            a[1]=3;
            d[1]+=1;
            break;
        case 5:
            a[2]=5;
            d[2]+=1;
            break;
        case 7:
            a[3]=7;
            d[3]+=1;
            break;
        }
        n/=10;
    }
    for (int i=0; i<4; i++){
        if (d[i] !=0) {
            printf("%d %d\n", a[i], d[i]);
        }
    }
}