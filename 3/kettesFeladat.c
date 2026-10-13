#include <stdio.h>

int main()
{
    double ertek1;
    
    ertek1 = 6 * 2 / 3 + 5 / 2 - 7 * 3 % 2;
    printf("a) int eredmeny: %d\n", ertek1);

    float ertek2 = 6 * 2 / 3 + 5 / 2 - 7 * 3 % 2;
    printf("b) float eredmeny: %lf\n", ertek2);

    float ertek3 = 6 * 2 / 3 + 5.0 / 2 - 7 * 3 % 2;
    printf("c) valos eredmeny: %.2lf\n", ertek3);

    float hazifeladat = (float)(6 * 2) / 3 + 5.0f / (7 * 3 % 2 - 2);
    printf("Hazifeladat: %d\n", (int)hazifeladat);

    return 0;
}