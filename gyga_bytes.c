#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define GB pow(1024,3)

int main(){
long int x,bytes;
printf("escreva o valor de GigaBytes\n");
scanf("%ld",&x);
bytes = x*GB;
printf("o valor em bytes é %ld\n",bytes);
  return 0;
}