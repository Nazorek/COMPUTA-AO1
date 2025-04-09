//digitar primeiro números de notas depois as notas



#include <stdio.h>

int main() {
    int quantidade;
    float nota, soma = 0, media;

    printf("CALCULO DE MEDIA \n");

    printf("Informe a quantidade de notas: ");
    scanf("%d", &quantidade);

    for(int i = 1; i <= quantidade; i++) {
        printf("Digite a nota %d: ", i);
        scanf("%f", &nota);
        soma += nota;
    }

    media = soma / quantidade;

    printf("Media final: %.2f\n", media);

    if(media >= 6) {
        printf("Situacao: Aprovado\n");
    } else if(media >= 5) {
        printf("Situacao: Recuperacao\n");
    } else {
        printf("Situacao: Reprovado\n");
    }

    return 0;
}
