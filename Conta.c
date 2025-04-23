#include <stdio.h>

int main()
{
    int numero, num_inicio, num_fim, soma = 0;

    printf("Digite um numero inteiro para ser somado com os multiplos: ");
    scanf ("%d", &numero);
    printf("digite um numero para começar o intervalo: ");
    scanf ("%d", &num_inicio);
    printf("por ultimo, digite o numero para acabar o intervalo: ");
    scanf("%d", &num_fim);

    for(int i = num_inicio; i <= num_fim; i++)
    {
        if (numero * num_inicio > num_fim)
        
        soma = soma + i;
    }
        printf("A soma dos múltiplos é: %d\n", soma);

        return 0;
}
