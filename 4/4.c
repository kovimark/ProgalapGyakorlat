#include <stdio.h>

int main()
{
    int szam;
    int osszeg = 0;

    printf("Adj meg egy szamot (0: kilepes): ");
    scanf("%d", &szam);

    while (szam != 0)
    {
        osszeg += szam;
        printf("Adj meg egy szamot (0: kilepes): ");
        scanf("%d", &szam);
    }

    printf("A szamok osszege: %d\n", osszeg);

    return 0;
}
