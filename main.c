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
    char titulo[30] = "Relatorio de Compras";
    char nome_prod[30];
    int area, qnt, desc;
    float preco_prod, base;
    float taxa, desconto, valor_total;


 printf("%c",218);
 printf("%c%c%c%c%c%c%c%c%c",196,196,196,196,196,196,196,196,196,196);
 printf("%c%c%c%c%c%c%c%c%c",196,196,196,196,196,196,196,196,196,196);
 printf("%c%c%c%c%c%c%c%c%c",196,196,196,196,196,196,196,196,196,196);
 printf("%c%c%c%c%c%c%c%c%c",196,196,196,196,196,196,196,196,196,196);
 printf("%c%c%c%c%c%c%c%c%c",196,196,196,196,196,196,196,196,196,196);
 printf("%c\n",191);
 printf("%c %-43s %c\n",179,titulo,179);
 printf("%c",192);
 printf("%c%c%c%c%c%c%c%c%c",196,196,196,196,196,196,196,196,196,196);
 printf("%c%c%c%c%c%c%c%c%c",196,196,196,196,196,196,196,196,196,196);
 printf("%c%c%c%c%c%c%c%c%c",196,196,196,196,196,196,196,196,196,196);
 printf("%c%c%c%c%c%c%c%c%c",196,196,196,196,196,196,196,196,196,196);
 printf("%c%c%c%c%c%c%c%c%c",196,196,196,196,196,196,196,196,196,196);
 printf("%c\n\n",217);


    printf("  [1]  Informatica \n");
    printf("  [2]  Jogos \n");
    printf("  [3]  Eletronicos \n\n");
    printf("  [0]  Sair do programa \n\n");


    printf("Selecione a area do produto: ");
    scanf("%d", &area);




    switch(area){

    case 0:
        system("cls");
        printf("Escolheu sair do menu.\n");
        exit(0);
        break;

    case 1: //Informatica
        system("cls");
        fflush(stdin);
        printf("\nA area de Informatica esta com 5%% de desconto!\n");
        printf("\n");
        desc = 5;
        taxa = 0.05;
        break;

    case 2: //jogos
        system("cls");
        printf("\nA area de Jogos esta com 8%% de desconto!\n");
        printf("\n");
        desc = 8;
        taxa = 0.08;
        fflush(stdin);
        break;

    case 3: //Eletronicos
        system("cls");
        printf("\nA area de Eletronicos esta com 10%% de desconto!\n");
        printf("\n");
        desc = 10;
        taxa = 0.10;
        fflush(stdin);
        break;

    default: // Se numero digitado for diferente dos acima citados.

    while (area>3){
        system("cls");
        printf("\n--------------Area invalida!----------------\n\n");
        printf("  [1]  Informatica \n");
        printf("  [2]  Jogos \n");
        printf("  [3]  Eletronicos \n\n");
        printf("  [0]  Sair do programa \n\n");


    printf("Selecione uma das areas correspondentes acima: ");
    scanf("%d", &area);
        fflush(stdin);
         }
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

    base = preco_prod * qnt;
    desconto = base * taxa;
    valor_total = base - desconto;

    // Resultados
    system("cls");
    printf("\n");
    printf("-----------------------------------------------\n");
    printf("            Nota Fiscal\n");
    printf("-----------------------------------------------\n\n");
    printf(" >>>Relacao de produtos<<< \n\n");
    printf("   * %s \n", nome_prod);
    printf("      %i x R$%.2f..................: R$%.2f \n\n", qnt, preco_prod, base);
    printf(" Valor do desconto (%i%%).............: R$%.2f \n\n", desc, desconto);
    printf("-----------------------------------------------\n\n");
    printf(" Valor total a pagar................: R$%.2f \n\n", valor_total);
    printf("-----------------------------------------------\n\n");


return 0;

}
