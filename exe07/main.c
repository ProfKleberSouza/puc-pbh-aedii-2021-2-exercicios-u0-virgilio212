#include <stdio.h>

int main() {
   int n, maior, menor;
   int i=0, k=0;
   scanf("%i", &n);
   
	int vet[n];
	
	do {
			scanf("%i", &vet[k]);
	k++; } while (k<n);
	
	menor=vet[0];
	maior=vet[0];
	
	do {
	if (vet[i]>maior)
				maior=vet[i];
	if (vet[i]<menor)
				menor=vet[i];
	i++; } while (i<n);
		
	printf("MENOR = %d", menor);		
	printf("\nMAIOR = %d", maior);
	
   return 0;
}