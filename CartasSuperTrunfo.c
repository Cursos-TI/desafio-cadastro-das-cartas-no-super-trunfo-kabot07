#include <stdio.h>

int main () {
//CARTA1:
    int populacao, pontosturisticos;
    char estado [50], codigocarta[50], cidade[50];
    float areakm, PIB;
    
    printf("Adicionar Carta 1: \n");
    
    printf("Estado: \n");
    scanf("%s", &estado);

    printf("Codigo da carta: \n");
    scanf("%s", &codigocarta);

    printf("Nome da cidade: \n");
    scanf("%s", &cidade);

    printf("População: \n");
    scanf("%d", &populacao);

    printf("Area: \n");
    scanf("%f", &areakm);

    printf("PIB: \n");
    scanf("%f", &PIB);

    printf("Pontos Turisticos: \n");
    scanf("%d", &pontosturisticos);


//CARTA2:

    int populacao2, pontosturisticos2;
    char estado2 [50], codigocarta2[50], cidade2[50];
    float areakm2, PIB2;
    
    printf("Adicionar Carta 2: \n");
    
    printf("Estado: \n");
    scanf("%s", &estado2);

    printf("Codigo da carta: \n");
    scanf("%s", &codigocarta2);

    printf("Nome da cidade: \n");
    scanf("%s", &cidade2);

    printf("População: \n");
    scanf("%d", &populacao2);

    printf("Area: \n");
    scanf("%f", &areakm2);

    printf("PIB: \n");
    scanf("%f", &PIB2);

    printf("Pontos Turisticos: \n");
    scanf("%d", &pontosturisticos2);

    printf("Carta 1 \n");
    printf("Estado: %s \n", estado);
    printf("Codigo da Carta: %s \n", codigocarta);
    printf("Cidade: %s \n", cidade);
    printf("População: %d \n", populacao);
    printf("Area: %f km² \n", areakm);
    printf("PIB: %f reais\n", PIB);
   
   
    printf("Carta 2 \n");
    printf("Estado: %s \n", estado2);
    printf("Codigo da Carta: %s \n", codigocarta2);
    printf("Cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Area: %f km² \n", areakm2);
    printf("PIB: %f reais\n", PIB2);

  
    
//Karol Botelho
return 0;
}


// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
