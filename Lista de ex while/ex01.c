#include <stdio.h>
#include <locale.h>

void main(void) {
	setlocale(LC_ALL,"Portuguese");
    int inicio, fim, f;
    float celsius;
    printf("Digite o valor inicial em Fahrenheit: ");
    scanf("%d", &inicio);
    printf("Digite o valor final em Fahrenheit: ");
    scanf("%d", &fim);
    printf("\nCONVERSAO FAHREINHEIT - CELSIUS\n");
    printf("CELSIUS\t\tFAHREINHEIT\n");
    f = inicio;

    while( f <= fim) {
        celsius = (5.0 / 9.0) * (f - 32);
        printf("%.2f\t\t%d\n", celsius, f);
        f++;
    }


}