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
    printf("        NIVEL NOVATO\n");
    printf("========================================\n");

    // Cadastro dos territórios
    for (int i = 0; i < TOTAL_TERRITORIOS; i++) {

        printf("\n--- Cadastrando Territorio %d ---\n", i + 1
