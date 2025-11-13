#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// --- Constantes Globais ---
#define MAX_TERRITORIOS 5
#define TAM_STRING 100

// --- Definição de Estrutura (struct) ---
struct Territorio {
    char nome[TAM_STRING];
    char corExercito[TAM_STRING];
    int numTropas;
};

// --- Função para limpar buffer de entrada ---
void limparBufferEntrada() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// --- Função Principal (main) ---
int main() {
    struct Territorio mapa[MAX_TERRITORIOS];
    int i;

    printf("==================================\n");
    printf("     DESAFIO WAR     \n");
    printf("==================================\n");
    printf("Vamos cadastrar os 5 territorios iniciais do nosso mundo.\n\n");

    //  

    for (i = 0; i < MAX_TERRITORIOS; i++) {
        
        printf("--- Cadastrando Territorio %d ---\n", i + 1);

        // Listagem dos territórios
        printf("Digite o nome: ");
        fgets(mapa[i].nome, TAM_STRING, stdin);
        printf("Digite a cor do exercito: ");
        fgets(mapa[i].corExercito, TAM_STRING, stdin);

        mapa[i].nome[strcspn(mapa[i].nome, "\n")] = '\0';
        mapa[i].corExercito[strcspn(mapa[i].corExercito, "\n")] = '\0';

        // Peça o Número de Tropas (use scanf)
        printf("Digite o numero de tropas: ");
        scanf("%d", &mapa[i].numTropas);
        limparBufferEntrada();


        printf("\n");
    }

    printf("\n\n==================================\n");
    printf("       ESTADO ATUAL DO MAPA       \n");
    printf("==================================\n");

    //Listagem dos Territórios e suas características
    for (i = 0; i < MAX_TERRITORIOS; i++) {
        
        printf("\n--- Territorio %d ---\n", i + 1);
        printf(" - Nome: %s\n", mapa[i].nome);
        printf(" - Dominado por: %s\n", mapa[i].corExercito);
        printf(" - Tropas: %d\n", mapa[i].numTropas);

        printf("\n");

    }
    printf("---------------------\n");


    return 0;
}
