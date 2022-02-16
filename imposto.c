#include <stdio.h>
#include <stdlib.h>
#define ICMS 0,17
#define COFINS 0,076
#define PIS_PASEP 0,0135
int main() {
  float preco_inicial= 2, preco_final;
preco_final =  (1 + ICMS + COFINS + PIS_PASEP)* preco_inicial;
printf("o valor do preço final =%f \n",preco_final);
  return 0;
  }