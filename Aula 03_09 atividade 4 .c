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
    printf("Voc� acertou aproveita e tira o z� mane do ANDRE do grupo");
    }
    else if(valor_usuario >10) {
        printf("O valor que voc� digitou � maior que o numero segredo");
    }
    else {
    printf("o valor que voc� digitou � menor que o numero segredo");
    }

    return 0;
}
