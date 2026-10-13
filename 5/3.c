#include <stdio.h>

int prim_for(int n)
{
    if (n < 2)
    {
        return 0;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int prim_while(int n)
{
    if (n < 2)
    {
        return 0;
    }
    int i = 2;
    while (i * i <= n)
    {
        if (n % i == 0)
        {
            return 0;
        }
        i++;
    }
    return 1;
}

int prim_osztok(int n)
{
    if (n < 2)
    {
        return 0;
    }
    int osztok = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            osztok++;
        }
    }
    if (osztok == 0)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int szam;

    do
    {
        printf("Adj meg egy pozitiv egesz szamot: ");
        scanf("%d", &szam);
    } while (szam <= 0);

    if (prim_for(szam))
    {
        printf("%d primszam\n", szam);
    }
    else
    {
        printf("%d nem primszam\n", szam);
    }

    return 0;
}
