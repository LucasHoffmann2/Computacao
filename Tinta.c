#include <stdio.h>

int main()
{
    float altura, largura, area;
    float tinta;
    int tinta_necessaria;

    printf("Altura da parede (em metros): ");
    scanf("%f", &altura);

    printf("Largura da parede (em metros): ");
    scanf("%f", &largura);

    area = altura * largura;
    tinta = area / 2.0;

    if ((int)tinta < tinta)
    {
        tinta_necessaria = (int)tinta + 1;
    }
    else
    {
        tinta_necessaria = (int)tinta;
    }

    printf("Area da parede: %.0f metros quadrados\n", area);
    printf("Quantidade de tinta necessária: %d litros\n", tinta_necessaria);

    return 0;
}

