#include <stdio.h>

void collatz(int n)
{
    printf("%d", n);
    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n = n / 2;
        }
        else
        {
            n = 3 * n + 1;
        }
        printf(" -> %d", n);
    }
    printf("\n");
}

int main()
{
    int szam;

    do
    {
        printf("Adj meg egy pozitiv egesz szamot: ");
        scanf("%d", &szam);
    } while (szam <= 0);

    collatz(szam);

    return 0;
}
