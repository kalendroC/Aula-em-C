#include<stdio.h>
#include<locale.h>

int main(void)
{
    printf("Descubra o valor segredo\n\n");
    setlocale(LC_ALL,"portuguese");
    int segredo = 10, valor_usuario;
    printf("digite um numero: ");
    scanf("%d",&valor_usuario);
    if(segredo == valor_usuario) {
    printf("Você acertou aproveita e tira o zé mane do ANDRE do grupo");
    }
    else if(valor_usuario >10) {
        printf("O valor que você digitou é maior que o numero segredo");
    }
    else {
    printf("o valor que você digitou é menor que o numero segredo");
    }

    return 0;
}
