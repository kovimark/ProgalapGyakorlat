#include <stdio.h>

int time_in_sec(int ora, int perc, int mp)
{
    return ora * 3600 + perc * 60 + mp;
}

double time_in_min(int ora, int perc, int mp)
{
    return ora * 60.0 + perc + mp / 60.0;
}

double time_in_hour(int ora, int perc, int mp)
{
    return ora + perc / 60.0 + mp / 3600.0;
}

int main()
{
    int ora;
    int perc;
    int mp;

    do
    {
        printf("Ora (0-23): ");
        scanf("%d", &ora);
    } while (ora < 0 || ora > 23);

    do
    {
        printf("Perc (0-59): ");
        scanf("%d", &perc);
    } while (perc < 0 || perc > 59);

    do
    {
        printf("Masodperc (0-59): ");
        scanf("%d", &mp);
    } while (mp < 0 || mp > 59);

    printf("Masodpercben: %d\n", time_in_sec(ora, perc, mp));
    printf("Percben: %.2lf\n", time_in_min(ora, perc, mp));
    printf("Oraban: %.2lf\n", time_in_hour(ora, perc, mp));

    return 0;
}
