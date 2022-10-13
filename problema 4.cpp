#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float massa, altura, imc;
	
	printf("Calcular o Índice de Massa Corporal (IMC)\n\n");
	
	printf("Digite a massa: ");
	scanf("%f", &massa);
	
	printf("Digite a altura: ");
	scanf("%f", &altura);
	
	imc = massa/ (altura * altura);
	
	printf("Resultado do IMC é %.2f \n" , imc);
	
	return 0 ;
}
