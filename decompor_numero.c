#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  int numero,milhar,centena,dezena,unidade;
printf("digite um numero inteiro para decompor\n");
scanf("%d",&numero);

milhar = numero/1000;
centena = numero/100 - (milhar*10);
dezena = numero/10 - (milhar*1000 + centena*10);
unidade = numero - (milhar*1000 + centena*100 + dezena*10);

printf("unidade = %d dezena = %d centena = %d milhar = %d\n",unidade,dezena,centena,milhar);
  return 0;
}