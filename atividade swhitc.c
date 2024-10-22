#include<stdio.h>
int main (void){
    int mes;
    printf("digite o mes desejado: ");
    scanf("%d",&mes);
    switch(mes){
        case 02:
            printf("28 dias");
        break;
        case 04:
        case 06:
        case 9:
        case 11:
            printf("30 dias");
        break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:

            printf("31 dias");
        break;
        default:
            printf("mes invalido");
        break;
    }


}
