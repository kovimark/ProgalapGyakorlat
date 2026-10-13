#include <stdio.h>
#include <math.h>

double pi_wallis(int n)
{
    double szorzat = 1.0;
    for (int k = 1; k <= n; k++)
    {
        double felso = 2.0 * k;
        szorzat *= (felso / (felso - 1.0)) * (felso / (felso + 1.0));
    }
    return 2.0 * szorzat;
}

double pi_leibniz(int n)
{
    double osszeg = 0.0;
    for (int k = 0; k < n; k++)
    {
        double tag = 1.0 / (2.0 * k + 1.0);
        if (k % 2 == 0)
        {
            osszeg += tag;
        }
        else
        {
            osszeg -= tag;
        }
    }
    return 4.0 * osszeg;
}

double pi_euler(int n)
{
    double osszeg = 0.0;
    for (int k = 1; k <= n; k++)
    {
        osszeg += 1.0 / ((double)k * k);
    }
    return sqrt(6.0 * osszeg);
}

int main()
{
    int n[] = {100, 1000, 10000};

    for (int i = 0; i < 3; i++)
    {
        printf("Elemszam: %d\n", n[i]);
        printf("  Wallis:  %lf\n", pi_wallis(n[i]));
        printf("  Leibniz: %lf\n", pi_leibniz(n[i]));
        printf("  Euler:   %lf\n", pi_euler(n[i]));
        printf("\n");
    }

    return 0;
}
