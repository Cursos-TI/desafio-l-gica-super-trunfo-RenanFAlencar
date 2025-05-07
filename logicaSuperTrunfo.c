#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.
int main(){
	
	
    // Declaração das variáveis
    char nome_da_cidade1[20],nome_da_cidade2[20], codigo1[4], codigo2[4];
    int populacao1 ,populacao2, Num_turisticos1, Num_turisticos2;
    float pib1, area1, pib2,area2, dens1, dens2, pib_capita1, pib_capita2;
 
    // Entrada de Dados da 1° Carta
	printf("Digite o código da primeira carta: Ex: A01\n");
    scanf("%s", &codigo1);
    
    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_da_cidade1);

    printf("Digite a população:\n");
    scanf("%d", &populacao1);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &Num_turisticos1);

    printf("Digite o PIB:\n");
    scanf("%f", &pib1);

    printf("Digite a Área:\n");
    scanf("%f", &area1);
    
    // Entrada de Dados de 2° Carta
    printf("Digite o código da segunda carta: Ex: A02\n");
    scanf("%s", &codigo2);
    
    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_da_cidade2);

    printf("Digite a população:\n");
    scanf("%d", &populacao2);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &Num_turisticos2);

    printf("Digite o PIB:\n");
    scanf("%f", &pib2);

    printf("Digite a Área:\n");
    scanf("%f", &area2);
    
    // Calculo da Densidade 
    dens1 = populacao1 / area1; 
    dens2 = populacao2 / area2;
    
    //Caclulo do Pib Capita
    pib_capita1 = pib1 / populacao1;
    pib_capita2 = pib2 / populacao2;
    
    //Comparativo do calculo da da Densidade entre as duas cartas
    if (dens1 > dens2) { // Se verdadeiro a Densidade da 1° Carta for maior que a 2° Carta 
    	
    	
    	printf("A Carta vencedora é %s \n",codigo1);
    	printf ("Carta %s | Cidade:  %s | Densidade %.2f \n", codigo1,nome_da_cidade1,dens1);
    	
    	
	}
    
    	else {   //Se falso a Densidade da 1° Carta for maior que a 2° Carta 
		printf("A Carta vencedora é %s \n",codigo2);
    	printf ("Carta %s | Cidade:  %s | Densidade %.2f \n", codigo2,nome_da_cidade2,dens2);
    	
		
		}


    return 0;

}
