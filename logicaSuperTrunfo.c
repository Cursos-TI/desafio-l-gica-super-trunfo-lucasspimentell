#include <stdio.h>
#include <string.h>
// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
int carta1;
char estado1;
char codigo1[5];
char nomeCidade1[20];
float populacao1;
float area1;
float pib1;
int pontosTuristicos1;
double densidadePopulacional1;
double pibPerCapita1;
int superPoder1;

int carta2;
char estado2;
char codigo2[5];
char nomeCidade2[20];
float populacao2;
float area2;
float pib2;
int pontosTuristicos2;
double densidadePopulacional2;
double pibPerCapita2;
int superPoder2;

int resultadoPopulacao, resultadoArea, resultadoPib, resultadoPontosTuristicos, resultadoDensidadePopulacional, resultadoPibPerCapita, resultadoSuperPoder;

int resultado2,resultado1;

char atributo[20];
char atributo2[20];
float valorAtributo1,valorAtributo2,valorAtributo3,valorAtributo4;
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
   printf("\n Digite o número da carta\n");
    scanf("%d", &carta1);

    printf("Digite estado da carta\n");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta\n");
    scanf(" %s", codigo1);

    printf("Digite o nome da cidade da carta\n");
    scanf(" %s", nomeCidade1);

    printf("Digite a população da carta\n");
    scanf("%f", &populacao1);

    printf("Digite a área da carta\n");
    scanf("%f", &area1);

    printf("Digite o PIB da carta\n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turisticos da carta\n");
    scanf("%d", &pontosTuristicos1);

    printf("\n Digite o número da carta\n");
    scanf("%d", &carta2);

    printf("Digite estado da carta\n");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta\n");
    scanf(" %s", codigo2);

    printf("Digite o nome da cidade da carta\n");
    scanf(" %s", nomeCidade2);

    printf("Digite a população da carta\n");
    scanf("%f", &populacao2);

    printf("Digite a área da carta\n");
    scanf("%f", &area2);

    printf("Digite o PIB da carta\n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos da carta\n");
    scanf("%d", &pontosTuristicos2);
    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }
 printf("1 - POPULAÇÃO\n");
    printf("2 - ÁREA\n");
    printf("3 - PIB\n");
    printf("4 - PONTOS TURISTICOS\n");
    printf("5 - DENSIDADE DEMOGRAFICA\n");

    printf("\nEscolha qual atributo comparar:\n");
    int opcao1;

    scanf("%d", &opcao1);

    double densidadePopulacional1 = populacao1 / area1;
    double densidadePopulacional2 = populacao2 / area2;

    switch (opcao1)
    {
    case 1:

         resultado1 = populacao1 > populacao2 ? 1 : 0;
          
          strcpy(atributo, "POPULAÇÃO\n"); 

          valorAtributo1 = populacao1;
         valorAtributo2 = populacao2;
        break;

    case 2:

         resultado1 = area1>area2? 1 : 0;
        
        /* atributo[20]="Área"; */
        strcpy(atributo, "Área\n");
        valorAtributo1 = area1;
         valorAtributo2 = area2;

        break;

    case 3:

         resultado1 = pib1 > pib2 ? 1 : 0;
        /* atributo[20]="3 - PIB\n"; */

        strcpy(atributo, "PIB\n");

        valorAtributo1 = pib1;
         valorAtributo2 = pib2;
        break;
    case 4:

         resultado1 = pontosTuristicos1 > pontosTuristicos2 ? 1 : 0;
        /* atributo[20] ="PONTOS TURISTICOS"; */
        strcpy(atributo, "PONTOS TURISTICOS\n");
        valorAtributo1 = pontosTuristicos1;
         valorAtributo2 = pontosTuristicos2;
        break;

    case 5:

         resultado1 = densidadePopulacional1 < densidadePopulacional2 ? 1 : 0;
        
        /* atributo[20] = "DENSIDADE DEMOGRAFICA\n"; */
        strcpy(atributo, "DENSIDADE DEMOGRAFICA\n");
        valorAtributo1 = densidadePopulacional1;
         valorAtributo2 = densidadePopulacional2;
        break;

    default:
        printf("valor invalido");
        break;
    }

    printf("1 - POPULAÇÃO\n");
    printf("2 - ÁREA\n");
    printf("3 - PIB\n");
    printf("4 - PONTOS TURISTICOS\n");
    printf("5 - DENSIDADE DEMOGRAFICA\n");

    int opcao2;
    scanf("%d", &opcao2);

    if (opcao1 == opcao2)
    {
        printf("Vocé escolheu a mesma opção");
        /* code */
    }
    else
    {

        switch (opcao2)
    {
    case 1:

         resultado2 = populacao1 > populacao2 ? 1 : 0;
        
        /* atributo2[20] = "POPULAÇÃO\n"; */
        strcpy(atributo2, "POPULAÇÃO\n\n");
        valorAtributo3 = populacao1;
         valorAtributo4 = populacao2;
        break;
    case 2:

         resultado2 = area1>area2? 1 : 0;
        
        /* atributo2[20] = "ÁREA\n"; */
        strcpy(atributo2, "Área\n");
        valorAtributo3 = area1;
         valorAtributo4 = area2;
        break;

    case 3:

         resultado2 = pib1 > pib2 ? 1 : 0;
        
        /* atributo2[20] = "PIB\n"; */

         strcpy(atributo2, "PIB\n");
        valorAtributo3 = pib1;
         valorAtributo4 = pib2;
        break;

    case 4:

         resultado2 = pontosTuristicos1 > pontosTuristicos2 ? 1 : 0;

         valorAtributo3 = pontosTuristicos1;
         valorAtributo4 = pontosTuristicos2;
    
         /* atributo2 = "PONTOS-TURISTICOS\n"; */

         strcpy(atributo2, "PONTOS TURISTICOS\n");
        break;

    case 5:

         resultado2 = densidadePopulacional1 < densidadePopulacional2 ? 1 : 0;
        
        /*  atributo2[20] ="DENSIDADE-DEMOGRAFICA\n"; */
        strcpy(atributo2, "DENSIDADE DEMOGRAFICA\n");
         valorAtributo3 = densidadePopulacional1;
         valorAtributo4 = densidadePopulacional2;


        break;

    default:
        printf("valor invalido");
        break;
    }
    }

        printf("%s X %s \n",nomeCidade1,nomeCidade2);
        printf("%s : ",atributo);
        printf("CARTA 1 : %.2f - CARTA 2: %2.f\n", valorAtributo1,valorAtributo2);

        printf("%s : ",atributo2);
        printf("CARTA 1 : %.2f - CARTA 2: %2.f\n", valorAtributo3,valorAtributo4);

        printf("Soma carta 1: %.2f - ",valorAtributo1+valorAtributo3);
        printf(" soma carta 2: %.2f",valorAtributo2+valorAtributo4);

    if (resultado1 && resultado2)
    {
        

        printf(" \n CARTA 1 - VENCEU !!!!");

    }else if (resultado1 != resultado2)
    {
        printf(" \n EMPATE !!");
        
    }else{

        printf(" \nCARTA 2 - VENCEU !!!!");
    }
    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
