#include <stdio.h>

int main()
{
    float A, G, Ra, Rg;
    float con1, con2;

    printf("digite os 2 preços em litros: \t");
    scanf ("%f %f", &A, &G);

    printf("digite o rendimento de cada combustivel usado em km/l: \t");
    scanf ("%f %f", &Ra, &Rg);

    con1 = Ra/A;
    con2 = Rg/G;

    if (con1>con2)
    {
        printf("alcool é mais barato");
    }
    else if(con2>con1)
    {

        printf("gasolina é melhor");
    }
    else (con1==con2)
        printf("nao tem diferença")
        return 0;

}
