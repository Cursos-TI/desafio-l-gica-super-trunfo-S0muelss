#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

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

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);


    	// inicialização das variáveis
	
	char codigoDeCarta01 [50];
	char estadoDaCarta01;
	char nomeDaCidadeDaCarta01 [50];
	unsigned long int populacaoDaCarta01;
	float areaDaCarta01;
	float pibDaCarta01;
	int pontosTuristicosDaCarta01;
	 int opcaocarta;
	char codigoDeCarta02 [50];
	char estadoDaCarta02;
	char nomeDaCidadeDaCarta02 [50];
    unsigned long int populacaoDaCarta02;
	float areaDaCarta02;
	float pibDaCarta02;
	int pontosTuristicosDaCarta02;
	 
	
   //entrada das informações carta 01
   
   printf("Preencha as informações da carta 01\n");
   
   printf("Informe o estado da carta 01\n");
   scanf(" %c", &estadoDaCarta01);
   
    printf("Informe o codigo da carta 01\n");
    scanf("%s", codigoDeCarta01 );
    
    printf("Informe o Nome da cidade\n");
    scanf("   %[^\n]", nomeDaCidadeDaCarta01);
    
    printf("Informe a população da carta 01\n");
    scanf("%lu", &populacaoDaCarta01);
    
    printf("Informe a area da carta 01\n");
    scanf("%f", &areaDaCarta01);
    
    printf("Informe o PIB da carta 01\n");
    scanf("%f", &pibDaCarta01 );
    
    printf("Informe a quantidade de pontos turisticos da carta 01\n");
    scanf("%d", &pontosTuristicosDaCarta01);
    
   
   
   //entrada das informações carta 02
   
   printf("Preencha as informações da carta 02\n");
   
   printf("Informe o estado da carta 02\n");
   scanf(" %c", &estadoDaCarta02);
   
    printf("Informe o codigo da carta 02\n");
    scanf("%s", codigoDeCarta02 );
    
    printf("Informe o Nome da cidade\n");
    scanf("  %[^\n]", nomeDaCidadeDaCarta02);
    
    printf("Informe a população da carta 02\n");
    scanf("%lu", &populacaoDaCarta02);
    
    printf("Informe a area da carta 02\n");
    scanf("%f", &areaDaCarta02);
    
    printf("Informe o PIB da carta 02\n");
    scanf("%f", &pibDaCarta02 );
    
    printf("Informe a quantidade de pontos turisticos da carta 01\n");
    scanf("%d", &pontosTuristicosDaCarta02);
    
     // Cálculos
     
    float densidadePopulacional01 = populacaoDaCarta01 / areaDaCarta01;
    float pibPerCapta01 = pibDaCarta01 / populacaoDaCarta01;

    float densidadePopulacional02 = populacaoDaCarta02 / areaDaCarta02;
    float pibPerCapta02 = pibDaCarta02 / populacaoDaCarta02;
    
    float  superpoder01 = populacaoDaCarta01 + areaDaCarta01 + pibDaCarta01 + pontosTuristicosDaCarta01 + pibPerCapta01 + (1.0/densidadePopulacional01); 
    float  superpoder02 = populacaoDaCarta02 + areaDaCarta02 + pibDaCarta02 + pontosTuristicosDaCarta02 + pibPerCapta02 + (1.0/densidadePopulacional02); 
    
 // exibição da carta 01
    
    printf("carta 01 \n");
    
    printf("Estado da carta: %c\n", estadoDaCarta01 );
    printf("Código da carta: %s\n", codigoDeCarta01 );
    printf("Cidade da carta: %s\n",nomeDaCidadeDaCarta01 );
    printf("População da carta: %ld", populacaoDaCarta01 );
    printf("Area da carta: %f\n", areaDaCarta01);
    printf("Pib da carta: %f\n",pibDaCarta01 );
	printf("Densidade populacional: %.2f\n", densidadePopulacional01);
    printf("PIB per capita: %.2f\n", pibPerCapta01);
    printf("Pontos turisticos: %d\n", pontosTuristicosDaCarta01 );
    printf("Densidade populacional: %.2f\n", densidadePopulacional01);
    printf("Super poder: %.2f\n", superpoder01);
    
    // exibição da carta 02
    
    printf("carta 02 \n");
    
    printf("Estado da carta: %c\n", estadoDaCarta02 );
    printf("Código da carta: %s\n", codigoDeCarta02 );
    printf("Cidade da carta: %s\n",nomeDaCidadeDaCarta02 );
    printf("População da carta: %ld", populacaoDaCarta02 );
    printf("Area da carta: %f\n", areaDaCarta02);
    printf("Pib da carta: %f\n",pibDaCarta02 );
    printf("Densidade populacional: %.2f\n", densidadePopulacional02);
    printf("PIB per capita: %.2f\n", pibPerCapta02);
    printf("Pontos turisticos: %d\n", pontosTuristicosDaCarta02 );
    printf("Densidade populacional: %.2f\n", densidadePopulacional02); 
    printf("Super poder: %. 2f\n", superpoder02);
   
    // comparaçoes de carta
    
    printf("\n===== Comparações (1 = Carta 1 vence, 0 = Carta 2 vence) =====\n");
    printf("População: %ld\n", populacaoDaCarta01 > populacaoDaCarta02);
    printf("Área: %d\n", areaDaCarta01 > areaDaCarta02);
    printf("PIB: %d\n", pibDaCarta01 > pibDaCarta02);
    printf("Pontos Turisticos: %d\n",  pontosTuristicosDaCarta01 >   pontosTuristicosDaCarta02 );
    printf("Densidade Populacional (menor vence): %d\n", densidadePopulacional01 < densidadePopulacional02);
    printf("PIB per Capita: %d\n", pibPerCapta01 > pibPerCapta02);
    printf("Super Poder: %d\n", superpoder01 > superpoder02);
 
     // entrada do menu interativo do player 
     // assim escolhendo os atributo das duas cartas que serão comparadas

     printf("ESCOLHA UM ATRIBUTO A SEGUIR\n");

     printf("[1] - pontos turisticos\n");

     printf("[2] - população\n");

     

     scanf("%d", &opcaocarta);



 // escolha de atrubutos junto com a coparação deles

   switch(opcaocarta){
      case 1:
     if (pontosTuristicosDaCarta01 > pontosTuristicosDaCarta02){
       printf("a carta 01 venceu por ter mais pontos turisticos que a carta 02");
     } else {
      printf("A carta 02 venceu por ter mais pontos turistico que a carta 01");
     } 
     break;
     case 2:
     if(pontosTuristicosDaCarta01 > populacaoDaCarta02){
      printf("A carta 01 venceu pois tem a população maior que a carta 02");
     }else{
      printf("A carta 02 venceu pois tem a população maior que a carta 01");
     }
     break;
   }  return 0;
}
     

    

