#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float multiplicacao, divisao, adicao, subtracao, x, y;
	
	printf(" Calculadora das quatro operações \n\n");
	
	printf("Receber x: ");
	scanf("%f", &x);
	
	printf("Receber y: ");
	scanf("%f", &y);
	
	multiplicacao = x * y;
	divisao = x / y;
	adicao = x + y;
	subtracao = x - y;
	
	printf("O resultado das quatros operações \n %.2f\n %.2f\n %.2f\n %.2f", multiplicacao, divisao, adicao, subtracao);
	
	return 0;
}
