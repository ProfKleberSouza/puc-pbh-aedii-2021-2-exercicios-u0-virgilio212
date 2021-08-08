#include <stdio.h>

int main() {
   int n=3, maior, menor;
   int k=0;
   
	int vet[n];
	
	for (k=0; k<n; k++) {
			scanf("%i", &vet[k]);
			if (k==0) {
				maior=vet[k];
				menor=vet[k]; }
			if (vet[k]>maior)
				maior=vet[k];
			if (vet[k]<menor)
				menor=vet[k]; }
		
	printf("MENOR = %d", menor);		
	printf("\nMAIOR = %d", maior);
	
   return 0;
}