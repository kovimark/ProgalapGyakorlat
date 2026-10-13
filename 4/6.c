#include <stdio.h>

int main()
{
    int osszeg;

    do
    {
        printf("Beolvasott osszeg: ");
        scanf("%d", &osszeg);
    } while (osszeg <= 0 || osszeg % 5 != 0);

    int cimletek[] = {200, 100, 50, 20, 10, 5};
    int maradek = osszeg;

    for (int i = 0; i < 6; i++)
    {
        int db = maradek / cimletek[i];
        int resz = db * cimletek[i];
        maradek = maradek % cimletek[i];

        printf("Cimlet: %d -> %d x %d = %d\n", cimletek[i], db, cimletek[i], resz);
    }

    return 0;
}
