#include <stdio.h>

int main()
{
    float altura, base, area, area2, porta = 0.8;
    int i;

    printf("Altura da parede (em metros): ");
    scanf("%f", &altura);

    printf("quanto mede o piso (em metros): ");
    scanf("%f", &base);

    area = altura * base;

    printf("Area do quarto: %.0f metros quadrados\n", area);

    for (int i = area2; i++;)
    {
        area = area2;
        area2 = i - porta;
    }
    printf("Area do quarto com a porta %f\n", area2);
    return 0;
}

