#include <stdio.h>

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
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
 printf("\n Digite o número da carta\n");
    scanf("%d",&carta1);

    printf("Digite estado da carta\n");
    scanf(" %c",&estado1);

    printf("Digite o codigo da carta\n");
    scanf(" %s",codigo1);

    printf("Digite o nome da cidade da carta\n");
    scanf(" %s",nomeCidade1);

    printf("Digite a população da carta\n");
    scanf("%f",&populacao1);

    printf("Digite a área da carta\n");
    scanf("%f",&area1);

    printf("Digite o PIB da carta\n");
    scanf("%f",&pib1);

    printf("Digite a quantidade de pontos turisticos da carta\n");
    scanf("%d",&pontosTuristicos1);

   


    printf("\n Digite o número da carta\n");
    scanf("%d",&carta2);

    printf("Digite estado da carta\n");
    scanf(" %c",&estado2);

    printf("Digite o codigo da carta\n");
    scanf(" %s",codigo2);

    printf("Digite o nome da cidade da carta\n");
    scanf(" %s",nomeCidade2);

    printf("Digite a população da carta\n");
    scanf("%f",&populacao2);

    printf("Digite a área da carta\n");
    scanf("%f",&area2);

    printf("Digite o PIB da carta\n");
    scanf("%f",&pib2);

    printf("Digite a quantidade de pontos turisticos da carta\n");
    scanf("%d",&pontosTuristicos2);
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
printf("\n CARTA 1 - %s (%c) : %.2f",nomeCidade1,estado1,populacao1);

    printf("\n CARTA 2 - %s (%c) : %.2f",nomeCidade2,estado2,populacao2);

    if(populacao1>populacao2){
        printf("\n RESULTADO : CARTA 1 (%s) venceu! \n",nomeCidade1);
    }else{
        printf("\n RESULTADO : CARTA 2 (%s) venceu! \n",nomeCidade2);
    };

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
