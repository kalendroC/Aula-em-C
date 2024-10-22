#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void tabuada(); //protótipo da função
void menu();
void temperatura();
void primo();

int main()
{
    menu();
    return 0;
}

void menu()
{
    char opcao =' ';

    while(opcao != 's')
 {
        printf("---------------------------------------------------\n");
        printf("|               1 - Tabuada                        |\n");
        printf("|               2 - Temperatura                    |\n");
        printf("|               3 - Primo                          |\n");
        printf("|                                                  |\n");
        printf("|     Digite uma opcao ou \"s\" para sair            |\n");
        printf("---------------------------------------------------\n");
        scanf(" %c", &opcao);

    switch(opcao)
        {
            case '1':
            {
                tabuada();
            break;
            }
            case '2':
            {
                temperatura();
            break;
            }
            case '3':
            {
                primo();
            break;
            }
        }

    system("cls");
 }

}

void tabuada()
{
    system("cls");
    int numero = 0;
    printf("Digite um numero \n");
    scanf(" %d", &numero);
    for (int i = 1; i < 11; i++)
    {
        printf("%d x %d = %d \n", numero, i, numero * i);
    }
    system("pause");
}
void temperatura()
{
    system("cls");
    float numero = 0.0;
    printf("Conversao de celcius para fahrenheit \n");
    printf("Digite o valor em celcius; \n");
    scanf("%f", &numero);
    printf("A temperatura em fahrenheit e %.2f \n", numero * 1.8 + 32);
    system("pause");

}

void primo()
{
    system("cls");
    int numero = 0;
    bool ePrimo = true;
    printf("Verifique se o numero e primo \n");
    printf("Digite o numero \n");
    scanf(" %d", &numero);
    for(int i = 2; i < numero / 2 + 1; i++)
    {
        if (numero % i == 0)
        {
            ePrimo = false;
        break;
        }
    }
        if (ePrimo)
            printf("O numero e primo\n\n");
        else
            printf("O numero nao e primo\n");
            system ("pause");
}





