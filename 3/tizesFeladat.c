#include <stdio.h>
#include <math.h>
int main()
{
    printf("Hany evig kamatozzon a penze?");
    int t;
    scanf("%d", &t);
    int c = 10000;
    float r = 0.08;
    int m = 12;

    float vegosszeg = c*pow((1 + (float)r/m), m*t);
    printf("A vegosszeg: %.3f\n", vegosszeg);
    return 0;
}