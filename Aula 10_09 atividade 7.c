#include<stdio.h>
#include<locale.h>
int main(void){
    setlocale(LC_ALL,"portuguese");
    float idade;
    printf("insira a idade de uma pessoa: ");
    scanf(" %f",&idade);
    if(!(idade < 12) || (idade > 17)){
        printf("adolescente");
    }
    return 0;


}
