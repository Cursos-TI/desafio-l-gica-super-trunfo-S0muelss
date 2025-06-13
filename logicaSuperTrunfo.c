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
    int indiceDeComparacao01 = 0; //adicionado para cada comparação ser implementado e no final será nesscesário para determinar o vencedor
	
	char codigoDeCarta02 [50];
	char estadoDaCarta02;
	char nomeDaCidadeDaCarta02 [50];
    unsigned long int populacaoDaCarta02;
	float areaDaCarta02;
	float pibDaCarta02;
	int pontosTuristicosDaCarta02;
	 int indiceDeComparacao02 = 0;
	
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

     //comparação dos atributos

     //comparação do atributo super poder
     if (superpoder01 > superpoder02){
        printf ("A carta 01 tem um super poder maior");
        indiceDeComparacao01++;
     } else {
        printf ("A carta 02 ganhou tem um super poder maior");
        indiceDeComparacao02++;
     }
     
     //comparação do atributo pib
     if (pibDaCarta01 > pibDaCarta02){
        printf("A carta 01 tem o PIB maior");
        indiceDeComparacao01++
     } else {
        printf("A carta 02 tem o PIB maior");
        indiceDeComparacao02++;
     }

     // comparação do atributo área
     if (areaDaCarta01 > areaDaCarta02) {
    printf("A carta 01 tem a área maior");
    indiceDeComparacao01++;
     } else {
        printf("A carta 02 tem a área maior");
        indiceDeComparacao02++
     }

     // comparação dos indices de comparação

     if (indiceDeComparacao01 > indiceDeComparacao02){
        printf ("A carta 01 %s", nomeDaCidadeDaCarta01, "Venceu");
     } else{
        printf ("A carta 02 %s", nomeDaCidadeDaCarta02, "Venceu");
     }

    return 0;
}
