#include <stdio.h>
#include <locale.h>

	int main() {
		
		setlocale(LC_ALL, "Portuguese_Brazil");
		
		float f1, f2, f3, f4, a,b,c;
		
		printf("Calcular os resultados das fórmulas\n\n");
		
		printf("primeiro numero: ");
		scanf("%f", &a);
		
		printf("segundo numero: ");
		scanf("%f", &b);
		
		printf("terceiro numero: ");
		scanf("%f", &c);
		
		f1 = (a * b)/c;
		f2 = a * a + b + 5 * c;
		f3 = a * b * c + b + c/3 * 5 - 1;
		f4 = ((a*b*c) * (a*b*c) * (a*b*c))/2;
		
		printf("Os valores das fórmulas são \n  %.2f\n  %.2f\n  %.2f\n  %.2f\ ", f1, f2, f3, f4);
		
		return 0; 
	}
