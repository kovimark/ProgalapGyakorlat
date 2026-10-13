#include <stdio.h>

int main()
{
    int also;
    int felso;

    do
    {
        printf("Add meg az also hatart: ");
        scanf("%d", &also);
        printf("Add meg a felso hatart: ");
        scanf("%d", &felso);

        if (also > felso)
        {
            printf("Az also hatar nem lehet nagyobb a felsonel!\n");
        }
    } while (also > felso);

    int db = 0;

    for (int ev = also; ev <= felso; ev++)
    {
        if ((ev % 4 == 0 && ev % 100 != 0) || (ev % 400 == 0))
        {
            printf("%d szokoev\n", ev);
            db++;
        }
        else
        {
            printf("%d nem szokoev\n", ev);
        }
    }

    printf("Szokoevek szama a tartomanyban: %d\n", db);

    return 0;
}