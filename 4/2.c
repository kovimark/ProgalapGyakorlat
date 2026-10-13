#include <stdio.h>

int main()
{
    int n;

    do
    {
        printf("Adj meg egy szamot 0 es 10 kozott: ");
        scanf("%d", &n);

        if (n < 0 || n > 10)
        {
            printf("Nem jo szam, 0 es 10 kozott kell lennie!\n");
        }
    } while (n < 0 || n > 10);

    int fakt = 1;
    for (int i = 1; i <= n; i++)
    {
        fakt *= i;
    }

    printf("%d! = %d\n", n, fakt);

    return 0;
}