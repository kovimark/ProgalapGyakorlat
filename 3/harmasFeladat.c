#include <stdio.h>

int main()
{

    int x = 2;
    int y = 5;

    int eredmeny = (x++) + y * (--y) / (++x);
    //              2      4    4       4  eredmény:6
    printf("vegeredmeny: %d\n", eredmeny);


    int a = 2;
    int b = 5;

    int eredmeny2 = (a++) + b * (b--) / (++a);
    //              2      4    5       4  eredmény:7
    printf("vegeredmeny: %d\n", eredmeny2);
    return 0;
}