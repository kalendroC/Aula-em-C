#include<stdio.h>
#include<locale.h>

int main(void)
{
    setlocale(LC_ALL,"Portuguese");
    float n1, n2, n3, media;
    printf("digite um numero: ");
    scanf("%f",&n1);
    printf("digite um numero: ");
    scanf("%f",&n2);
    printf("digite um numero: ");
    scanf("%f",&n3);
    media = (n1 + n2 + n3)/3;
    printf("A media é: %.2f", media);
    return 0;

}
