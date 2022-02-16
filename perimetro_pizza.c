#include <stdio.h>
#include <stdlib.h>
#define PI 3,1416
int main() {
  int raio;
  float P;
  
printf("escreva o valor do raio \n");
scanf("%d",&raio);
P = 2 * PI * raio;
printf("o valor de P =%f \n",P);
  return 0;
  }