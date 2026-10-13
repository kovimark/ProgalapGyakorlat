#include <stdio.h>

int main()
{
    int tipus;
    int perc;
    int vegosszeg = 0;

    do
    {
        do
        {
            printf("Hivas tipusa (1: belso, 2: kulso, 3: kulfoldi, 0: kilepes): ");
            scanf("%d", &tipus);
        } while (tipus < 0 || tipus > 3);

        if (tipus != 0)
        {
            do
            {
                printf("Hany percig tartott (min. 1): ");
                scanf("%d", &perc);
            } while (perc < 1);

            if (tipus == 1)
            {
                vegosszeg += perc * 40;
            }
            else if (tipus == 2)
            {
                vegosszeg += perc * 60;
            }
            else if (tipus == 3)
            {
                vegosszeg += perc * 100;
            }
        }
    } while (tipus != 0);

    printf("A telefonszamla vegosszege: %d Ft\n", vegosszeg);

    return 0;
}
