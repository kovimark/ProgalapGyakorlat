#include <stdio.h>

int main()
{
    int alap;
    int kitevo;

    do
    {
        printf("Add meg a hatvany alapot (> 0): ");
        scanf("%d", &alap);
    } while (alap <= 0);

    do
    {
        printf("Add meg a kitevot (>= 0): ");
        scanf("%d", &kitevo);
    } while (kitevo < 0);

    int eredmeny = 1;
    for (int i = 0; i < kitevo; i++)
    {
        eredmeny *= alap;
    }

    printf("%d^%d = %d\n", alap, kitevo, eredmeny);

    return 0;
}
