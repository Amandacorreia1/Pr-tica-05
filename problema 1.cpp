#include <stdio.h>
#include <locale.h>

   int main() {
   	
   	setlocale(LC_ALL, "Portuguese_Brazil");
   	
   	int minutos, qtdSegundos;
   	
   	printf("Programa para tranformar minutos em segundos \n\n");
   	
   	printf("Receber minutos: ");
   	scanf("%d", &minutos);
   	
   	
   	 qtdSegundos = minutos * 60;
	
   	 
   	printf("Existem %d segundos em %d minutos", qtdSegundos, minutos);
   	
   	
   	return 0;
   }
   

