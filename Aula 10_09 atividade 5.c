#include<stdio.h>
#include<locale.h>
int main (void){
    setlocale(LC_ALL,"portuguese");
    float idade;
    printf("digite a idade da criança: ");
    scanf(" %f",&idade);
    if(idade <= 5) {
        printf("a criança deve ser vacinada");
    }
    else {
        printf("a criança não precisa ser vacinada");
    }
    return 0;
}
