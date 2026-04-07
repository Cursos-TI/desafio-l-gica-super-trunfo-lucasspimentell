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

int resultadoPopulacao,resultadoArea,resultadoPib,resultadoPontosTuristicos,resultadoDensidadePopulacional ,resultadoPibPerCapita,resultadoSuperPoder;
    
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
 printf("1 - POPULAÇÃO\n");
    printf("2 - ÁREA\n");
    printf("3 - PIB\n");
    printf("4 - PONTOS TURISTICOS\n");
    printf("5 - DENSIDADE DEMOGRAFICA\n");
    
    printf("\nEscolha qual atributo comparar:\n");
    int opcao1;
    scanf("%d",&opcao1);

    double densidadePopulacional1 = populacao1 / area1;
    double densidadePopulacional2 = populacao2 / area2;

    switch (opcao1)
    {
    case 1:
        
        if (populacao1>populacao2)
        {
            printf("\n%s - %s\n",nomeCidade1,nomeCidade2);
            printf("\n POPULAÇÃO\n");
            printf("\n Carta 1 -  : %2.f - Carta 2 - : %2.f",populacao1,populacao2);
            printf("\n CARTA 1 - %s : %.2f - Vencéu!!!\n",nomeCidade1,populacao1);
           
        }else{
            printf("\n%s - %s\n",nomeCidade1,nomeCidade2);
            printf("\n POPULAÇÃO\n");
            printf("\n Carta 1 -  : %2.f - Carta 2 - : %2.f",populacao1,populacao2);
            printf("\n CARTA 2 - %s : %.2f - Vencéu!!! \n",nomeCidade2,populacao2);
            
        }
        
        break;

    case 2:

    if (area1>area2)
        {
            printf("\n%s - %s\n",nomeCidade1,nomeCidade2);
            printf("\nÁREA\n");
            printf("\n Carta 1 -  : %2.f - Carta 2 - : %2.f",area1,area2);
            printf("\n CARTA 1 - %s : %.2f - Vencéu !!!\n",nomeCidade1,area1);
            
        }else{
            printf("\n%s - %s\n",nomeCidade1,nomeCidade2);
            printf("\nÁREA\n");
            printf("\n Carta 1 -  : %2.f - Carta 2 - : %2.f",area1,area2);
            printf("\n CARTA 2 - %s : %.2f - Vencéu !!!\n",nomeCidade2,area2);
            
        }
        break;
    case 3:

    if (pib1>pib2)
        {
            printf("\n%s - %s\n",nomeCidade1,nomeCidade2);
            printf("\nPIB\n");
            printf("\n Carta 1 -  : %2.f - Carta 2 - : %2.f",pib1,pib2);
            printf("\n CARTA 1 - %s : %.2f - Vencéu !!!\n",nomeCidade1,pib1);
            
        }else{
            printf("\n%s - %s\n",nomeCidade1,nomeCidade2);
            printf("\nPIB\n");
            printf("\n Carta 1 -  : %2.f - Carta 2 - : %2.f",pib1,pib2);
            printf("\n CARTA 2 - %s : %.2f - Vencéu !!!\n",nomeCidade2,pib2);
            
        }
        break;
    case 4:

    if (pontosTuristicos1>pontosTuristicos2)
        {
            printf("\n%s - %s\n",nomeCidade1,nomeCidade2);
            printf("\nPONTOS TURISTICOS\n");
            printf("\n Carta 1 -  : %2.f - Carta 2 - : %2.f",pontosTuristicos1,pontosTuristicos2);
            printf("\n CARTA 1 - %s : %.2f - Vencéu !!!\n",nomeCidade1,pontosTuristicos1);
            
        }else{
            printf("\n%s - %s\n",nomeCidade1,nomeCidade2);
            printf("\nPONTOS TURISTICOS\n");
            printf("\n Carta 1 -  : %2.f - Carta 2 - : %2.f",pontosTuristicos1,pontosTuristicos2);
            printf("\n CARTA 2 - %s : %.2f - Vencéu !!!\n",nomeCidade2,pontosTuristicos2);
            
        }
        break;
    case 5:

    if (densidadePopulacional1<densidadePopulacional2)
        {
            printf("\n%s - %s\n",nomeCidade1,nomeCidade2);
            printf("\n Desncidade Demografica\n");
            printf("\n Carta 1 -  : %2.f \n Carta 2 - : %2.f",densidadePopulacional1,densidadePopulacional2);
            printf("\n CARTA 1 - %s : %.2f\n",nomeCidade1,densidadePopulacional1);
           
        }else{
            printf("\n%s - %s\n",nomeCidade1,nomeCidade2);
            printf("\n Desncidade Demografica\n");
            printf("\n Carta 1 -  : %2.f - Carta 2 - : %2.f",densidadePopulacional1,densidadePopulacional2);
            printf("\n CARTA 2 - %s : %.2f\n",nomeCidade2,densidadePopulacional2);
            
        }
        break;
    default:
        
        printf("\nEMPATE !!!");
        break;
    }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
