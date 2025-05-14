#include <stdio.h>
#include <stdlib.h>

void converteHora(int totalseg, int *hora, int *min, int *seg)
{
    *hora = totalseg / 3600;
    totalseg %= 3600;
    *min = totalseg / 60;
    *seg = totalseg % 60;
}
int main()
{
    int totalseg, hora, min, seg;
    printf("Digite o total de segundos: ");
    scanf("%d", &totalseg);

    converteHora(totalseg, &hora, &min, &seg);
printf("%02d:%02d:%02d\n", hora, min, seg);
    return 0;
}
