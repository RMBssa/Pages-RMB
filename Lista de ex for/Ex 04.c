#include <stdio.h>
#include <locale.h>
void main(void){
	int n , i;
	float H=0.0;

    printf("Digite o valor de n: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Digite um valor maior que zero.\n");
        return 1;
    }

    for (i = 1; i <= n; i++) {
        H += 1.0 / i;
    }

    printf("Valor de H = %.4f\n", H);	
}