#include <stdio.h>

int main()
{
    char folytat;

    do
    {
        double elso;
        char muvelet;
        double masodik;

        printf("Add meg az elso szamot: ");
        scanf("%lf", &elso);

        printf("Add meg a muveletet (+, -, *, /): ");
        scanf(" %c", &muvelet);

        printf("Add meg a masodik szamot: ");
        scanf("%lf", &masodik);

        if (muvelet == '+')
        {
            printf("Eredmeny: %.2lf\n", elso + masodik);
        }
        else if (muvelet == '-')
        {
            printf("Eredmeny: %.2lf\n", elso - masodik);
        }
        else if (muvelet == '*')
        {
            printf("Eredmeny: %.2lf\n", elso * masodik);
        }
        else if (muvelet == '/')
        {
            if (masodik == 0)
            {
                printf("0-val nem lehet osztani!\n");
            }
            else
            {
                printf("Eredmeny: %.2lf\n", elso / masodik);
            }
        }

        printf("Akarod folytatni? (i/n): ");
        scanf(" %c", &folytat);

    } while (folytat == 'i' || folytat == 'I');

    return 0;
}
