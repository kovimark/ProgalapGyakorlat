#include <stdio.h>

int main()
{
    int sugar = 3;
    double kerulet = 2 * 3.14 * sugar;
    double terulet = 3.14 * sugar * sugar;
    printf("A kor kerulete: %.2lf\n", kerulet);
    printf("A kor terulete: %.2lf\n", terulet);
    return 0;
}