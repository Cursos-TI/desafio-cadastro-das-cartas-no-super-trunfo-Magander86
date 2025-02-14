#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char codigoCidade[10];
    char nome[20];
    float populacao;
    float area;
    float pib;
    int pontosTuristicos;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite o código da cidade. Deve conter uma letra entre A e H e um número de 1 a 4. Ex: A03:\n");
    scanf("%s", &codigoCidade);

    printf("Digite o nome da cidade:\n");
    scanf("%s", &nome);

    printf("Informe o tamanho da população em milhões:\n");
    scanf("%f", &populacao);

    printf("Informe o tamanho da área da cidade em km²:\n");
    scanf("%f", &area);

    printf("Informe o PIB em milhões:\n");
    scanf("%f", &pib);

    printf("Informe a quantidade de pontos turíscos:\n");
    scanf("%d", &pontosTuristicos);
    printf("\n");
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("%s\n", codigoCidade);
    printf("Nome:%s\n", nome);
    printf("População: %0.2f milhões\n", populacao);
    printf("Área: %0.2f km²\n", area);
    printf("PIB: %0.2s milhões\n", pib);
    printf("Pontos Turísticos: %d\n", pontosTuristicos);    

    return 0;
}
