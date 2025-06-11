#include <stdio.h>
#include <string.h>
#define MAX_NOME 100

int main() {
    char nome1[MAX_NOME], nome2[MAX_NOME], nome3[MAX_NOME];
    char nomeBusca[MAX_NOME];

    printf("Digite 3 nomes:\n");
    printf("Nome 1: ");
    fgets(nome1, MAX_NOME, stdin);
    nome1[strcspn(nome1, "\n")] = '\0';

    printf("Nome 2: ");
    fgets(nome2, MAX_NOME, stdin);
    nome2[strcspn(nome2, "\n")] = '\0';

    printf("Nome 3: ");
    fgets(nome3, MAX_NOME, stdin);
    nome3[strcspn(nome3, "\n")] = '\0';

    while (1) {
        printf("Digite um nome: ");
        fgets(nomeBusca, MAX_NOME, stdin);
        nomeBusca[strcspn(nomeBusca, "\n")] = '\0';

        if (strcmp(nomeBusca, nome1) == 0) {
            printf("Nome encontrado: %s\n", nomeBusca);
            break;
        } else if (strcmp(nomeBusca, nome2) == 0) {
            printf("Nome encontrado: %s\n", nomeBusca);
            break;
        } else if (strcmp(nomeBusca, nome3) == 0) {
            printf("Nome encontrado: %s\n", nomeBusca);
            break;
        } else {
            printf("Este nome não está entre os 3 outros.\n");
        }
    }
    return 0;
}
