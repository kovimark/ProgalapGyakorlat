#include <stdio.h>

int main()
{
    printf("Adj meg egy szamot: ");
    int a;

    scanf("%d", &a);
    printf("A szam %s", (a % 2 == 0) ? "paros" : "paratlan");

    return 0;
}
