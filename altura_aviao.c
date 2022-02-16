#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main()
{
 float altura,distancia,x;

 printf("Digite o valor do angulo:\n ");
 scanf("%f", &x);
 printf("Digite o valor da distancia:\n ");
 scanf("%f", &distancia);
altura=sin(x)*distancia;
printf("o valor da altura é%f",altura);
return 0;
}
