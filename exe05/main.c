#include <stdio.h>

int main() {
	
		int num, total=0;
		double nota, soma=0;
		int k;
		
		
		for (k=1; k<5; k++) {
			num=0;
			scanf("%i", &num);
			soma=num+soma;
			total++; }
			
			nota=soma/total;
			printf("NOTA = %.1f", nota);
			
			if (nota>=6)
				printf(" (APROVADO)");
			else
				printf(" (REPROVADO)");

		
}