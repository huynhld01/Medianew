#include <stdio.h>

int main()
{
    float celcius;
    scanf("%f", &celcius);
    float f = (celcius*9/5)+32;
    printf("%.2f", f);
}