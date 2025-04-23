#include <stdio.h>

int main()
{
    int numero, num_inicio, num_fim, conta;

    printf("Digite um numero inteiro para ser somado com os multiplos: ");
    scanf ("%d", &numero);
    printf("digite um numero para começar o intervalo: ");
    scanf ("%d", &num_inicio);
    printf("por ultimo, digite o numero para acabar o intervalo: ");
    scanf("%d", &num_fim);

    for(int i = num_inicio; i <= num_fim;)
    {
        if (numero * num_inicio > num_fim)
        
        conta = conta + numero + num_inicio;

        num_inicio++;


        printf("A soma dos múltiplos é: %d\n", conta);

        return 0;
    }

}
