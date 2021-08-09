#include <stdio.h>

int main() {
	
	int k;
	int vet[3];
	
		for (k=0; k<3; k++)
			scanf("%i", &vet[k]); 

	if((vet[1]!=vet[2])&&(vet[1]!=vet[3])&&(vet[2]!=13))
		printf("TRIANGULO ESCALENO");
		
	
	else { if((vet[1]==vet[2])&&(vet[2]==vet[3]))
		printf("TRIANGULO EQUILATERO");
	
	else
		printf("TRIANGULO ISOSCELES"); }
		
}