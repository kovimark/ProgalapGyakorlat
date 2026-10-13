#include <stdio.h>

int lakat_kod()
{
    int osszeg = 0;
    for (int i = 1; i <= 1000; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            osszeg += i;
        }
    }
    return osszeg;
}

int main()
{
    int kod = lakat_kod();
    printf("A lakat kodja: %d\n", kod);

    return 0;
}
