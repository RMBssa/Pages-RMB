#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>
void limparTela() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

int main() {
	setlocale(LC_ALL, "Portuguese");
    int f;
    float c;
    int contador = 0;
    char tecla;
    for (f = -25; f < 25; f++){
        c = (5.0 / 9.0) * (f - 32);
        
        if (contador % 25 == 0) {
            limparTela();
            printf("=====================================\n");
            printf("   CONVERSÃO FAHRENHEIT -> CELSIUS\n");
            printf("=====================================\n");
            printf("Fahrenheit\tCelsius\n");
            printf("-------------------------------------\n");
        }
        printf("%d\t\t%.2f\n", f, c);
        contador++;
        
        if (contador % 25 == 0) {
            printf("\nPressione ENTER para continuar...");
            do {
            	tecla = getche();
			}while (tecla != 0x0D);
        }
    }

}
