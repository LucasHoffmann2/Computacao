#include <stdio.h>

int main()
{
    int num, maior;
    int numero = 1;
    maior = -1;

    printf("Digite n�meros inteiros (e um valor negativo para parar):\n");

    while (numero)
    {
        printf("Digite um n�mero: ");
        scanf("%d", &num);

        if (num < 0)
        {
            numero = 0;
        }
        else
        {
            if (num > maior)
            {
                maior = num;
            }
        }
    }

    printf("O maior valor digitado foi: %d\n", maior);

    return 0;
}
