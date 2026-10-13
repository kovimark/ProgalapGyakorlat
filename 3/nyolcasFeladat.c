#include <stdio.h>

int main()
{
    printf("Add meg az aktualis idot (ora): ");
    int ora;
    scanf("%d", &ora);
    printf("Hany ora mulva ebresszen az ebreszto? ");
    int mikor;
    scanf("%d", &mikor);

    int ertesites = (ora + mikor) % 24;
    printf("Az ebresztoora %d orakor fog megszolalni.\n", ertesites);

    return 0;
}