#include<stdio.h>
#include<locale.h>

int main(void)
{
    setlocale(LC_ALL,"portuguese");
    float gasto,garcom,total;

    printf("digite o valor gasto: ");
    scanf("%f",&gasto);
    garcom = gasto * 10/100;
    total = gasto + garcom ;
    printf("Gasto = %.2f\nGarçom = %.2f\nTotal = %.2f\n\n", gasto, garcom, total);
    printf("tira o andre do grupo");
    return 0;
}
