#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int dinheiro, cafe, troco;
	
	printf("Calcular o troco perdido na m�quina de caf�\n\n");
	
	printf("Receber dinheiro: ");
	scanf("%d", &dinheiro);
	
	
	troco = dinheiro % 7;
	
	printf("Troco perdido � %d" , troco);
	
	return 0;
	
}
