#include <stdio.h>
#include <time.h>

#define TAM 5
void preencherM(int matriz[TAM][TAM])
{
    for(int i = 0; i< TAM; i++)
        for(int j = 0 ; j< TAM; j++)
            matriz[i][j] = rand() % 100;
}
void imprimeM(int matriz[TAM][TAM])
{
    for(int i = 0; i< TAM; i++){
        printf("\n");
    for(int j = 0 ; j< TAM; j++)
        printf("%d ", matriz[i][j]);
}
}
int main()
{
    int matriz [TAM][TAM];

    srand(time(NULL));
    preencherM(matriz);

    printf("Matriz 1: \n");
    imprimeM(matriz);


    return 0;
}
