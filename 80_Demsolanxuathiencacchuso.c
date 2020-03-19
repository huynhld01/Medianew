#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    if (n<0) n = n*-1;
    int d[] = {0,0,0,0,0,0,0,0,0,0};
    while (n>0){
        switch (n%10)
        {
        case 0:
            d[0]+=1;
            break;
        case 1:
            d[1]+=1;
            break;
        case 2:
            d[2]+=1;
            break;
        case 3:
            d[3]+=1;
            break;
        case 4:
            d[4]+=1;
            break;
        case 5:
            d[5]+=1;
            break;
        case 6:
            d[6]+=1;
            break;
        case 7:
            d[7]+=1;
            break;
        case 8:
            d[8]+=1;
            break;
        case 9:
            d[9]+=1;
            break;
        }
        n/=10;
    }
    for (int i=0; i<10; i++){
        if (d[i] !=0) {
            printf("%d %d\n", i, d[i]);
        }
    }
}