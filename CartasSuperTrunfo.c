#include <stdio.h>
#define MAX_CIDADES 32

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa
typedef struct {
    char codigo[4];
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} Cidade;


void cadastrarCidade(Cidade *cidade) {
    printf("\nCadastro da Cidade (%s):\n", cidade->codigo);
    printf("Nome da Cidade: ");
    scanf(" %49[^"]", cidade->nome);
    printf("Populacao: ");
    scanf("%d", &cidade->populacao);
    printf("Area (em km²): ");
    scanf("%f", &cidade->area);
    printf("PIB (em bilhões): ");
    scanf("%f", &cidade->pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &cidade->pontosTuristicos);
}

void exibirCidade(const Cidade *cidade) {
    float densidadePopulacional = cidade->populacao / cidade->area;
    float pibPerCapita = cidade->pib * 1000000000 / cidade->populacao;
    
    printf("\n--- Carta ---\n");
    printf("Codigo: %s\n", cidade->codigo);
    printf("Nome da Cidade: %s\n", cidade->nome);
    printf("Populacao: %d\n", cidade->populacao);
    printf("Area: %.2f km²\n", cidade->area);
    printf("PIB: %.2f bilhões\n", cidade->pib);
    printf("Número de Pontos Turísticos: %d\n", cidade->pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita);
}




int main() {
    Cidade cidades[MAX_CIDADES] = { {"A01", "", 0, 0.0, 0.0, 0}, {"B02", "", 0, 0.0, 0.0, 0} };
    
    printf("--- Sistema de Cadastro de Cartas Super Trunfo: Cidades ---\n");
    for (int i = 0; i < MAX_CIDADES; i++) {
        cadastrarCidade(&cidades[i]);
    }

    for (int i = 0; i < MAX_CIDADES; i++) {
        exibirCidade(&cidades[i]);
    }
    
    return 0;
}
