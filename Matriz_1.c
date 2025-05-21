#include <stdio.h>
#include <time.h>

#define LINHAS 3
#define COLUNAS 3
#define LINHAS2 3
#define COLUNAS2 3

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
              printf("\n");

    }
    for(int i=0; i<LINHAS2; i++)
    {
        for(int j=0; j<COLUNAS2; j++)
        {
                t[j][i] = m[i][j];
                          printf("t=[%d, %d]\n", i, j, t[i][j]);
            }
      printf("\n");
        }


        return 0;

    }
