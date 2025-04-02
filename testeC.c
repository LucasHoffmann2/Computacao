#include<stdio.h>
int main (){

   float hora, min, seg;

   printf("Digite hora, minuto, segundo: ");
   scanf("%f %f %f", &hora, &min, &seg);

   if (hora>1 && min>15){
 printf("segundos = %f\n", (hora*3600)+(min*60) +seg);
}
else{
   printf("Quantidade de minutos: %f\n", (min) + (hora*60) +seg/60 );
}

   printf("Horario: %02f:%02f:%0f\n", hora, min, seg);
   return 0;

}
