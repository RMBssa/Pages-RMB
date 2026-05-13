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
	setlocale(LC_ALL,"Portuguese");
    int metros;
    float pes;
    int contador = 0;
    char tecla;

    for (metros = 0; metros <= 100; metros++) {

        pes = metros * 3.28084;

    
        if (contador % 20 == 0) {
            limparTela();
            printf("=====================================\n");
            printf("     CONVERSÃO METROS -> PÉS\n");
            printf("=====================================\n");
            printf("Metros\t\tPés\n");
            printf("-------------------------------------\n");
        }

        printf("%d\t\t%.2f\n", metros, pes);
        contador++;
        
        if (contador % 20 == 0) {
            printf("\nPressione ENTER para continuar...");

            do {
                tecla = getche();
            } while (tecla != 0x0D);
        }
    }

}