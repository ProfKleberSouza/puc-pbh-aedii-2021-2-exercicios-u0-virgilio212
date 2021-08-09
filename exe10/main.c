#include <stdio.h>

int inverter(int vet[]) {
	int i=0, f=10-1;
	
	 while (i<f) {
		 trocar(vet, i, f);
		 i++; f--;
	 } }

	
int trocar(int vet[], int i, int f) {
	int aux=vet[i];
	vet[i]=vet[f];
	vet[f]=aux;
}

int main(){
	int k;
	
	int vet[10];
	
		for (k=0; k<10; k++)
			scanf("%i", &vet[k]);
		
inverter(vet);

	for (k=0; k<10; k++)
		printf("\n%d", vet[k]);
		
}