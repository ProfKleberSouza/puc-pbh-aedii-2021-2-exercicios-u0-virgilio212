#include <stdio.h>

int main() {
	
		int i=0, k=0, j=0, m=0;
		int vet[1000];
		
		for (k=0; m==0; k++) {
			scanf("%i", &vet[k]);
			j++; 
			if (vet[k]==0) {
				m++; }
		}

		for (i=0; i<(j-1); i++) {
			if (vet[i]>0)
				printf("\nPOSITIVO");
			else if (vet[i]<0)
				printf("\nNEGATIVO"); }
		
}