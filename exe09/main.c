#include <stdio.h>

#define Size_of_name 500

int main() {
  
  int n;
  scanf("%i", &n);

  char nome[n][Size_of_name];
  char nomeM[n];
  double notas[n];
  double notasM[3];
    int i, j;
    int aux;
  int maior;
  double media, total;

  for(i=0;i<n;i++) {

    fflush(stdin);

    printf("\nInforme o nome do aluno %d: ", i+1);
    fgets(nome[i], Size_of_name, stdin);

    printf("Insira a nota de %s: ", nome[i]);
    scanf("%lf", &notas[i]); }

    for(i=0, total=0.0;i<n;i++)
    total+=notas[i];

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(notas[i] < notas[j]){
                aux=notas[j];
                notas[j]=notas[i];
                notas[i]=aux;
            }
        }
    }

    for(i=0;i<3;i++){
        notasM[i]=notas[i];
        nomeM[i]=nome[i];
    }





	printf("\nNOTA MEDIA = %.1f", total/n);


  for(i=0;i<3;i++){
        printf("\n%d %.1f\n", nomeM[i], notasM[i]);
    }
    


   return (0);
}