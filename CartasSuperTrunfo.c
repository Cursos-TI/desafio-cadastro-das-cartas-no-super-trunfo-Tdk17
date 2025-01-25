#include <stdio.h>
#define MAX_CIDADES 32

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa
typedef struct {
char codigo[4];
int populacao;
float area;
float pib;
int pontosTuristicos;
}Cidade;

void cadastrarCidade(Cidade *cidade){
printf("\n Cadastro de  Cidade (%s):\n", cidade->codigo);
 printf("População: ");
    scanf("%d", &cidade->populacao);
    printf("Área (em km²): ");
    scanf("%f", &cidade->area);
    printf("PIB (em bilhões): ");
    scanf("%f", &cidade->pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &cidade->pontosTuristicos);
}

void exibirCidades(const Cidade cidades[], int quantidade) {
    printf("\n--- Cartas Cadastradas ---\n");
    for (int i = 0; i < quantidade; i++) {
        printf("\nCidade: %s \n", cidades[i].codigo);
        printf("População: %d \n", cidades[i].populacao);
        printf("Área: %.2f km²\n", cidades[i].area);
        printf("PIB: %.2f bilhões \n", cidades[i].pib);
        printf("Pontos Turísticos: %d \n", cidades[i].pontosTuristicos);
    }
}




int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
     Cidade cidades[MAX_CIDADES];
    int totalCidades = 0;

    // Gerar códigos de cartas (A01, A02, ..., H04)
    for (char estado = 'A'; estado <= 'H'; estado++) {
        for (int cidade = 1; cidade <= 4; cidade++) {
            if (totalCidades >= MAX_CIDADES) break;
            snprintf(cidades[totalCidades].codigo, sizeof(cidades[totalCidades].codigo), "%c%02d", estado, cidade);
            totalCidades++;
        }
    }

    // Cadastro de cartas
    printf("--- Sistema de Cadastro de Cartas Super Trunfo: Países ---\n");
    for (int i = 0; i < totalCidades; i++) {
        cadastrarCidade(&cidades[i]);
    }

    // Exibir todas as cartas cadastradas
    exibirCidades(cidades, totalCidades);

    return 0;
}
