#include <stdio.h>
#include <stdlib.h>
#define MES 30
#define ANO 365

int main()
 {
    int  idade_anos, idade_dia, idade_mes, dias_total;
    printf("qual a sua idade em anos,meses e dias?\n");
    printf("exemplo :anos 40, meses 2 e dias 4 \n");
    printf("anos?\n");
    scanf("%d",&idade_anos);
    printf("meses?\n");
    scanf("%d",&idade_mes);
    printf("dias?\n");
scanf("%d",&idade_dia);
    dias_total=idade_anos*ANO + idade_mes*MES + idade_dia;
    printf("sua idade em dias é%d\n",dias_total);
    return 0;
    }