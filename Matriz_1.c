#include <stdio.h>
#include <time.h>

#define LINHAS 5
#define COLUNAS 5
#define LINHAS2 5
#define COLUNAS2 5

int main()
{

    int m[LINHAS][COLUNAS];
    int t[LINHAS2][COLUNAS2];
    srand(time(NULL));

    for(int i=0; i<LINHAS; i++)
    {
        for(int j=0; j<COLUNAS; j++)
        {

            m[i][j] = rand()%100+1;
            printf("m=[%d, %d]\n", i, j, m[i][j]);
        }
    }
    for(int k=0; k<LINHAS2; k++)
    {
        for(int l=0; l<COLUNAS2; l++)
        {
            printf("m=[%d, %d]\n", i, j, t[k][l]);
        }
    }


    return 0;

}
