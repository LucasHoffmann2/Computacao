#include <stdio.h>
int arredonda(float x)
{
    printf("escreva um numero: ");
    if (x > 0)

        return(x - (int) x>= 0.5) ? (int)x + 1 : (int)x;
    else
        return((int) x - x>= 0.5) ? (int)x - 1 : (int)x;
int main(){
    printf("%d\n", arredonda(1.4));
    printf("%d\n", arredonda(1.5));
    printf("%d\n", arredonda(-1.4));
    printf("%d\n", arredonda(-1.5));

    return 0;
}
