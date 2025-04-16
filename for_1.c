#include <stdio.h>

int main()
{
    int num, contador = 0, soma = 1;

    printf("Digite os números inteiros (digite -1000 para encerrar):\n");

    while (1)
    {
        printf("Digite um número: ");
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

        printf("os numeros digitados %d números positivos.\n", contador);
        printf("A media dos números positivos é: %f\n", media);
    }
    return 0;
}
