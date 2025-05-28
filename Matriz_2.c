#include <stdio.h>
#include <time.h>

#define TAM 10
void preencherM(int matriz[TAM][TAM])
{
    for(int i = 0; i< TAM; i++)
        for(int j = 0 ; j< TAM; j++)
            matriz[i][j] = rand() % 100;
}
void imprimeM(int matriz[TAM][TAM])
{
    for(int i = 0; i< TAM; i++)
        prinf("\n");
    for(int j = 0 ; j< TAM; j++)
        printf("%d", matriz[i][j]);
    printf("\n");
}
void somarM(int a[TAM][TAM], int b[TAM][TAM], int resultado[TAM][TAM])
{
    for(int i = 0; i< TAM; i++)
        for(int j = 0 ; j < TAM; j++)
            resultado[i][j] = a[i][j] + b[i][j];
}
int main()
{
    int matriz1 [TAM][TAM], matriz2 [TAM][TAM], soma[TAM][TAM], subtracao [TAM][TAM];

    srand(time(NULL));
    preencherM(matriz1);
    preencherM(matriz2);

    printf("Matriz 1:\n");
    imprimeM(matriz1);

    printf("Matriz 2:\n");
    imprimeM(matriz2);

    somarM(matriz1, matriz2, soma);
    printf("\n Soma das matrizes:\n");
    imprimeM(soma);


    return 0;
}
