#include <stdio.h>
#include <stdlib.h>

#define MAX_ATIVIDADES 100
#define ARQUIVO "atividades.bin"

// Definição da estrutura para armazenar informações da atividade
typedef struct {
    char tipo[50];
    int duracao; // em minutos
    int calorias; // calorias queimadas
} Atividade;

// Função para armazenar atividades em um arquivo binário
void salvarAtividades(Atividade atividades[], int contador) {
    FILE *file = fopen(ARQUIVO, "wb");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo para salvar.\n");
        return;
    }
    fwrite(atividades, sizeof(Atividade), contador, file);
    fclose(file);
}

// Função para carregar atividades de um arquivo binário
int carregarAtividades(Atividade atividades[]) {
    FILE *file = fopen(ARQUIVO, "rb");
    if (file == NULL) {
        return 0; // Retorna 0 se o arquivo não existir
    }
    int contador = fread(atividades, sizeof(Atividade), MAX_ATIVIDADES, file);
    fclose(file);
    return contador;
}

// Função para exibir as atividades registradas
void exibirAtividades(Atividade atividades[], int contador) {
    printf("\nAtividades registradas:\n");
    for (int i = 0; i < contador; i++) {
        printf("Atividade %d: Tipo: %s, Duração: %d minutos, Calorias: %d\n",
               i + 1, atividades[i].tipo, atividades[i].duracao, atividades[i].calorias);
    }
}

int main() {
    Atividade atividades[MAX_ATIVIDADES];
    int contador = carregarAtividades(atividades);
    char continuar;

    printf("Bem-vindo ao Gerenciador de Atividades Físicas!\n");

    // Loop para coletar informações sobre as atividades
    do {
        if (contador >= MAX_ATIVIDADES) {
            printf("Limite de atividades alcançado.\n");
            break;
        }

        printf("\n--- Registro de Atividade ---\n");
        printf("Digite o tipo da atividade (ex: corrida, ciclismo, etc.): ");
        scanf("%s", atividades[contador].tipo);

        printf("Digite a duração da atividade em minutos: ");
        scanf("%d", &atividades[contador].duracao);

        printf("Digite as calorias queimadas: ");
        scanf("%d", &atividades[contador].calorias);

        contador++;

        printf("Deseja adicionar outra atividade? (s/n): ");
        scanf(" %c", &continuar); // O espaço antes de %c é para capturar o '\n'
    } while (continuar == 's' || continuar == 'S');

    // Salvar as atividades no arquivo
    salvarAtividades(atividades, contador);

    // Exibir as atividades registradas
    exibirAtividades(atividades, contador);

    printf("\nObrigado por usar o Gerenciador de Atividades Físicas!\n");
    return 0;
}
