#include <stdio.h> 
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float base, altura, area;
	
	printf("Calcular a área de um triângulo\n\n");
	
	printf("Receber o valor da base: ");
	scanf("%f", &base);
	
	printf("Receber o valor da altura: ");
	scanf("%f", &altura);
	
	area = (base * altura)/2;
	
	printf("O valor da área do triângulo é: %.2f", area);
	
	return 0;
}
