#include <stdio.h>

int main() {
	
	int temp, veloc, rend, dist, litr;
	
	scanf("%i", &temp);
	scanf("%i", &veloc);
	scanf("%i", &rend);
	
	dist=temp*veloc;
	litr=dist/rend;
	
	printf("R = %d", rend);
	printf("\nV = %d", veloc);
	printf("\nT = %d", temp);
	printf("\nD = %d", dist);
	printf("\nL = %d", litr);
}