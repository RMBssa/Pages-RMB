#include <stdio.h>
#include <locale.h>
void main(void){
	setlocale(LC_ALL,"Portuguese");
	float peso, maisLeve, maisPesado;
    int i;

    printf("Digite o peso da 1ª pessoa: ");
    scanf("%f", &peso);

    maisLeve = peso;
    maisPesado = peso;

    for (i = 2; i <= 5; i++) {
        printf("Digite o peso da %dª pessoa: ", i);
        scanf("%f", &peso);

        if (peso < maisLeve) {
            maisLeve = peso;
        }

        if (peso > maisPesado) {
            maisPesado = peso;
        }
    }

    printf("\nMais leve: %.2f kg\n", maisLeve);
    printf("Mais pesado: %.2f kg\n", maisPesado);


}