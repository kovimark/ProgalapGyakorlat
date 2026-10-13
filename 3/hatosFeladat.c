#include <stdio.h>
#include <math.h>

int main()
{
    double atfogoA = 5.6;
    double atfogoB = 7.2;

    double befogoC = sqrt(pow(atfogoA, 2) + pow(atfogoB, 2));

    printf("A befogo: %.3f", befogoC); 

    return 0;
}