#include <stdio.h>

int main(void)
{
    int barraIniziale;
    int AsseX;
    int AsseY;

    // Stampa la linea superiore della tabella
    for (barraIniziale = 1; barraIniziale <= 18; barraIniziale++)
    {
        printf("____");
    }
    printf("\n");

    // Stampa l'asse X
    printf("|");
    for (AsseX = 1; AsseX <= 12; AsseX++)
    {
        printf("%5d|", AsseX);
    }
    printf("\n");

    // Stampa la linea divisoria
    printf("|");
    for (AsseX = 1; AsseX <= 12; AsseX++)
    {
        printf("------");
    }
    printf("\n");

    // Stampa i valori della tabella
    for (AsseY = 1; AsseY <= 12; AsseY++)
    {
        printf(" ");
        for (AsseX = 1; AsseX <= 12; AsseX++)
        {
            printf("%5d", AsseY * AsseX);
            if (AsseX < 12)
                printf("|");
            else
                printf("|");
        }
        printf("\n");

        // Stampa la linea divisoria
        printf("|");
        for (AsseX = 1; AsseX <= 12; AsseX++)
        {
            printf("------");
        }
        printf("\n");
    }

    return 0;
}
