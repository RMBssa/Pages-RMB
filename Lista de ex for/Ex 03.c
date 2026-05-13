#include <stdio.h>
#include <locale.h>
void main(void)
{
setlocale(LC_ALL, "Portuguese");
int inicio, fim, i;

printf("Digite o valor inicial: ");
scanf("%d", &inicio);

printf("Digite o valor final: ");
scanf("%d", &fim);

printf("\nSequencia:\n");

    if (inicio <= fim) {
        for (i = inicio; i <= fim; i++) {
            printf("%d ", i);
        }
    }

    else {
        for (i = inicio; i >= fim; i--) {
            printf("%d ", i);
        }
    }

    printf("\n");

}

