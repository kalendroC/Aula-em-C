#include<stdio.h>
#include<locale.h>
int main (void){
    setlocale(LC_ALL,"portuguese");
    float idade;
    printf("digite a idade da crian�a: ");
    scanf(" %f",&idade);
    if(idade <= 5) {
        printf("a crian�a deve ser vacinada");
    }
    else {
        printf("a crian�a n�o precisa ser vacinada");
    }
    return 0;
}
