#include <stdio.h>
#include <locale.h>
void main(void) {
	setlocale (LC_ALL, "Portuguese");
    float nota, soma = 0.0, media;
    int i = 1, totalAlunos = 50;

    while(i<=totalAlunos) {
        printf("Digite a nota do aluno numero %d: ", i);
        scanf("%f", &nota);
        soma += nota;
        i++;
    }
    media = soma / totalAlunos;
    printf("\nMedia da turma = %.2f\n", media);


}

