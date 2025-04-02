#include<stdio.h>
int main ()
{
    float n1, n2, n3, media;

    printf("Digite as tres notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    media = (n1 + n2 +n3) / 3;

    if (media >8)

        printf("aprovado com distincao. ");
    else if (media >=6)
        printf("aprovado direto. ");
    else if (media >=4)
        printf("vai para a final");
    else
        printf("reprovado. ");

    return 0;

}
