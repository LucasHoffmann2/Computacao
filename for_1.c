#include <stdio.h>

int main()
{
    int num, contador = 0, soma = 1;

    printf("Digite os n�meros inteiros (digite -1000 para encerrar):\n");

    while (1)
    {
        printf("Digite um n�mero: ");
        scanf("%f", &num);

        if (num == -1000)
        {
            break;
        }

        else if (num > 0)
        {
            contador++;
            soma += num;
        }
    }

    if (contador > 0)
    {
        float media = (float)soma / contador;

        printf("os numeros digitados %d n�meros positivos.\n", contador);
        printf("A media dos n�meros positivos �: %f\n", media);
    }
    return 0;
}
