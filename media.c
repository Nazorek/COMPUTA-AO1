



#include <stdio.h>

int main() {
    int quantidade, total_aulas, faltas;
    float nota, soma = 0, media, porcentagem_faltas;

    printf(" CALCULO DE MEDIA COM FALTAS\n");

    printf("Informe a quantidade de notas: ");
    scanf("%d", &quantidade);

    for(int i = 1; i <= quantidade; i++) {
        printf("Digite a nota %d: ", i);
        scanf("%f", &nota);
        soma += nota;
    }

    media = soma / quantidade;

    printf("Informe o total de aulas: ");
    scanf("%d", &total_aulas);

    printf("Informe a quantidade de faltas: ");
    scanf("%d", &faltas);

    porcentagem_faltas = (faltas * 100.0) / total_aulas;

    printf("Media final: %.2f\n", media);
    printf("Frequencia: %.2f%% de faltas\n", porcentagem_faltas);

    if(media >= 8 && porcentagem_faltas <= 75) {
        printf("Situacao: Aprovado\n");
    } else if(media >= 7 && porcentagem_faltas <= 35) {
        printf("Situacao: Recuperacao\n");
    } else {
        printf("Situacao: Reprovado\n");
    }

    return 0;
}
