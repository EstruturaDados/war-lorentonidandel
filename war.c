// ============================================================================
//         PROJETO WAR ESTRUTURADO - DESAFIO DE CÓDIGO
// ============================================================================
//
// NÍVEL NOVATO: Cadastro Inicial dos Territórios
//
// OBJETIVOS:
// - Criar uma struct chamada Territorio.
// - Usar um vetor estático de 5 elementos.
// - Cadastrar nome, cor do exército e número de tropas.
// - Exibir o estado atual do mapa.
//
// ============================================================================


// Inclusão das bibliotecas padrão necessárias
#include <stdio.h>
#include <string.h>


// --- Constantes Globais ---
// Define a quantidade fixa de territórios do desafio.
#define TOTAL_TERRITORIOS 5


// --- Estrutura de Dados ---
// Define a estrutura de um território.
typedef struct {
    char nome[30];
    char cor[10];
    int tropas;
} Territorio;


// --- Função Principal (main) ---
// Função principal que realiza o cadastro e exibe o mapa.
int main() {

    // Vetor estático para armazenar os 5 territórios
    Territorio territorios[TOTAL_TERRITORIOS];

    printf("========================================\n");
    printf("      DESAFIO WAR ESTRUTURADO\n");
    printf("          NIVEL NOVATO\n");
    printf("========================================\n");

    // Cadastro dos territórios
    for (int i = 0; i < TOTAL_TERRITORIOS; i++) {

        printf("\n--- Cadastrando Territorio %d ---\n", i + 1);

        printf("Nome do territorio: ");
        scanf("%29s", territorios[i].nome);

        printf("Cor do exercito: ");
        scanf("%9s", territorios[i].cor);

        printf("Numero de tropas: ");
        scanf("%d", &territorios[i].tropas);
    }

    // Exibição dos dados cadastrados
    printf("\n========================================\n");
    printf("        ESTADO ATUAL DO MAPA\n");
    printf("========================================\n");

    for (int i = 0; i < TOTAL_TERRITORIOS; i++) {

        printf("\nTerritorio %d\n", i + 1);
        printf("Nome...........: %s\n", territorios[i].nome);
        printf("Cor do exercito: %s\n", territorios[i].cor);
        printf("Tropas.........: %d\n", territorios[i].tropas);
    }

    printf("\n========================================\n");
    printf("Cadastro concluido com sucesso!\n");
    printf("========================================\n");

    return 0;
}
