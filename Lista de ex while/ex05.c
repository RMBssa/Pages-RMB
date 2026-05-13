#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main(void) {
    setlocale(LC_ALL,"Portuguese");
	int n, i = 1;

    printf("Digite um numero inteiro maior que 1: ");
    scanf("%d", &n);


    while (i <= n) {
        printf("%d ", i);
        i++;
    }
    
    if (n <= 1) {
        printf("Valor invalido! Digite uma tecla para continuar: ");
        getch();
        system("cls");
        fflush(stdin);
    }

    printf("\n");

}