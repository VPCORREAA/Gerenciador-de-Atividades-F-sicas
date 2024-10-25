#include <stdio.h>
#include <stdlib.h>

#define MAX_ATIVIDADES 100

// Definição da estrutura para armazenar informações da atividade
typedef struct {
    char tipo[50];
    int duracao; // em minutos
    int calorias; // calorias queimadas
} Atividade;

int main() {
    Atividade atividades[MAX_ATIVIDADES];
    int contador = 0;
    char continuar;

    // Loop para coletar informações sobre as atividades
    do {
        if (contador >= MAX_ATIVIDADES) {
            printf("Limite de atividades alcançado.\n");
            break;
        }

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

    // Exibir as atividades registradas
    printf("\nAtividades registradas:\n");
    for (int i = 0; i < contador; i++) {
        printf("Atividade %d: Tipo: %s, Duração: %d minutos, Calorias: %d\n",
               i + 1, atividades[i].tipo, atividades[i].duracao, atividades[i].calorias);
    }

    return 0;
}
