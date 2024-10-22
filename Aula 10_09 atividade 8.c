#include<stdio.h>
int main(void){
    char nome [100];
    char sexo;
    int idade;
    printf("digite um nome: ");
    scanf(" %s",&nome);
    printf("digite o sexo f ou m: ");
    scanf(" %c",&sexo);
    printf("digite a idade: ");
    scanf("%i",&idade);
    if( (sexo == 'f') && (idade < 25) ){
        printf("Candidato(a) %s aprovado(a)", nome );
    }
    else {
        printf("Candidato(a) %s reprovado",nome);
    }
    return 0;

}
