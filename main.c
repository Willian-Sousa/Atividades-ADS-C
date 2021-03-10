/*
*Atividade de Portfolio para o Ciclo 2
*
*Autor: Wiilian Sousa de Carvalo
*
* Programa para uma loja.
*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    //Declaracao das variaveis
    char nome_prod[30];
    int area, qnt, desconto_base;
    float preco_prod, valor_bruto;
    float taxa, desconto_total, valor_total;



    printf("        Loja Denki Eletronicos");
    printf("\n **************************************\n");
    printf("*  |1|  Informatica                    *\n");
    printf("*  |2|  Jogos                          *\n");
    printf("*  |3|  Eletronicos                    *\n");
    printf("*  |0|  Sair do programa               *\n");
    printf(" **************************************\n");
    printf("Selecione a area do produto: ");
    scanf("%d", &area);


    switch(area){

    case 0: //Sair do menu
        system("cls");
        printf("Escolheu sair do menu.\n");
        exit(0);
        break;

    case 1: //Informatica
        system("cls");
        fflush(stdin);
        printf("\nA area de Informatica esta com 5%% de desconto!\n");
        printf("\n");
        desconto_base = 5;
        taxa = 0.05;
        break;

    case 2: //Jogos
        system("cls");
        printf("\nA area de Jogos esta com 8%% de desconto!\n");
        printf("\n");
        desconto_base = 8;
        taxa = 0.08;
        fflush(stdin);
        break;

    case 3: //Eletronicos
        system("cls");
        printf("\nA area de Eletronicos esta com 10%% de desconto!\n");
        printf("\n");
        desconto_base = 10;
        taxa = 0.10;
        fflush(stdin);
        break;

    default: // Se numero digitado for diferente dos acima citados.
        system("cls");
        printf("\n--------------Area invalida!----------------\n\n");
        printf(" Tente novamente.\n\n");
        return main();
        break;
      }


    // Entrada de dados

    system("cls");
    printf("\n\nDigite o nome do produto: ");
    scanf("%s", &nome_prod);
    fflush(stdin);
    printf("Digite o valor do produto: R$ ");
    scanf("%f", &preco_prod);
    fflush(stdin);
    printf("Digite a quantidade de produtos: ");
    scanf("%i", &qnt);

    //Calculos

    valor_bruto = preco_prod * qnt;
    desconto = valor_bruto * taxa;
    valor_total = valor_bruto - desconto;

    // Resultados

    system("cls");
    printf("----------------------------------------------------------------------\n");
    printf("                     Relacao de produtos\n");
    printf("----------------------------------------------------------------------\n\n");
    printf("  Produto\n\n");
    printf(" >> %s\n", nome_prod);
    printf("      R$%5.2f x %i :                                          R$%5.2f\n", preco_prod, qnt, base);
    printf("       Desconto (%i%%)                                         R$%5.2f\n\n", desc, desconto);
    printf("----------------------------------------------------------------------\n\n");
    printf("   Total:                                                    R$%5.2f\n\n", valor_total);




return 0;

}
