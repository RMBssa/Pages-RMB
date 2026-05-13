#include <stdio.h>
#include <locale.h>
void main(void){
	setlocale(LC_ALL,"Portuguese");
	int n, i = 0;
	printf("Digite um número inteiro: ");
	scanf("%d",&n);
	printf("Tabuada do %d:\n",n);
	
	while (i<=10){
	   printf("%d x %d = %d\n", n, i, n*i);
	   i++;
	   
	}
	
}