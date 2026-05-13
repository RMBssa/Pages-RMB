#include <stdio.h>
#include<locale.h>

void main(void) {
	setlocale (LC_ALL, "Portuguese");
    int num, quantidade = 0 , soma = 0 , primeiro = 1;
    printf("Digite numeros (-1 para encerrar):\n");
    while (1) {
        scanf("%d", &num);

        if (num == -1) {
            break;
        }

        if (primeiro) {
            printf("%d", num);
            primeiro = 0;
        } else {
            printf(", %d", num);
        }

        quantidade++;
        soma += num;
    }

    printf("\nQuantidade de numeros: %d\n", quantidade);
    printf("Soma dos valores: %d\n", soma);


}