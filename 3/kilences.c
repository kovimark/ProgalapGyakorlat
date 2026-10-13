#include <stdio.h>
int main()
{
    printf("Add meg a masodpercek szamat: ");
    int masodperc;
    scanf("%d", &masodperc);

    int ora = masodperc / 3600;
    int perc = (masodperc % 3600) / 60;
    int mp = masodperc % 60;

    printf("%02d:%02d:%02d\n", ora, perc, mp);

    return 0;
}