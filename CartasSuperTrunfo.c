#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

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

    int codigoCidade, numeroPontosTuristicos;
    char nomeCidade[20];
    float populacao, PIB, areaCidade, densidadePopulacional, pibPerCapita;
    setlocale(LC_ALL, "Portuguese");

    printf("Digite o código da cidade: ");
    scanf("%d", &codigoCidade);
    printf("Digite o nome da cidade: ");
    fflush(stdin);
    scanf("%20[^\n]",nomeCidade);
    printf("Digite a população da cidade: ");
    scanf("%f", &populacao);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB);
    printf("Digite a área da cidade: ");
    scanf("%f", &areaCidade);
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &numeroPontosTuristicos);

    densidadePopulacional = populacao / areaCidade;
    pibPerCapita = PIB / populacao;

    printf("Nome da cidade: %s\n ", nomeCidade);
    printf("Código da cidade: %d\n ", codigoCidade);
    printf("População da cidade: %.2f\n ", populacao);
    printf("PIB da cidade: %.2f\n", PIB);
    printf("Area da cidade: %.2fm²\n", areaCidade);
    printf("Número de pontos turisticos da cidade %d\n", numeroPontosTuristicos);
    printf("Densidade populacional da cidade %.2f\n", densidadePopulacional);
    printf("PIB per capita da cidade %.2f\n", pibPerCapita);

    return 0;
}