#include <stdio.h>

int main() {

    float nota;
    float frequencia;
    int total_aulas, aulas_frequentes;

    printf("Digite a nota do estudante: ");
    scanf("%f", &nota);

    printf("Digite o numero total de aulas ministradas: ");
    scanf("%d", &total_aulas);

    printf("Digite o numero de aulas que o estudante frequentou: ");
    scanf("%d", &aulas_frequentes);

    frequencia = ((float)aulas_frequentes / total_aulas) * 100;

    if (nota >= 7.0 && frequencia >= 75.0) {
        printf("O estudante foi aprovado!\n");
    } else {
        printf("O estudante foi reprovado.\n");
    }

    return 0;
}
